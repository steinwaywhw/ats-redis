#include "share/atspre_staload.hats"
staload "./redis.sats"

#define ATS_DYNLOADFLAG 0


implement main0 () = let
    
    extern fun printf {ts:types} (fmt: string, args: ts): void = "mac#printf"

    val c = redisConnectExn ("localhost", 6379)
    val _ = printf ("%s\n", $vararg(c.errstr()))

    val reply = redisCommandExn (c, "PING", $vararg())
    val _     = printf ("PING: %s\n", $vararg(reply.str()))
    val _     = freeReplyObject reply

    val reply = redisCommandExn (c, "SET %s %s", $vararg("foo", "hello world"))
    val _     = printf ("SET: %s\n", $vararg(reply.str()))
    val _     = freeReplyObject reply

    val reply = redisCommandExn (c, "SET %b %b", $vararg("bar", 3, "hello", 5))
    val _     = printf ("SET (binary API): %s\n", $vararg(reply.str()))
    val _     = freeReplyObject reply

    val reply = redisCommandExn (c, "GET foo", $vararg())
    val _     = printf ("GET foo: %s\n", $vararg(reply.str()))
    val _     = freeReplyObject reply

    val reply = redisCommandExn (c, "INCR counter", $vararg())
    val _     = printf ("INCR counter: %lld\n", $vararg(reply.integer()))
    val _     = freeReplyObject reply

    val reply = redisCommandExn (c, "INCR counter", $vararg())
    val _     = printf ("INCR counter: %lld\n", $vararg(reply.integer()))
    val _     = freeReplyObject reply

    val reply = redisCommandExn (c, "DEL mylist", $vararg())
    val _     = freeReplyObject reply

    fun loop1 (i:int): void = 
        if i >= 10 then ()
        else let 
            val reply = redisCommandExn (c, "LPUSH mylist element-%d", $vararg(i))
            val _     = freeReplyObject reply
        in 
            loop1 (i+1)
        end 

    val _ = loop1 0

    val reply            = redisCommandExn (c, "LRANGE mylist 0 -1", $vararg())
    val (size, elements) = reply.element()

    fun loop2 {i:nat} (i: int i): void =
        if i >= size then ()
        else let 
            val element = elements[i]
            val _ = printf ("%u) %s\n", $vararg(i, element.str()));
        in 
            loop2 (i+1)
        end

    val _ = loop2 0
    val _ = freeReplyObject reply

in
    redisFree c
end
