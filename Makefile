

CC=clang
CCFLAGS=-fPIC -O2 -I$(PATSHOME) -I$(PATSHOME)/ccomp/runtime -g

testsrc: test.dats 
	patscc -o a.out -lhiredis test.dats 

testlib: libatsredis.a test.dats
	patscc -o a.out -L$(PWD) -lhiredis -latsredis test.dats

%_dats.c: %.dats 
	patsopt -o $@ -d $^

%_sats.c: %.sats 
	patsopt -o $@ -s $^

%.o: %.c
	$(CC) $(CCFLAGS) -o $@ -c $^

libatsredis.a: redis_dats.o 
	ar rcs $@ $^

clean:
	rm -rf *ats.c *.o 

cleanall: clean
	rm -rf *.a *.out

redisd:
	docker run --rm -p 6379:6379 --name redisd -d redis 

redis-cli:
	docker run -it --rm --link redisd:redisd redis redis-cli -h redisd -p 6379