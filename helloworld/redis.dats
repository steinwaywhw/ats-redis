staload "redis.sats"
staload "libc/SATS/stdarg.sats"

assume redisReply (l:addr) = ptr (l)

implement 
main () = let
	val ctx = redisConnect ("127.0.0.1", 6379)
	val () = assert (redisContextIsNotNull(ctx))
	val reply = redisCommand (ctx, "ping")

	val reply_str = redisReplyGetString (reply)
	//val () = printf ("%s\n", @(reply_str))

	val _ = freeReplyObject (reply)

	val reply = redisCommand (ctx, "SET %s %s", @("bar", "hello"))
	//val () = printf ("%s\n", @(reply_str))
	val _ = freeReplyObject (reply)

	var target : string 
	val ret = redisFormatCommand (target, "SET %s %s", @("bar", "hello"))
	val () = printf ("TARGET: %s\nEND\n", @(target))

	val reader = redisReaderCreate ()
	val () = assert (redisReaderIsNotNull(reader))
	var test : redisReply0? 
	val _ = redisReaderGetReply (reader, test)
	val () = redisReaderFree (reader)
	val () = assert (redisReplyIsNotNull (test))
	val () = freeReplyObject (test)
in
	redisFree (ctx)
end




(************************************
	Handle redisReply struct
 ************************************)

%{^

char *redisReplyGetString (redisReply *reply) {
	return reply->str;
}

long long redisReplyGetInteger (redisReply *reply) {
	return reply->integer;
}

%}



(************************************
	Handle Pointer Nill
 ************************************)

%{^

int pointerIsNull (void *ptr) {
	return ptr == NULL;
}

int pointerIsNotNull (void *ptr) {
	return ptr != NULL;
}

%}


(************************************
	Handle variadic functions

	redisCommand 
	redisAppendCommand 
	redisFormatCommand

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

int redisAppendCommandHandler (redisContext *ctx, char *fmt, ...) {
	va_list args;
	va_start (args, fmt);
	int ret = redisvAppendCommand (ctx, fmt, args);
	va_end (args);
	return ret;
}

int redisFormatCommandHandler (void **target, char *fmt, ...) {
	va_list args;
	va_start (args, fmt);
	int ret = redisvFormatCommand ((char **)target, fmt, args);
	va_end (args);
	return ret;
}

%}