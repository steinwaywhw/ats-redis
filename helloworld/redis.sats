%{#
#include "hiredis/hiredis.h"
%} 

staload TIME = "libc/sys/SATS/time.sats"

(************************************
	Macros Imported from hiredis.h
 ************************************)

macdef HIREDIS_MAJOR = $extval (int, "HIREDIS_MAJOR")
macdef HIREDIS_MINOR = $extval (int, "HIREDIS_MINOR")
macdef HIREDIS_PATCH = $extval (int, "HIREDIS_PATCH")

macdef REDIS_ERR = $extval (int, "REDIS_ERR")
macdef REDIS_OK = $extval (int, "REDIS_OK")

macdef REDIS_ERR_IO = $extval (int, "REDIS_ERR_IO")
macdef REDIS_ERR_EOF = $extval (int, "REDIS_ERR_EOF")
macdef REDIS_ERR_PROTOCOL = $extval (int, "REDIS_ERR_PROTOCOL")
macdef REDIS_ERR_OOM = $extval (int, "REDIS_ERR_OOM")
macdef REDIS_ERR_OTHER = $extval (int, "REDIS_ERR_OTHER")

macdef REDIS_BLOCK = $extval (int, "REDIS_BLOCK")
macdef REDISCONNECTED = $extval (int, "REDISCONNECTED")
macdef REDIS_DISCONNECTING = $extval (int, "REDIS_DISCONNECTING")
macdef REDIS_FREEING = $extval (int, "REDIS_FREEING")
macdef REDIS_IN_CALLBACK = $extval (int, "REDIS_IN_CALLBACK")
macdef REDIS_SUBSCRIBED = $extval (int, "REDIS_SUBSCRIBED")
macdef REDIS_MONITORING = $extval (int, "REDIS_MONITORING")

macdef REDIS_REPLY_STRING = $extval (int, "REDIS_REPLY_STRING")
macdef REDIS_REPLY_ARRAY = $extval (int, "REDIS_REPLY_ARRAY")
macdef REDIS_REPLY_INTEGER = $extval (int, "REDIS_REPLY_INTEGER")
macdef REDIS_REPLY_NIL = $extval (int, "REDIS_REPLY_NIL")
macdef REDIS_REPLY_STATUS = $extval (int, "REDIS_REPLY_STATUS")
macdef REDIS_REPLY_ERROR = $extval (int, "REDIS_REPLY_ERROR")

macdef REDIS_READER_MAX_BUF = $extval (int, "REDIS_READER_MAX_BUF")
macdef REDIS_KEEPALIVE_INTERVAL = $extval (int, "REDIS_KEEPALIVE_INTERVAL")

(************************************
	Data Structures 
 ************************************)

absvtype redisContext (l: addr)
vtypedef redisContext0 = [l: addr] redisContext (l)
vtypedef redisContext1 = [l: addr | l > null] redisContext (l)

absvtype redisReply (l: addr)
vtypedef redisReply0 = [l: addr] redisReply (l)
vtypedef redisReply1 = [l: addr | l > null] redisReply (l)

absvtype redisReader (l: addr)
vtypedef redisReader0 = [l: addr] redisReader (l)
vtypedef redisReader1 = [l: addr | l > null] redisReader (l)


(************************************
	Connect Family
 ************************************)

fun 
redisConnect (ip: string, port: int): redisContext0 = 
"mac#redisConnect"

fun 
redisConnectWithTimeout (ip: string, port: int, timeout: $TIME.timeval): redisContext0 =
"mac#redisConnectWithTimeout"

fun 
redisConnectNonBlock (ip: string, port: int): redisContext0 =
"mac#redisConnectNonBlock"

fun 
redisConnectUnix (path: string): redisContext0 =
"mac#redisConnectUnix"

fun 
redisConnectUnixWithTimeout (path: string, timeout: $TIME.timeval): redisContext0 =
"mac#redisConnectUnixWithTimeout"

fun 
redisConnectUnixNonBlock (path: string): redisContext0 =
"mac#redisConnectUnixNonBlock"


(************************************
	Context Related
 ************************************)

fun 
redisContextIsNull {l: addr} (ctx: !redisContext (l)): bool (l == null) = 
"mac#pointerIsNull"

fun 
redisContextIsNotNull {l: addr} (ctx: !redisContext (l)): bool (l > null) = 
"mac#pointerIsNotNull"

fun 
redisFree (ctx: redisContext1): void = 
"mac#redisFree"


(************************************
	Reply Related
 ************************************)

fun 
freeReplyObject (reply: redisReply1): void = 
"mac#freeReplyObject"

fun 
redisReplyIsNull {l: addr} (reply: !redisReply (l)): bool (l == null) =
"mac#pointerIsNull"

fun
redisReplyIsNotNull {l: addr} (reply: !redisReply (l)): bool (l > null) =
"mac#pointerIsNotNull"

fun 
redisGetReply (ctx: !redisContext1, reply: &redisReply0? >> redisReply0): int =
"mac#redisGetReply"

fun 
redisGetReplyFromReader (ctx: !redisContext1, reply: &redisReply0? >> redisReply0): int =
"mac#redisGetReplyFromReader"

fun 
redisReplyGetString (reply: !redisReply1): string =
"mac#redisReplyGetString"

fun
redisReplyGetInteger (reply: !redisReply1): int = 
"mac#redisReplyGetInteger"


(*********************************************
	Dealing with redisReader
 *********************************************)

fun 
redisReaderCreate (): redisReader0 = 
"mac#redisReaderCreate"

fun 
redisReaderIsNull {l: addr} (reader: !redisReader (l)): bool (l == null) = 
"mac#pointerIsNull"

fun 
redisReaderIsNotNull {l: addr} (reader: !redisReader (l)): bool (l > null) = 
"mac#pointerIsNotNull"

fun 
redisReaderFree (reader: redisReader1): void = 
"mac#redisReaderFree"

fun 
redisReaderFeed {n: nat} (reader: !redisReader1, buf: &(@[byte?][n]) >> @[byte][n], len: int (n)): int =
"mac#redisReaderFeed"


fun 
redisReaderGetReply (reader: !redisReader1, reply: &redisReply0? >> redisReply0): int =
"mac#redisReaderGetReply"


(************************************
	Configuration Related
 ************************************)

fun
redisSetTimeout (ctx: !redisContext1, timeout: $TIME.timeval): int =
"mac#redisSetTimeout"

fun
redisEnableKeepAlive (ctx: !redisContext1): int =
"mac#redisEnableKeepAlive"

(************************************
	Buffer Related
 ************************************)

fun
redisBufferRead (ctx: !redisContext1): int =
"mac#redisBufferRead"

fun
redisBufferWrite (ctx: !redisContext1, done: &int? >> int): int =
"mac#redisBufferWrite"


(*********************************************
	Dealing with redisCommand
 *********************************************)

symintr redisCommand

fun
redisCommand_valist {ts: types} (ctx: !redisContext1, fmt: string, args: ts): redisReply1 =
"mac#redisCommandHandler"

fun
redisCommand_string (ctx: !redisContext1, cmd: string): redisReply1 = 
"mac#redisCommandHandler"

overload redisCommand with redisCommand_valist
overload redisCommand with redisCommand_string

(*********************************************
	Dealing with redisAppendCommand
 *********************************************)

symintr redisAppendCommand

fun 
redisAppendCommand_valist {ts: types} (ctx: !redisContext1, fmt: string, args: ts): int =
"mac#redisAppendCommandHandler"

fun 
redisAppendCommand_string (ctx: !redisContext1, cmd: string): int =
"mac#redisAppendCommandHandler"

overload redisAppendCommand with redisAppendCommand_valist
overload redisAppendCommand with redisAppendCommand_string

(*********************************************
	Dealing with redisFormatCommand
 *********************************************)

symintr redisFormatCommand

fun
redisFormatCommand_valist {ts: types} (target: &string? >> string, fmt: string, args: ts): int = 
"mac#redisFormatCommandHandler"

fun
redisFormatCommand_string (target: &string? >> string, cmd: string): int = 
"mac#redisFormatCommandHandler"

overload redisFormatCommand with redisFormatCommand_valist
overload redisFormatCommand with redisFormatCommand_string

