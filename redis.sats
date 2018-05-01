%{#
#include "hiredis/hiredis.h"
%} 

staload TIME = "libats/libc/SATS/sys/time.sats"

(************************************
	Macros Imported from hiredis.h
 ************************************)

macdef HIREDIS_MAJOR            = $extval (int, "HIREDIS_MAJOR")
macdef HIREDIS_MINOR            = $extval (int, "HIREDIS_MINOR")
macdef HIREDIS_PATCH            = $extval (int, "HIREDIS_PATCH")
macdef HIREDIS_SONAME           = $extval (int, "HIREDIS_SONAME")

macdef REDIS_ERR                = $extval (int, "REDIS_ERR")
macdef REDIS_OK                 = $extval (int, "REDIS_OK")

macdef REDIS_ERR_IO             = $extval (int, "REDIS_ERR_IO")
macdef REDIS_ERR_EOF            = $extval (int, "REDIS_ERR_EOF")
macdef REDIS_ERR_PROTOCOL       = $extval (int, "REDIS_ERR_PROTOCOL")
macdef REDIS_ERR_OOM            = $extval (int, "REDIS_ERR_OOM")
macdef REDIS_ERR_OTHER          = $extval (int, "REDIS_ERR_OTHER")

datatype redisErrType = 
| RedisErrIo       
| RedisErrEof      
| RedisErrProtocol 
| RedisErrOom      
| RedisErrOther    

macdef REDIS_BLOCK              = $extval (int, "REDIS_BLOCK")
macdef REDIS_CONNECTED          = $extval (int, "REDIS_CONNECTED")
macdef REDIS_DISCONNECTING      = $extval (int, "REDIS_DISCONNECTING")
macdef REDIS_FREEING            = $extval (int, "REDIS_FREEING")
macdef REDIS_IN_CALLBACK        = $extval (int, "REDIS_IN_CALLBACK")
macdef REDIS_SUBSCRIBED         = $extval (int, "REDIS_SUBSCRIBED")
macdef REDIS_MONITORING         = $extval (int, "REDIS_MONITORING")

macdef REDIS_REUSEADDR          = $extval (int, "REDIS_REUSEADDR")
macdef REDIS_CONNECT_RETRIES    = $extval (int, "REDIS_CONNECT_RETRIES")
macdef REDIS_KEEPALIVE_INTERVAL = $extval (int, "REDIS_KEEPALIVE_INTERVAL")
macdef REDIS_READER_MAX_BUF     = $extval (int, "REDIS_READER_MAX_BUF")

macdef REDIS_REPLY_STRING       = $extval (int, "REDIS_REPLY_STRING")
macdef REDIS_REPLY_ARRAY        = $extval (int, "REDIS_REPLY_ARRAY")
macdef REDIS_REPLY_INTEGER      = $extval (int, "REDIS_REPLY_INTEGER")
macdef REDIS_REPLY_NIL          = $extval (int, "REDIS_REPLY_NIL")
macdef REDIS_REPLY_STATUS       = $extval (int, "REDIS_REPLY_STATUS")
macdef REDIS_REPLY_ERROR        = $extval (int, "REDIS_REPLY_ERROR")

datatype redisReplyType = 
| RedisReplyString 
| RedisReplyArray  
| RedisReplyInteger
| RedisReplyNil    
| RedisReplyStatus 
| RedisReplyError  


(************************************
	Data Structures 
 ************************************)

vtypedef redisContext      (l:addr) = ptr l
vtypedef redisAsyncContext (l:addr) = ptr l
vtypedef redisReply        (l:addr) = ptr l

vtypedef redisContext      = [l:addr|l>null] redisContext (l)
vtypedef redisAsyncContext = [l:addr|l>null] redisAsyncContext (l)
vtypedef redisReply        = [l:addr|l>null] redisReply (l)


(************************************
	Connection Related
 ************************************)

fun 
redisConnect (ip: string, port: int): [l:addr] redisContext l = 
"mac#redisConnect"

fun 
redisConnectExn (ip: string, port: int): redisContext

fun 
redisConnectWithTimeout (ip: string, port: int, timeout: $TIME.timeval): [l:addr] redisContext l =
"mac#redisConnectWithTimeout"

fun 
redisConnectNonBlock (ip: string, port: int): [l:addr] redisContext l =
"mac#redisConnectNonBlock"

fun 
redisConnectBindNonBlock (ip: string, port: int, source_addr: string): [l:addr] redisContext l =
"mac#redisConnectBindNonBlock"

fun 
redisConnectBindNonBlockWithReuse (ip: string, port: int, source_addr: string): [l:addr] redisContext l = 
"mac#redisConnectBindNonBlockWithReuse"

fun 
redisConnectUnix (path: string): [l:addr] redisContext l =
"mac#redisConnectUnix"

fun 
redisConnectUnixWithTimeout (path: string, timeout: $TIME.timeval): [l:addr] redisContext l =
"mac#redisConnectUnixWithTimeout"

fun 
redisConnectUnixNonBlock (path: string): [l:addr] redisContext l =
"mac#redisConnectUnixNonBlock"

fun
redisConnectFd (fd: int): [l:addr] redisContext l = 
"mac#redisConnectFd"

fun 
redisReconnect (c: !redisContext): int = 
"mac#redisReconnect"


(************************************
	Context Related
 ************************************)

fun 
redisContextIsNull {l:addr} (c: !redisContext l): bool (l==null) = 
"mac#pointerIsNull"

fun 
redisContextIsNotNull {l:addr} (c: !redisContext l): bool (l>null) = 
"mac#pointerIsNotNull"

fun 
redisFree (c: redisContext): void = 
"mac#redisFree"

fun 
redisFreeKeepFd (c: redisContext): int = 
"mac#redisFreeKeepFd"

fun 
redisContextErr (c: !redisContext): redisErrType
overload .err with redisContextErr

fun 
redisContextErrStr (c: !redisContext): string
overload .errstr with redisContextErrStr


(************************************
	Configuration Related
 ************************************)

fun
redisSetTimeout (c: !redisContext, timeout: $TIME.timeval): int =
"mac#redisSetTimeout"

fun
redisEnableKeepAlive (c: !redisContext): int =
"mac#redisEnableKeepAlive"


(************************************
	Buffer Related
 ************************************)

fun
redisBufferRead (c: !redisContext): int =
"mac#redisBufferRead"

fun
redisBufferWrite (c: !redisContext, done: &int? >> int): int =
"mac#redisBufferWrite"


(************************************
	Reply Related
 ************************************)

fun 
freeReplyObject (reply: redisReply): void = 
"mac#freeReplyObject"

fun 
redisReplyIsNull {l:addr} (reply: !redisReply l): bool (l==null) =
"mac#pointerIsNull"

fun
redisReplyIsNotNull {l:addr} (reply: !redisReply l): bool (l>null) =
"mac#pointerIsNotNull"

fun 
redisGetReply (c: !redisContext, reply: &redisReply? >> redisReply): int =
"mac#redisGetReply"

fun 
redisGetReplyFromReader (c: !redisContext, reply: &redisReply? >> redisReply): int =
"mac#redisGetReplyFromReader"

fun 
redisReplyGetType (reply: !redisReply): redisReplyType 
overload .type with redisReplyGetType

fun 
redisReplyGetInteger (reply: !redisReply): int 
overload .integer with redisReplyGetInteger

fun 
redisReplyGetStr (reply: !redisReply): string 
overload .str with redisReplyGetStr

fun 
redisReplyGetElement (reply: !redisReply): [n:int] (int n, arrayref (redisReply, n))
overload .element with redisReplyGetElement


(*********************************************
	Command Related
 *********************************************)

fun
redisCommand {ts:types} (c: !redisContext, fmt: string, args: ts): [l:addr] redisReply l =
"mac#redisCommand"

fun 
redisCommandExn {ts:types} (c: !redisContext, fmt: string, args: ts): redisReply =
"ext#redisCommandExn"

fun 
redisAppendCommand {ts:types} (c: !redisContext, fmt: string, args: ts): int = 
"mac#redisAppendCommand" 

fun
redisFormatCommand {ts:types} (target: &string? >> string, fmt: string, args: ts): int = 
"mac#redisFormatCommand"

fun 
redisFreeCommand (cmd: string): void =
"mac#redisFreeCommand"


(************************************
	Async Related
 ************************************)

typedef redisDisconnectCallback  = (!redisAsyncContext, int) -> void
typedef redisConnectCallback     = (!redisAsyncContext, int) -> void
typedef redisCallbackFn (a:type) = (!redisAsyncContext, redisReply, a) -> void

fun 
redisAsyncConnect (ip: string, port: int): [l:addr] redisAsyncContext l =
"mac#redisAsyncConnect"

fun 
redisAsyncConnectBind (ip: string, port: int, source_addr: string): [l:addr] redisAsyncContext l =
"mac#redisAsyncConnectBind"

fun 
redisAsyncConnectBindWithReuse (ip: string, port: int, source_addr: string): [l:addr] redisAsyncContext l =
"mac#redisAsyncConnectBindWithReuse"

fun 
redisAsyncConnectUnix (path: string): [l:addr] redisAsyncContext l = 
"mac#redisAsyncConnectUnix"

fun 
redisAsyncSetConnectCallback (ac: !redisAsyncContext, redisConnectCallback): int = 
"mac#redisAsyncSetConnectCallback"

fun 
redisAsyncSetDisconnectCallback (ac: !redisAsyncContext, redisDisconnectCallback): int = 
"mac#redisAsyncSetDisconnectCallback"

fun 
redisAsyncConnectIsNull {l:addr} (ac: !redisAsyncContext l): bool (l==null) =
"mac#pointerIsNull"

fun
redisAsyncConnectIsNotNull {l:addr} (ac: !redisAsyncContext l): bool (l>null) =
"mac#pointerIsNotNull"

fun 
redisAsyncDisconnect (ac: !redisAsyncContext): void =
"mac#redisAsyncDisconnect"

fun  
redisAsyncFree (ac: redisAsyncContext): void = 
"mac#redisAsyncFree"

fun 
redisAsyncHandleRead (ac: !redisAsyncContext): void = 
"mac#redisAsyncHandleRead"

fun 
redisAsyncHandleWrite (ac: !redisAsyncContext): void = 
"mac#redisAsyncHandleWrite"

fun 
redisAsyncCommand {a:type} {ts:types}
(ac: !redisAsyncContext, f: redisCallbackFn a, privdata: a, format: string, args: ts): int = 
"mac#redisAsyncCommand"

