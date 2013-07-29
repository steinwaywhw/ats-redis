staload "redis.sats"




implement main () = let
	val ctx = redis_connect ("127.0.0.1", 6379)
	val reply = redis_command (ctx, "ping")
	val _ = redis_free_reply (reply)
in
	redis_free_ctx (ctx)
end