#include "share/atspre_staload.hats"
staload UNSAFE = "prelude/SATS/unsafe.sats"
staload "./redis.sats"

#define ATS_DYNLOADFLAG 0


(************************************
    Exn Versions
 ************************************)

exception RuntimeException 

implement redisConnectExn (ip, port) = let 
    val c = redisConnect (ip, port)
    val _ = assertloc (redisContextIsNotNull c)
in 
    c
end

%{^

redisReply* redisCommandExn(redisContext* c, char* fmt, ...) {
    va_list vl;
    va_start(vl, fmt);
    redisReply* r = redisvCommand(c, fmt, vl);
    va_end(vl);

    if (r != NULL) return r;
    exit(-1);
}

%}


(************************************
    Handle redisContext struct
 ************************************)

%{^

int   _redisContextErr(redisContext* c)    { return c->err; }
char* _redisContextErrStr(redisContext* c) { return c->errstr; }

%}


implement redisContextErr (c) = let 
    val err = $extfcall(int, "_redisContextErr", $UNSAFE.castvwtp1{ptr} c)
in 
    case- err of 
    | _ when err = REDIS_ERR_IO       => RedisErrIo
    | _ when err = REDIS_ERR_EOF      => RedisErrEof
    | _ when err = REDIS_ERR_PROTOCOL => RedisErrProtocol
    | _ when err = REDIS_ERR_OOM      => RedisErrOom
    | _ when err = REDIS_ERR_OTHER    => RedisErrOther
end


implement redisContextErrStr (c) = 
$extfcall(string, "_redisContextErrStr", $UNSAFE.castvwtp1{ptr} c)


(************************************
    Handle redisReply struct
 ************************************)

%{^

int                  _redisReplyGetType(redisReply* reply)     { return reply->type; }
long long            _redisReplyGetInteger(redisReply* reply)  { return reply->integer; }
char*                _redisReplyGetStr(redisReply* reply)      { return reply->str; }
size_t               _redisReplyGetElements(redisReply* reply) { return reply->elements; }
struct redisReply ** _redisReplyGetElement(redisReply* reply)  { return reply->element; }

%}

implement  
redisReplyGetType (reply) = let 
    val x = $extfcall(int, "_redisReplyGetType", $UNSAFE.castvwtp1{ptr} reply)
in 
    case- x of 
    | _ when x = REDIS_REPLY_STRING  => RedisReplyString
    | _ when x = REDIS_REPLY_ARRAY   => RedisReplyArray
    | _ when x = REDIS_REPLY_INTEGER => RedisReplyInteger
    | _ when x = REDIS_REPLY_NIL     => RedisReplyNil
    | _ when x = REDIS_REPLY_STATUS  => RedisReplyStatus
    | _ when x = REDIS_REPLY_ERROR   => RedisReplyError
end

implement  
redisReplyGetInteger (reply) = 
$extfcall(int, "_redisReplyGetInteger", $UNSAFE.castvwtp1{ptr} reply)


implement  
redisReplyGetStr (reply) = 
$extfcall(string, "_redisReplyGetStr", $UNSAFE.castvwtp1{ptr} reply)

implement  
redisReplyGetElement (reply) = let 
    val [n:int] len = $extfcall([n:int] int(n), "_redisReplyGetElements", $UNSAFE.castvwtp1{ptr} reply)
    val ptr = $extfcall(arrayref(redisReply,n), "_redisReplyGetElement", $UNSAFE.castvwtp1{ptr} reply)
in 
    (len, ptr)
end


(************************************
    Handle Pointer Nill
 ************************************)

%{^

int pointerIsNull (void *ptr)    { return ptr == NULL; }
int pointerIsNotNull (void *ptr) { return ptr != NULL; }

%}

