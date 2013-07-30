%{#
#include "hiredis/hiredis.h"
%} 

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
redis_free_reply (reply: redis_reply_ptr_1): void = 
"mac#freeReplyObject"


symintr redis_command

fun
redis_command_valist {ts: types} (ctx: !redis_ctx_ptr_1, fmt: string, args: ts): redis_reply_ptr_1 =
"mac#redisCommandHandler"

fun
redis_command_str (ctx: !redis_ctx_ptr_1, cmd: string): redis_reply_ptr_1 = 
"mac#redisCommandHandler"

overload redis_command with redis_command_valist
overload redis_command with redis_command_str


(*********************************************
	Dealing with redisReply structure
 *********************************************)

fun 
redis_reply_get_string (reply: !redis_reply_ptr_1): string =
"mac#redis_reply_get_string"

fun
redis_reply_get_integer (reply: !redis_reply_ptr_1): int = 
"mac#redis_reply_get_integer"