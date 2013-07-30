staload "redis.sats"
staload "libc/SATS/stdarg.sats"



implement 
main () = let
	val ctx = redis_connect ("127.0.0.1", 6379)
	val reply = redis_command (ctx, "ping")

	val reply_str = redis_reply_get_string (reply)
	val () = printf ("%s\n", @(reply_str))

	val _ = redis_free_reply (reply)

	val reply = redis_command (ctx, "SET %s %s", @("bar", "hello"))
	val () = printf ("%s\n", @(reply_str))
	val _ = redis_free_reply (reply)
in
	redis_free_ctx (ctx)
end



(************************************
	Handle redisReply struct
 ************************************)

%{^

char *redis_reply_get_string (redisReply *reply) {
	return reply->str;
}

long long redis_reply_get_integer (redisReply *reply) {
	return reply->integer;
}

%}



(************************************
	Handle variadic redisCommand
 ************************************)

%{^

#include <stdarg.h>

redisReply *redisCommandHandler (redisContext *ctx, char *fmt, ...) {
	va_list args;
	va_start (args, fmt);
	redisReply *reply = redisvCommand (ctx, fmt, args);
	va_end (args);
	return reply;
}

%}