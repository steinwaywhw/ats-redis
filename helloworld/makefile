

example: example.c 
	gcc example.c -o example -l hiredis


expand: 
	gcc -E redis_dats.c -I/home/hwwu/Programs/ats/ -I/home/hwwu/Programs/ats/ccomp/runtime/ >> expand.c
	
ats2:
	patsopt --output redis_sats.c --static redis.sats
	patsopt --output redis_dats.c --dynamic redis.dats
