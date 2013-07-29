/*
**
** The C code is generated by ATS/Anairiats
** The compilation time is: 2013-7-29: 14h:44m
**
*/

/* include some .h files */
#ifndef _ATS_HEADER_NONE
#include "ats_config.h"
#include "ats_basics.h"
#include "ats_types.h"
#include "ats_exception.h"
#include "ats_memory.h"
#endif /* _ATS_HEADER_NONE */

/* include some .cats files */
#ifndef _ATS_PRELUDE_NONE
#include "prelude/CATS/basics.cats"
#include "prelude/CATS/bool.cats"
#include "prelude/CATS/byte.cats"
#include "prelude/CATS/char.cats"
#include "prelude/CATS/float.cats"
#include "prelude/CATS/integer.cats"
#include "prelude/CATS/integer_fixed.cats"
#include "prelude/CATS/integer_ptr.cats"
#include "prelude/CATS/lazy.cats"
#include "prelude/CATS/lazy_vt.cats"
#include "prelude/CATS/pointer.cats"
#include "prelude/CATS/printf.cats"
#include "prelude/CATS/reference.cats"
#include "prelude/CATS/sizetype.cats"
#include "prelude/CATS/string.cats"
#include "prelude/CATS/array.cats"
#include "prelude/CATS/list.cats"
#include "prelude/CATS/matrix.cats"
#include "prelude/CATS/option.cats"
#endif /* _ATS_PRELUDE_NONE */
/* prologues from statically loaded files */

#include "hiredis/hiredis.h"
/* external codes at top */
/* type definitions */
/* external typedefs */
/* external dynamic constructor declarations */
/* external dynamic constant declarations */

/* external dynamic terminating constant declarations */
#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* assuming abstract types */
/* sum constructor declarations */
/* exn constructor declarations */
/* global dynamic (non-functional) constant declarations */
/* internal function declarations */

/* partial value template declarations */
/* static temporary variable declarations */
/* external value variable declarations */

/* function implementations */

/*
// /home/hwwu/Workspace/ats-redis/helloworld/redis.dats: 41(line=6, offs=16) -- 198(line=12, offs=4)
*/
ATSglobaldec()
ats_void_type
mainats () {
/* local vardec */
// ATSlocal_void (tmp0) ;
ATSlocal (ats_ptr_type, tmp1) ;
ATSlocal (ats_ptr_type, tmp2) ;
// ATSlocal_void (tmp3) ;

__ats_lab_mainats:
tmp1 = redisConnect (ATSstrcst("127.0.0.1"), 6379) ;
tmp2 = redisCommand (tmp1, ATSstrcst("ping")) ;
/* tmp3 = */ freeReplyObject (tmp2) ;
/* tmp0 = */ redisFree (tmp1) ;
return /* (tmp0) */ ;
} /* end of [mainats] */

/* static load function */

extern ats_void_type _2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2esats__staload (void) ;

ats_void_type
_2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2edats__staload () {
static int _2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2edats__staload_flag = 0 ;
if (_2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2edats__staload_flag) return ;
_2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2edats__staload_flag = 1 ;

_2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2esats__staload () ;

return ;
} /* staload function */

/* dynamic load function */

// dynload flag declaration
// extern ats_int_type _2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2edats__dynload_flag ;

ats_void_type
_2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2edats__dynload () {
// _2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2edats__dynload_flag = 1 ;
_2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2edats__staload () ;

#ifdef _ATS_PROOFCHECK
#endif /* _ATS_PROOFCHECK */

/* marking static variables for GC */

/* marking external values for GC */

/* code for dynamic loading */
return ;
} /* end of [dynload function] */

int main (int argc, char *argv[]) {
ATS_GC_INIT() ;
mainats_prelude() ;
_2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2edats__dynload() ;
mainats((ats_int_type)argc, (ats_ptr_type)argv) ;
return (0) ;
} /* end of main */

/* external codes at mid */
/* external codes at bot */

/* ****** ****** */

/* end of [redis_dats.c] */