%{#
#include "hiredis/hiredis.h"
%} 

//absvt@ype redis_ctx = $extype "redisContext"
//absvt@ype redis_reply = $extype "redisReply"


absvtype redis_ctx_ptr (l: addr) = ptr
vtypedef redis_ctx_ptr_0 = [l: addr] redis_ctx_ptr (l)
vtypedef redis_ctx_ptr_1 = [l: addr | l > null] redis_ctx_ptr (l)

absvtype redis_reply_ptr (l: addr) = ptr
vtypedef redis_reply_ptr_0 = [l: addr] redis_reply_ptr (l)
vtypedef redis_reply_ptr_1 = [l: addr | l > null] redis_reply_ptr (l)


fun 
redis_connect (host: string, port: int): redis_ctx_ptr_1 = 
"mac#redisConnect"

fun 
redis_free_ctx (ctx: redis_ctx_ptr_1): void = 
"mac#redisFree"

fun
redis_command (ctx: !redis_ctx_ptr_1, cmd: string): redis_reply_ptr_1 =
"mac#redisCommand"

fun 
redis_free_reply (reply: redis_reply_ptr_1): void = 
"mac#freeReplyObject"

