# 1 "redis_dats.c"
# 1 "<command-line>"
# 1 "redis_dats.c"
# 10 "redis_dats.c"
# 1 "/home/hwwu/Programs/ats/ccomp/runtime/ats_config.h" 1
# 44 "/home/hwwu/Programs/ats/ccomp/runtime/ats_config.h"
# 1 "/home/hwwu/Programs/ats/config.h" 1
# 45 "/home/hwwu/Programs/ats/ccomp/runtime/ats_config.h" 2
# 11 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/ccomp/runtime/ats_basics.h" 1
# 213 "/home/hwwu/Programs/ats/ccomp/runtime/ats_basics.h"
extern void mainats_prelude () ;
# 222 "/home/hwwu/Programs/ats/ccomp/runtime/ats_basics.h"
extern void ats_caseof_failure_handle (const char *loc) ;
extern void ats_funarg_match_failure_handle (const char *loc) ;
# 12 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/ccomp/runtime/ats_types.h" 1
# 41 "/home/hwwu/Programs/ats/ccomp/runtime/ats_types.h"
# 1 "/usr/include/inttypes.h" 1 3 4
# 25 "/usr/include/inttypes.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 341 "/usr/include/features.h" 3 4
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 30 "/usr/include/stdc-predef.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/predefs.h" 1 3 4
# 31 "/usr/include/stdc-predef.h" 2 3 4
# 342 "/usr/include/features.h" 2 3 4
# 371 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/sys/cdefs.h" 1 3 4
# 385 "/usr/include/i386-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 386 "/usr/include/i386-linux-gnu/sys/cdefs.h" 2 3 4
# 372 "/usr/include/features.h" 2 3 4
# 395 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/gnu/stubs.h" 1 3 4






# 1 "/usr/include/i386-linux-gnu/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/i386-linux-gnu/gnu/stubs.h" 2 3 4
# 396 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/inttypes.h" 2 3 4

# 1 "/usr/lib/gcc/i686-linux-gnu/4.7/include/stdint.h" 1 3 4


# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wchar.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 36 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__
typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
# 125 "/usr/include/stdint.h" 3 4
typedef int intptr_t;


typedef unsigned int uintptr_t;
# 137 "/usr/include/stdint.h" 3 4
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;
# 4 "/usr/lib/gcc/i686-linux-gnu/4.7/include/stdint.h" 2 3 4
# 28 "/usr/include/inttypes.h" 2 3 4






typedef long int __gwchar_t;
# 273 "/usr/include/inttypes.h" 3 4

# 287 "/usr/include/inttypes.h" 3 4
typedef struct
  {
    long long int quot;
    long long int rem;
  } imaxdiv_t;





extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
# 439 "/usr/include/inttypes.h" 3 4

# 42 "/home/hwwu/Programs/ats/ccomp/runtime/ats_types.h" 2
# 1 "/usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h" 1 3 4
# 150 "/usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 213 "/usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h" 3 4
typedef unsigned int size_t;
# 325 "/usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h" 3 4
typedef long int wchar_t;
# 43 "/home/hwwu/Programs/ats/ccomp/runtime/ats_types.h" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/i386-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/i386-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/i386-linux-gnu/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 217 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/i386-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/i386-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 130 "/usr/include/i386-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/typesizes.h" 1 3 4
# 131 "/usr/include/i386-linux-gnu/bits/types.h" 2 3 4


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;


__extension__ typedef int __fsword_t;

__extension__ typedef int __ssize_t;


__extension__ typedef long int __syscall_slong_t;

__extension__ typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
# 218 "/usr/include/unistd.h" 2 3 4


typedef __ssize_t ssize_t;





# 1 "/usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4





typedef __gid_t gid_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 255 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;




typedef __pid_t pid_t;
# 274 "/usr/include/unistd.h" 3 4
typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 304 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 353 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 417 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 444 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 469 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;
# 525 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
# 543 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 598 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/i386-linux-gnu/bits/confname.h" 1 3 4
# 25 "/usr/include/i386-linux-gnu/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 610 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));
# 646 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 672 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));
# 689 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 722 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
# 778 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));





extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 893 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 58 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 72 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 151 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__));
# 894 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
# 991 "/usr/include/unistd.h" 3 4
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 1015 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1038 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1059 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1080 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1103 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1134 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1172 "/usr/include/unistd.h" 3 4

# 44 "/home/hwwu/Programs/ats/ccomp/runtime/ats_types.h" 2



struct ats_struct_type ;



typedef struct ats_struct_type ats_abs_type ;

typedef void *ats_ptr_type ;
typedef void *ats_ref_type ;
# 64 "/home/hwwu/Programs/ats/ccomp/runtime/ats_types.h"
typedef struct ats_struct_type ats_var_type ;

typedef void ats_varet_type ;

typedef void ats_void_type ;

typedef struct{} ats_empty_type ;



typedef int ats_bool_type ;
typedef unsigned char ats_byte_type ;

typedef char ats_char_type ;
typedef signed char ats_schar_type ;
typedef unsigned char ats_uchar_type ;

typedef double ats_double_type ;
typedef long double ats_ldouble_type ;
typedef float ats_float_type ;



typedef int ats_int_type ;
typedef unsigned int ats_uint_type ;

typedef long int ats_lint_type ;
typedef unsigned long int ats_ulint_type ;
typedef long long int ats_llint_type ;
typedef unsigned long long int ats_ullint_type ;

typedef short int ats_sint_type ;
typedef unsigned short int ats_usint_type ;

typedef size_t ats_size_type ;
typedef ssize_t ats_ssize_type ;
typedef ptrdiff_t ats_ptrdiff_type ;



typedef int8_t ats_int8_type ;
typedef uint8_t ats_uint8_type ;

typedef int16_t ats_int16_type ;
typedef uint16_t ats_uint16_type ;

typedef int32_t ats_int32_type ;
typedef uint32_t ats_uint32_type ;

typedef int64_t ats_int64_type ;
typedef uint64_t ats_uint64_type ;







typedef void *ats_ptrself_type ;
# 138 "/home/hwwu/Programs/ats/ccomp/runtime/ats_types.h"
typedef struct {
  ats_ptr_type data ;
  ats_int_type size ;
} ats_a1rray_type ;

typedef
ats_a1rray_type *ats_a1rray_ptr_type ;
typedef ats_a1rray_ptr_type ats_array_type ;

typedef struct {
  ats_ptr_type data ;
  ats_int_type size_row ;
  ats_int_type size_col ;
} ats_a2rray_type ;

typedef
ats_a2rray_type *ats_a2rray_ptr_type ;
typedef ats_a2rray_ptr_type ats_matrix_type ;



typedef
struct { int tag ; } ats_sum_type ;
typedef ats_sum_type *ats_sum_ptr_type ;



typedef
struct {
  int tag ; char *name ;
} ats_exn_type ;
typedef ats_exn_type *ats_exn_ptr_type ;



typedef void *ats_fun_ptr_type ;



typedef struct { void *closure_fun ; } ats_clo_type ;

typedef ats_clo_type *ats_clo_ptr_type ;
typedef ats_clo_type *ats_clo_ref_type ;
# 13 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/ccomp/runtime/ats_exception.h" 1
# 48 "/home/hwwu/Programs/ats/ccomp/runtime/ats_exception.h"
# 1 "/home/hwwu/Programs/ats/ccomp/runtime/ats_types.h" 1
# 49 "/home/hwwu/Programs/ats/ccomp/runtime/ats_exception.h" 2
# 1 "/home/hwwu/Programs/ats/ccomp/runtime/ats_basics.h" 1
# 50 "/home/hwwu/Programs/ats/ccomp/runtime/ats_exception.h" 2






# 1 "/usr/include/setjmp.h" 1 3 4
# 27 "/usr/include/setjmp.h" 3 4


# 1 "/usr/include/i386-linux-gnu/bits/setjmp.h" 1 3 4
# 26 "/usr/include/i386-linux-gnu/bits/setjmp.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 27 "/usr/include/i386-linux-gnu/bits/setjmp.h" 2 3 4
# 35 "/usr/include/i386-linux-gnu/bits/setjmp.h" 3 4
typedef int __jmp_buf[6];
# 30 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/i386-linux-gnu/bits/sigset.h" 1 3 4
# 23 "/usr/include/i386-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 31 "/usr/include/setjmp.h" 2 3 4



struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };




typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));






extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));




extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));
# 77 "/usr/include/setjmp.h" 3 4




extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
# 109 "/usr/include/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 119 "/usr/include/setjmp.h" 3 4

# 57 "/home/hwwu/Programs/ats/ccomp/runtime/ats_exception.h" 2




extern void *alloca (size_t bsz) ;







extern
ats_void_type
ats_uncaught_exception_handle(const ats_exn_ptr_type exn) ;





typedef
struct ats_exception_frame_struct {
  ats_exn_ptr_type exn ;
  struct ats_exception_frame_struct *prev ;
  sigjmp_buf env ;
} ats_exception_frame_type ;







extern
void *the_ats_exception_stack ;
# 144 "/home/hwwu/Programs/ats/ccomp/runtime/ats_exception.h"
static inline
ats_void_type ats_raise_exn
  (const ats_exn_ptr_type exn) { do { if (((ats_exception_frame_type*)the_ats_exception_stack) == 0 ) ats_uncaught_exception_handle(exn); ((ats_exception_frame_type*)the_ats_exception_stack)->exn = exn ; siglongjmp(((ats_exception_frame_type*)the_ats_exception_stack)->env, 0) ; } while (0) ; return ; }
# 157 "/home/hwwu/Programs/ats/ccomp/runtime/ats_exception.h"
extern int ats_exception_con_tag ;

static inline
int ats_exception_con_tag_new () {
  ats_exception_con_tag += 1 ; return (ats_exception_con_tag) ;
}



extern
ats_void_type ats_caseof_failure(void) ;

extern
ats_void_type ats_funarg_match_failure(void) ;
# 14 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/ccomp/runtime/ats_memory.h" 1
# 50 "/home/hwwu/Programs/ats/ccomp/runtime/ats_memory.h"
extern void *alloca (size_t nsz) ;
# 70 "/home/hwwu/Programs/ats/ccomp/runtime/ats_memory.h"
extern
ats_void_type ats_gc_init () ;

extern
ats_void_type
ats_gc_markroot (ats_ptr_type p, ats_size_type bsz) ;



extern
ats_ptr_type
ats_malloc_ngc (ats_size_type n) ;

extern
ats_ptr_type
ats_calloc_ngc (ats_size_type nmemb, ats_size_type bsz) ;

extern
ats_void_type
ats_free_ngc (const ats_ptr_type p) ;

extern
ats_ptr_type
ats_realloc_ngc (const ats_ptr_type p, ats_size_type n) ;



extern
ats_ptr_type
ats_malloc_gc (ats_size_type bsz) ;

extern
ats_ptr_type
ats_calloc_gc
(ats_size_type nmemb, ats_size_type bsz) ;

extern
ats_void_type
ats_free_gc (const ats_ptr_type p) ;

extern
ats_ptr_type
ats_realloc_gc (const ats_ptr_type p, ats_size_type bsz) ;
# 15 "redis_dats.c" 2




# 1 "/home/hwwu/Programs/ats/prelude/CATS/basics.cats" 1
# 41 "/home/hwwu/Programs/ats/prelude/CATS/basics.cats"
# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 33 "/usr/include/libio.h" 2 3 4
# 50 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.7/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/i686-linux-gnu/4.7/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 51 "/usr/include/libio.h" 2 3 4
# 145 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 155 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 178 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 246 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 294 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 303 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 339 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 391 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 435 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 465 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 108 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 266 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4

# 306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 319 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 412 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));


# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4

# 824 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






# 1 "/usr/include/i386-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/i386-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 873 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 913 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 943 "/usr/include/stdio.h" 3 4

# 42 "/home/hwwu/Programs/ats/prelude/CATS/basics.cats" 2
# 1 "/usr/lib/gcc/i686-linux-gnu/4.7/include/stdarg.h" 1 3 4
# 43 "/home/hwwu/Programs/ats/prelude/CATS/basics.cats" 2
# 54 "/home/hwwu/Programs/ats/prelude/CATS/basics.cats"
extern ats_empty_type ats_empty_value ;






static inline
ats_ptr_type
atspre_castfn_ptr (ats_ptr_type p) { return p ; }






static inline
ats_void_type atspre_donothing () { return ; }



static inline
ats_void_type atspre_free_null () { return ; }







static inline
ats_ptr_type
atspre_fun_coerce (ats_ptr_type p) { return p ; }

static inline
ats_ptr_type
atspre_clo_coerce (ats_ptr_type p) { return p ; }



static inline
ats_ptr_type
atspre_cloptr_get_view_ptr (ats_ptr_type p) { return p ; }



static inline
ats_void_type
atspre_cloptr_free (
  ats_ptr_type p ) { ats_free_gc (p) ; return ; }




static inline
ats_void_type
atspre_vbox_make_view_ptr (ats_ptr_type p) { return ; }

static inline
ats_void_type
atspre_vbox_make_view_ptr_gc (ats_ptr_type p) { return ; }
# 123 "/home/hwwu/Programs/ats/prelude/CATS/basics.cats"
extern ats_void_type ats_exit (const ats_int_type n) ;



extern ats_void_type
ats_exit_errmsg (const ats_int_type n, const ats_ptr_type msg) ;



extern ats_void_type
atspre_exit_prerrf (ats_int_type code, ats_ptr_type fmt, ...) ;







extern int ats_stdin_view_lock ;
extern int ats_stdout_view_lock ;
extern int ats_stderr_view_lock ;



static inline
ats_ptr_type
atspre_stdin_get () {






  return (ats_ptr_type)stdin;
}

static inline
ats_void_type
atspre_stdin_view_get () {






  return ;
}

static inline
ats_void_type
atspre_stdin_view_set () {






  return ;
}



static inline
ats_ptr_type
atspre_stdout_get () {






  return (ats_ptr_type)stdout ;
}

static inline
ats_void_type
atspre_stdout_view_get () {






  return ;
}

static inline
ats_void_type
atspre_stdout_view_set () {






  return ;
}



static inline
ats_ptr_type
atspre_stderr_get () {






  return (ats_ptr_type)stderr ;
}

static inline
ats_void_type
atspre_stderr_view_get () {






  return ;
}

static inline
ats_void_type
atspre_stderr_view_set () {






  return ;
}
# 266 "/home/hwwu/Programs/ats/prelude/CATS/basics.cats"
static inline
ats_void_type
atspre_fprint_newline (
  const ats_ptr_type out
) {
  int n1, n2 ;
  n1 = fprintf((FILE*)out, "\n") ; n2 = fflush((FILE*)out) ;





  return ;
}

static inline
ats_void_type
atspre_print_newline () {
  atspre_stdout_view_get() ;
  atspre_fprint_newline((ats_ptr_type)stdout) ;
  atspre_stdout_view_set() ;
  return ;
}

static inline
ats_void_type
atspre_prerr_newline () {
  atspre_stderr_view_get() ;
  atspre_fprint_newline((ats_ptr_type)stderr) ;
  atspre_stderr_view_set() ;
  return ;
}
# 20 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/bool.cats" 1
# 41 "/home/hwwu/Programs/ats/prelude/CATS/bool.cats"
extern
int fprintf (FILE *stream, const char *format, ...) ;




extern
ats_void_type
ats_exit_errmsg(ats_int_type n, ats_ptr_type msg) ;



static inline
ats_bool_type
atspre_neg_bool
  (ats_bool_type b) {
  return (b ? 0 : 1) ;
}
# 84 "/home/hwwu/Programs/ats/prelude/CATS/bool.cats"
static inline
ats_bool_type
atspre_lt_bool_bool (
  ats_bool_type b1, ats_bool_type b2
) {
  return (!b1 && b2) ;
}

static inline
ats_bool_type
atspre_lte_bool_bool (
  ats_bool_type b1, ats_bool_type b2
) {
  return (!b1 || b2) ;
}

static inline
ats_bool_type
atspre_gt_bool_bool (
  ats_bool_type b1, ats_bool_type b2
) {
  return (b1 && !b2) ;
}

static inline
ats_bool_type
atspre_gte_bool_bool (
  ats_bool_type b1, ats_bool_type b2
) {
  return (b1 || !b2) ;
}

static inline
ats_bool_type
atspre_eq_bool_bool (
  ats_bool_type b1, ats_bool_type b2
) {
  if (b1) { return b2 ; } else { return !b2 ; }
}

static inline
ats_bool_type
atspre_neq_bool_bool
  (ats_bool_type b1, ats_bool_type b2) {
  if (b1) { return !b2 ; } else { return b2 ; }
}







extern
ats_void_type atspre_fprint_bool (
  ats_ptr_type out, ats_bool_type bool
) ;

static inline
ats_void_type
atspre_print_bool
  (ats_bool_type b) {

  atspre_fprint_bool ((ats_ptr_type)stdout, b) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_bool
  (ats_bool_type b) {

  atspre_fprint_bool ((ats_ptr_type)stderr, b) ;

  return ;
}




static inline
ats_ptr_type
atspre_tostring_bool
  (ats_bool_type b) {
  return (b ? (ats_ptr_type)"true" : (ats_ptr_type)"false") ;
}
# 21 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/byte.cats" 1
# 41 "/home/hwwu/Programs/ats/prelude/CATS/byte.cats"
# 1 "/usr/include/ctype.h" 1 3 4
# 29 "/usr/include/ctype.h" 3 4

# 40 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/i386-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/i386-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/i386-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/i386-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/i386-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/i386-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 41 "/usr/include/ctype.h" 2 3 4






enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 80 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 105 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));








extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));


# 151 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 258 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 259 "/usr/include/ctype.h" 2 3 4
# 272 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
# 348 "/usr/include/ctype.h" 3 4

# 42 "/home/hwwu/Programs/ats/prelude/CATS/byte.cats" 2



extern
int fprintf (FILE *stream, const char *format, ...) ;




extern
ats_void_type
ats_exit_errmsg (ats_int_type n, ats_ptr_type msg) ;
# 74 "/home/hwwu/Programs/ats/prelude/CATS/byte.cats"
static inline
ats_byte_type
atspre_byte_of_int (ats_int_type i) { return i ; }

static inline
ats_int_type
atspre_int_of_byte (ats_byte_type b) { return b ; }



static inline
ats_byte_type
atspre_byte_of_uint (ats_uint_type u) { return u ; }

static inline
ats_uint_type
atspre_uint_of_byte (ats_byte_type b) { return b ; }





static inline
ats_byte_type
atspre_succ_byte(ats_byte_type i) { return (i + 1) ; }

static inline
ats_byte_type
atspre_pred_byte(ats_byte_type i) { return (i - 1) ; }

static inline
ats_byte_type
atspre_add_byte_byte(ats_byte_type i1, ats_byte_type i2) {
  return (i1 + i2) ;
}

static inline
ats_byte_type
atspre_sub_byte_byte(ats_byte_type i1, ats_byte_type i2) {
  return (i1 - i2) ;
}

static inline
ats_byte_type
atspre_mul_byte_byte(ats_byte_type i1, ats_byte_type i2) {
  return (i1 * i2) ;
}

static inline
ats_byte_type
atspre_div_byte_byte(ats_byte_type i1, ats_byte_type i2) {
  return (i1 / i2) ;
}



static inline
ats_bool_type
atspre_lt_byte_byte(ats_byte_type b1, ats_byte_type b2) {
  return (b1 < b2) ;
}
static inline
ats_bool_type
atspre_lte_byte_byte(ats_byte_type b1, ats_byte_type b2) {
  return (b1 <= b2) ;
}
static inline
ats_bool_type
atspre_gt_byte_byte(ats_byte_type b1, ats_byte_type b2) {
  return (b1 > b2) ;
}
static inline
ats_bool_type
atspre_gte_byte_byte(ats_byte_type b1, ats_byte_type b2) {
  return (b1 >= b2) ;
}



static inline
ats_bool_type
atspre_eq_byte_byte
  (ats_byte_type b1, ats_byte_type b2) { return (b1 == b2) ; }


static inline
ats_bool_type
atspre_neq_byte_byte
  (ats_byte_type b1, ats_byte_type b2) { return (b1 != b2) ; }






static inline
ats_byte_type
atspre_lnot_byte(ats_byte_type b) { return (~b) ; }

static inline
ats_byte_type
atspre_land_byte_byte
  (ats_byte_type b1, ats_byte_type b2) { return (b1 & b2) ; }


static inline
ats_byte_type
atspre_lor_byte_byte
  (ats_byte_type b1, ats_byte_type b2) { return (b1 | b2) ; }


static inline
ats_byte_type
atspre_lxor_byte_byte
  (ats_byte_type b1, ats_byte_type b2) { return (b1 ^ b2) ; }


static inline
ats_byte_type
atspre_lsl_byte_int1
  (ats_byte_type b, ats_int_type n) { return (b << n) ; }


static inline
ats_byte_type
atspre_lsr_byte_int1
  (ats_byte_type b, ats_int_type n) { return (b >> n) ; }






static inline
ats_void_type
atspre_fprint_byte (
  const ats_ptr_type out, const ats_byte_type b
) {






  (void)fputc (b, (FILE *)out) ; return ;
}

static inline
ats_void_type
atspre_print_byte
  (const ats_byte_type c) {

  atspre_fprint_byte((ats_ptr_type)stdout, c) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_byte
  (const ats_byte_type c) {

  atspre_fprint_byte((ats_ptr_type)stderr, c) ;

  return ;
}
# 22 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/char.cats" 1
# 57 "/home/hwwu/Programs/ats/prelude/CATS/char.cats"
extern
int fprintf (FILE *stream, const char *format, ...) ;






extern
ats_void_type
ats_exit_errmsg(ats_int_type n, ats_ptr_type msg) ;
# 95 "/home/hwwu/Programs/ats/prelude/CATS/char.cats"
static inline
ats_char_type
atspre_char_of_int (ats_int_type i) { return i ; }

static inline
ats_schar_type
atspre_schar_of_int (ats_int_type i) { return i ; }

static inline
ats_uchar_type
atspre_uchar_of_int (ats_int_type i) { return i ; }



static inline
ats_char_type
atspre_char_of_uint (ats_uint_type u) { return u ; }

static inline
ats_schar_type
atspre_schar_of_uint (ats_uint_type u) { return u ; }

static inline
ats_uchar_type
atspre_uchar_of_uint (ats_uint_type u) { return u ; }
# 129 "/home/hwwu/Programs/ats/prelude/CATS/char.cats"
static inline
ats_int_type
atspre_sub_char_char (
  ats_char_type c1
, ats_char_type c2
) {
  return (c1 - c2) ;
}



static inline
ats_bool_type
atspre_lt_char_char
  (ats_char_type c1, ats_char_type c2) {
  return (c1 < c2) ;
}

static inline
ats_bool_type
atspre_lte_char_char
  (ats_char_type c1, ats_char_type c2) {
  return (c1 <= c2) ;
}

static inline
ats_bool_type
atspre_gt_char_char
  (ats_char_type c1, ats_char_type c2) {
  return (c1 > c2) ;
}

static inline
ats_bool_type
atspre_gte_char_char
  (ats_char_type c1, ats_char_type c2) {
  return (c1 >= c2) ;
}

static inline
ats_bool_type
atspre_eq_char_char
  (ats_char_type c1, ats_char_type c2) {
  return (c1 == c2) ;
}

static inline
ats_bool_type
atspre_neq_char_char
  (ats_char_type c1, ats_char_type c2) {
  return (c1 != c2) ;
}

static inline
ats_int_type
atspre_compare_char_char
  (ats_char_type c1, ats_char_type c2) {
  int i = c1 - c2 ;
  if (i > 0) return 1 ;
  if (i < 0) return -1 ;
  return 0 ;
}



static inline
ats_void_type
atspre_fprint_char (
  ats_ptr_type out, ats_char_type c
) {
  int n = fputc ((unsigned char)c, (FILE *)out) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"Exit: [fprint_char] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_char
  (ats_char_type c) {

  atspre_fprint_char((ats_ptr_type)stdout, c) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_char
  (ats_char_type c) {

  atspre_fprint_char((ats_ptr_type)stderr, c) ;

  return ;
}



static inline
ats_ptr_type
atspre_tostrptr_char
  (ats_char_type c) {
  char *p ;
  p = (char *)ats_malloc_gc(2) ; *p = (char)c ; *(p+1) = '\000' ;
  return (ats_ptr_type)p ;
}



static inline
ats_bool_type
atspre_char_isalnum (ats_char_type c) { return ((*__ctype_b_loc ())[(int) (((int)c))] & (unsigned short int) _ISalnum) ; }

static inline
ats_bool_type
atspre_char_isalpha (ats_char_type c) { return ((*__ctype_b_loc ())[(int) (((int)c))] & (unsigned short int) _ISalpha) ; }







static inline
ats_bool_type
atspre_char_isascii (ats_char_type c) { return ((((int)c) & ~0x7f) == 0) ; }







static inline
ats_bool_type
atspre_char_isblank (ats_char_type c) { return ((*__ctype_b_loc ())[(int) (((int)c))] & (unsigned short int) _ISblank) ; }



static inline
ats_bool_type
atspre_char_iscntrl (ats_char_type c) { return ((*__ctype_b_loc ())[(int) (((int)c))] & (unsigned short int) _IScntrl) ; }

static inline
ats_bool_type
atspre_char_isdigit (ats_char_type c) { return ((*__ctype_b_loc ())[(int) (((int)c))] & (unsigned short int) _ISdigit) ; }

static inline
ats_bool_type
atspre_char_isgraph (ats_char_type c) { return ((*__ctype_b_loc ())[(int) (((int)c))] & (unsigned short int) _ISgraph) ; }

static inline
ats_bool_type
atspre_char_islower (ats_char_type c) { return ((*__ctype_b_loc ())[(int) (((int)c))] & (unsigned short int) _ISlower) ; }

static inline
ats_bool_type
atspre_char_isnull (ats_char_type c) {
  return (c == '\000' ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_char_isprint (ats_char_type c) { return ((*__ctype_b_loc ())[(int) (((int)c))] & (unsigned short int) _ISprint) ; }

static inline
ats_bool_type
atspre_char_ispunct (ats_char_type c) { return ((*__ctype_b_loc ())[(int) (((int)c))] & (unsigned short int) _ISpunct) ; }

static inline
ats_bool_type
atspre_char_isspace (ats_char_type c) { return ((*__ctype_b_loc ())[(int) (((int)c))] & (unsigned short int) _ISspace) ; }

static inline
ats_bool_type
atspre_char_isupper (ats_char_type c) { return ((*__ctype_b_loc ())[(int) (((int)c))] & (unsigned short int) _ISupper) ; }

static inline
ats_bool_type
atspre_char_isxdigit (ats_char_type c) { return ((*__ctype_b_loc ())[(int) (((int)c))] & (unsigned short int) _ISxdigit) ; }



static inline
ats_char_type
atspre_char_tolower (ats_char_type c) { return (int)tolower((int)c) ; }

static inline
ats_char_type
atspre_char_toupper (ats_char_type c) { return (int)toupper((int)c) ; }
# 23 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/float.cats" 1
# 41 "/home/hwwu/Programs/ats/prelude/CATS/float.cats"
# 1 "/usr/include/math.h" 1 3 4
# 29 "/usr/include/math.h" 3 4




# 1 "/usr/include/i386-linux-gnu/bits/huge_val.h" 1 3 4
# 34 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/i386-linux-gnu/bits/huge_valf.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/i386-linux-gnu/bits/huge_vall.h" 1 3 4
# 37 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/bits/inf.h" 1 3 4
# 40 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/bits/nan.h" 1 3 4
# 43 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/i386-linux-gnu/bits/mathdef.h" 1 3 4
# 35 "/usr/include/i386-linux-gnu/bits/mathdef.h" 3 4
typedef long double float_t;

typedef long double double_t;
# 47 "/usr/include/math.h" 2 3 4
# 70 "/usr/include/math.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));







extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2)));

# 127 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));






extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));






extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));





extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));








extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));
# 71 "/usr/include/math.h" 2 3 4
# 89 "/usr/include/math.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));







extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2)));

# 127 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));






extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));





extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));








extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));
# 90 "/usr/include/math.h" 2 3 4
# 136 "/usr/include/math.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));







extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2)));

# 127 "/usr/include/i386-linux-gnu/bits/mathcalls.h" 3 4


extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));





extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));








extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
# 137 "/usr/include/math.h" 2 3 4
# 152 "/usr/include/math.h" 3 4
extern int signgam;
# 193 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 291 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 316 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 478 "/usr/include/math.h" 3 4

# 42 "/home/hwwu/Programs/ats/prelude/CATS/float.cats" 2



extern
int fprintf (FILE *stream, const char *format, ...) ;






extern double atof (const char *str) ;
extern long int atol (const char *str) ;
extern long long int atoll (const char *str) ;







extern
ats_ptr_type
atspre_tostringf (ats_ptr_type fmt, ...) ;
extern
ats_void_type
ats_exit_errmsg(ats_int_type n, ats_ptr_type msg) ;







static inline
ats_int_type
atspre_int_of_float (ats_float_type f) { return f ; }

static inline
ats_lint_type
atspre_lint_of_float (ats_float_type f) { return f ; }

static inline
ats_llint_type
atspre_llint_of_float (ats_float_type f) { return f ; }



static inline
ats_float_type
atspre_float_of_int (ats_int_type i) { return (ats_float_type)i ; }

static inline
ats_float_type
atspre_float_of_uint (ats_uint_type u) { return (ats_float_type)u ; }



static inline
ats_float_type
atspre_float_of_lint (ats_lint_type i) { return (ats_float_type)i ; }

static inline
ats_float_type
atspre_float_of_ulint (ats_ulint_type u) { return (ats_float_type)u ; }



static inline
ats_float_type
atspre_float_of_llint (ats_llint_type i) { return (ats_float_type)i ; }

static inline
ats_float_type
atspre_float_of_ullint (ats_ullint_type u) { return (ats_float_type)u ; }



static inline
ats_float_type
atspre_float_of_size (ats_size_type sz) { return (ats_float_type)sz ; }



static inline
ats_float_type
atspre_float_of_double
  (ats_double_type d) { return (ats_float_type)d ; }


static inline
ats_float_type
atspre_float_of_string
  (const ats_ptr_type s) { return (ats_float_type)(atof ((char *)s)) ; }




static inline
ats_float_type
atspre_abs_float
  (ats_float_type f) { return (f >= 0.0 ? f : -f) ; }


static inline
ats_float_type
atspre_neg_float (ats_float_type f) { return (-f) ; }

static inline
ats_float_type
atspre_succ_float (ats_float_type f) { return (f + 1.0) ; }

static inline
ats_float_type
atspre_pred_float (ats_float_type f) { return (f - 1.0) ; }



static inline
ats_float_type
atspre_add_float_float
  (ats_float_type f1, ats_float_type f2) {
  return (f1 + f2) ;
}

static inline
ats_float_type
atspre_sub_float_float
  (ats_float_type f1, ats_float_type f2) {
  return (f1 - f2) ;
}



static inline
ats_float_type
atspre_mul_float_float
  (ats_float_type f1, ats_float_type f2) { return (f1 * f2) ; }


static inline
ats_float_type
atspre_mul_int_float
  (ats_int_type i1, ats_float_type f2) { return ((float)i1 * f2) ; }


static inline
ats_float_type
atspre_mul_float_int
  (ats_float_type f1, ats_int_type i2) { return (f1 * (float)i2) ; }




static inline
ats_float_type
atspre_div_float_float
  (ats_float_type f1, ats_float_type f2) { return (f1 / f2) ; }


static inline
ats_float_type
atspre_div_float_int
  (ats_float_type f1, ats_int_type i2) { return (f1 / (float)i2) ; }


static inline
ats_float_type
atspre_div_int_float
  (ats_float_type i1, ats_int_type f2) { return ((float)i1 / f2) ; }




static inline
ats_bool_type
atspre_lt_float_float (
  ats_float_type f1, ats_float_type f2
) {
  return (f1 < f2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_lte_float_float (
  ats_float_type f1, ats_float_type f2
) {
  return (f1 <= f2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_gt_float_float (
  ats_float_type f1, ats_float_type f2
) {
  return (f1 > f2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_gte_float_float (
  ats_float_type f1, ats_float_type f2
) {
  return (f1 >= f2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_eq_float_float (
  ats_float_type f1, ats_float_type f2
) {
  return (f1 == f2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_neq_float_float (
  ats_float_type f1, ats_float_type f2
) {
  return (f1 != f2 ? 1 : 0) ;
}



static inline
ats_int_type
atspre_compare_float_float
  (ats_float_type f1, ats_float_type f2) {
  if (f1 < f2) return (-1) ;
  if (f1 > f2) return ( 1) ;
  return 0 ;
}

static inline
ats_float_type
atspre_max_float_float
  (ats_float_type f1, ats_float_type f2) {
  return (f1 >= f2) ? f1 : f2 ;
}

static inline
ats_float_type
atspre_min_float_float
  (ats_float_type f1, ats_float_type f2) {
  return (f1 <= f2) ? f1 : f2 ;
}



static inline
ats_float_type
atspre_square_float (ats_float_type f) { return (f * f) ; }



static inline
ats_float_type
atspre_cube_float (ats_float_type f) { return (f * f * f) ; }



static inline
ats_void_type
atspre_fprint_float (
  ats_ptr_type out, ats_float_type f
) {
  int n = fprintf ((FILE*)out, "%f", f) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_float] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_float (ats_float_type f) {

  atspre_fprint_float ((ats_ptr_type)stdout, f) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_float (ats_float_type f) {

  atspre_fprint_float ((ats_ptr_type)stderr, f) ;

  return ;
}



static inline
ats_ptr_type
atspre_tostrptr_float
  (ats_float_type f) {
  return atspre_tostringf ((ats_ptr_type)"%f", f) ;
}







static inline
ats_int_type
atspre_int_of_double (ats_double_type d) { return (ats_int_type)d ; }

static inline
ats_lint_type
atspre_lint_of_double (ats_double_type d) { return (ats_lint_type)d ; }

static inline
ats_llint_type
atspre_llint_of_double (ats_double_type d) { return (ats_llint_type)d ; }


static inline
ats_ullint_type
atspre_ullint_of_double (ats_double_type d) { return ((ats_ullint_type)d) ; }




static inline
ats_double_type
atspre_double_of_int (ats_int_type i) { return (ats_double_type)i ; }


static inline
ats_double_type
atspre_double_of_uint (ats_uint_type u) { return (ats_double_type)u ; }


static inline
ats_double_type
atspre_double_of_lint (ats_lint_type i) { return (ats_double_type)i ; }


static inline
ats_double_type
atspre_double_of_ulint (ats_ulint_type u) { return (ats_double_type)u ; }


static inline
ats_double_type
atspre_double_of_llint (ats_llint_type i) { return (ats_double_type)i ; }


static inline
ats_double_type
atspre_double_of_ullint (ats_ullint_type u) { return (ats_double_type)u ; }


static inline
ats_double_type
atspre_double_of_size (ats_size_type sz) { return (ats_double_type)sz ; }


static inline
ats_double_type
atspre_double_of_float (ats_float_type f) { return (ats_double_type)f ; }


static inline
ats_double_type
atspre_double_of_string
  (const ats_ptr_type s) { return (ats_double_type)(atof ((char*)s)) ; }




static inline
ats_double_type
atspre_abs_double
  (ats_double_type f) { return (f >= 0.0 ? f : -f) ; }


static inline
ats_double_type
atspre_neg_double (ats_double_type f) { return (-f) ; }

static inline
ats_double_type
atspre_succ_double (ats_double_type f) { return (f + 1.0) ; }

static inline
ats_double_type
atspre_pred_double (ats_double_type f) { return (f - 1.0) ; }



static inline
ats_double_type
atspre_add_double_double
  (ats_double_type f1, ats_double_type f2) { return (f1 + f2) ; }


static inline
ats_double_type
atspre_add_double_int
  (ats_double_type f1, ats_int_type i2) { return (f1 + i2) ; }


static inline
ats_double_type
atspre_add_int_double
  (ats_int_type i1, ats_double_type f2) { return (i1 + f2) ; }


static inline
ats_double_type
atspre_sub_double_double
  (ats_double_type f1, ats_double_type f2) { return (f1 - f2) ; }


static inline
ats_double_type
atspre_sub_double_int
  (ats_double_type f1, ats_int_type i2) {
  return (f1 - i2) ;
}

static inline
ats_double_type
atspre_sub_int_double
  (ats_int_type i1, ats_double_type f2) { return (i1 - f2) ; }


static inline
ats_double_type
atspre_mul_double_double
  (ats_double_type d1, ats_double_type d2) { return (d1 * d2) ; }


static inline
ats_double_type
atspre_mul_double_int
  (ats_double_type d1, ats_int_type i2) { return (d1 * (double)i2) ; }


static inline
ats_double_type
atspre_mul_int_double
  (ats_int_type i1, ats_double_type d2) { return ((double)i1 * d2) ; }


static inline
ats_double_type
atspre_div_double_double
  (ats_double_type d1, ats_double_type d2) { return (d1 / d2) ; }


static inline
ats_double_type
atspre_div_double_int
  (ats_double_type d1, ats_int_type i2) { return (d1 / (double)i2) ; }


static inline
ats_double_type
atspre_div_int_double
  (ats_int_type i1, ats_double_type d2) { return ((double)i1 / d2) ; }


static inline
ats_bool_type
atspre_lt_double_double (
  ats_double_type d1, ats_double_type d2
) {
  return (d1 < d2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_lte_double_double (
  ats_double_type d1, ats_double_type d2
) {
  return (d1 <= d2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_gt_double_double
  (ats_double_type d1, ats_double_type d2) {
  return (d1 > d2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_gte_double_double
  (ats_double_type d1, ats_double_type d2) {
  return (d1 >= d2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_eq_double_double
  (ats_double_type d1, ats_double_type d2) {
  return (d1 == d2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_neq_double_double
  (ats_double_type d1, ats_double_type d2) {
  return (d1 != d2 ? 1 : 0) ;
}





static inline
ats_int_type
atspre_compare_double_double
  (ats_double_type d1, ats_double_type d2) {
  if (d1 < d2) return (-1) ;
  else if (d1 > d2) return ( 1) ;
  else return 0 ;
}

static inline
ats_double_type
atspre_max_double_double
  (ats_double_type d1, ats_double_type d2) {
  return (d1 >= d2) ? d1 : d2 ;
}

static inline
ats_double_type
atspre_min_double_double
  (ats_double_type d1, ats_double_type d2) {
  return (d1 <= d2) ? d1 : d2 ;
}



static inline
ats_double_type
atspre_square_double (ats_double_type d) { return (d * d) ; }



static inline
ats_double_type
atspre_cube_double (ats_double_type d) { return (d * d * d) ; }



static inline
ats_void_type
atspre_fprint_double
  (ats_ptr_type out, ats_double_type f) {
  int n = fprintf ((FILE *)out, "%f", f) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_double] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_double
  (ats_double_type f) {

  atspre_fprint_double ((ats_ptr_type)stdout, f) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_double
  (ats_double_type f) {

  atspre_fprint_double ((ats_ptr_type)stderr, f) ;

  return ;
}



static inline
ats_ptr_type
atspre_tostrptr_double
  (ats_double_type f) {
  return atspre_tostringf ((ats_ptr_type)"%f", f) ;
}







static inline
ats_int_type
atspre_int_of_ldouble (ats_ldouble_type ld) { return ld ; }

static inline
ats_lint_type
atspre_lint_of_ldouble (ats_ldouble_type ld) { return ld ; }

static inline
ats_llint_type
atspre_llint_of_ldouble (ats_ldouble_type ld) { return ld ; }



static inline
ats_ldouble_type
atspre_ldouble_of_int
  (ats_int_type i) { return ((ats_ldouble_type)i) ; }


static inline
ats_ldouble_type
atspre_ldouble_of_lint
  (ats_lint_type li) { return (ats_ldouble_type)li ; }


static inline
ats_ldouble_type
atspre_ldouble_of_llint
  (ats_llint_type lli) { return (ats_ldouble_type)lli ; }




static inline
ats_ldouble_type
atspre_ldouble_of_float
  (ats_float_type f) { return ((ats_ldouble_type)f) ; }


static inline
ats_ldouble_type
atspre_ldouble_of_double
  (ats_double_type d) { return ((ats_ldouble_type)d) ; }




static inline
ats_ldouble_type
atspre_abs_ldouble
  (ats_ldouble_type f) { return (f >= 0.0 ? f : -f) ; }

static inline
ats_ldouble_type
atspre_neg_ldouble (ats_ldouble_type f) { return (-f) ; }

static inline
ats_ldouble_type
atspre_succ_ldouble (ats_ldouble_type f) { return (f + 1.0) ; }

static inline
ats_ldouble_type
atspre_pred_ldouble (ats_ldouble_type f) { return (f - 1.0) ; }

static inline
ats_ldouble_type
atspre_add_ldouble_ldouble
  (ats_ldouble_type f1, ats_ldouble_type f2) {
  return (f1 + f2) ;
}

static inline
ats_ldouble_type
atspre_sub_ldouble_ldouble
  (ats_ldouble_type f1, ats_ldouble_type f2) {
  return (f1 - f2) ;
}



static inline
ats_ldouble_type
atspre_mul_ldouble_ldouble
  (ats_ldouble_type ld1, ats_ldouble_type ld2) {
  return (ld1 * ld2) ;
}

static inline
ats_ldouble_type
atspre_mul_int_ldouble
  (ats_int_type i1, ats_ldouble_type ld2) {
  return ((long double)i1 * ld2) ;
}

static inline
ats_ldouble_type
atspre_mul_ldouble_int
  (ats_ldouble_type ld1, ats_int_type i2) {
  return (ld1 * (long double)i2) ;
}




static inline
ats_ldouble_type
atspre_div_ldouble_ldouble (
  ats_ldouble_type ld1, ats_ldouble_type ld2
) {
  return (ld1 / ld2) ;
}

static inline
ats_ldouble_type
atspre_div_ldouble_int
  (ats_ldouble_type ld1, ats_int_type i2) {
  return (ld1 / (long double)i2) ;
}



static inline
ats_bool_type
atspre_lt_ldouble_ldouble
  (ats_ldouble_type ld1, ats_ldouble_type ld2) {
  return (ld1 == ld2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_lte_ldouble_ldouble
  (ats_ldouble_type ld1, ats_ldouble_type ld2) {
  return (ld1 <= ld2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_gt_ldouble_ldouble
  (ats_ldouble_type ld1, ats_ldouble_type ld2) {
  return (ld1 > ld2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_gte_ldouble_ldouble
  (ats_ldouble_type ld1, ats_ldouble_type ld2) {
  return (ld1 >= ld2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_eq_ldouble_ldouble (
  ats_ldouble_type ld1, ats_ldouble_type ld2
) {
  return (ld1 == ld2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_neq_ldouble_ldouble (
  ats_ldouble_type ld1, ats_ldouble_type ld2
) {
  return (ld1 != ld2 ? 1 : 0) ;
}



static inline
ats_int_type
atspre_compare_ldouble_ldouble
  (ats_ldouble_type ld1, ats_ldouble_type ld2) {
  if (ld1 < ld2) return (-1) ;
  else if (ld1 > ld2) return ( 1) ;
  else return 0 ;
}

static inline
ats_ldouble_type
atspre_max_ldouble_ldouble
  (ats_ldouble_type ld1, ats_ldouble_type ld2) {
  return (ld1 >= ld2) ? ld1 : ld2 ;
}

static inline
ats_ldouble_type
atspre_min_ldouble_ldouble
  (ats_ldouble_type ld1, ats_ldouble_type ld2) {
  return (ld1 <= ld2) ? ld1 : ld2 ;
}



static inline
ats_ldouble_type
atspre_square_ldouble (ats_ldouble_type ld) { return (ld * ld) ; }



static inline
ats_ldouble_type
atspre_cube_ldouble (ats_ldouble_type ld) { return (ld * ld * ld) ; }



static inline
ats_void_type
atspre_fprint_ldouble (
  ats_ptr_type out, ats_ldouble_type f
) {
  int n = fprintf ((FILE *)out, "%Lf", f) ;
  if (n < 0) { ats_exit_errmsg
    (n, (ats_ptr_type)"exit(ATS): [fprint_ldouble] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_ldouble
  (ats_ldouble_type f) {

  atspre_fprint_ldouble ((ats_ptr_type)stdout, f) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_ldouble
  (ats_ldouble_type f) {

  atspre_fprint_ldouble ((ats_ptr_type)stderr, f) ;

  return ;
}



static inline
ats_ptr_type
atspre_tostrptr_ldouble
  (ats_ldouble_type f) {
  return atspre_tostringf ((ats_ptr_type)"%Lf", f) ;
}
# 24 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/integer.cats" 1
# 41 "/home/hwwu/Programs/ats/prelude/CATS/integer.cats"
extern
int fprintf (FILE *stream, const char *format, ...) ;







extern int atoi (const char* cs) ;
extern long int atol (const char* cs) ;
extern long long int atoll (const char* cs) ;
# 63 "/home/hwwu/Programs/ats/prelude/CATS/integer.cats"
extern ats_ptr_type atspre_tostrptr_llint (ats_llint_type i) ;
extern ats_ptr_type atspre_tostrptr_ullint (ats_ullint_type u) ;







static inline
ats_int_type
atspre_int_of_char (ats_char_type c) { return c ; }

static inline
ats_int_type
atspre_int_of_schar (ats_schar_type c) { return c ; }

static inline
ats_int_type
atspre_int_of_uchar (ats_uchar_type c) { return c ; }



static inline
ats_int_type
atspre_int_of_string
  (ats_ptr_type s) { return atoi((char*)s) ; }




static inline
ats_int_type
atspre_abs_int
  (ats_int_type i) { return (i >= 0 ? i : -i) ; }


static inline
ats_int_type
atspre_neg_int (ats_int_type i) { return (-i) ; }

static inline
ats_int_type
atspre_succ_int (ats_int_type i) { return (i + 1) ; }

static inline
ats_int_type
atspre_pred_int (ats_int_type i) { return (i - 1) ; }

static inline
ats_int_type
atspre_add_int_int (ats_int_type i1, ats_int_type i2) {
  return (i1 + i2) ;
}

static inline
ats_int_type
atspre_sub_int_int (ats_int_type i1, ats_int_type i2) {
  return (i1 - i2) ;
}

static inline
ats_int_type
atspre_mul_int_int (ats_int_type i1, ats_int_type i2) {
  return (i1 * i2) ;
}

static inline
ats_int_type
atspre_div_int_int (ats_int_type i1, ats_int_type i2) {
  return (i1 / i2) ;
}

static inline
ats_int_type
atspre_mod_int_int (ats_int_type i1, ats_int_type i2) {
  return (i1 % i2) ;
}

static inline
ats_bool_type
atspre_lt_int_int (ats_int_type i1, ats_int_type i2) {
  return (i1 < i2) ;
}

static inline
ats_bool_type
atspre_lte_int_int (ats_int_type i1, ats_int_type i2) {
  return (i1 <= i2) ;
}

static inline
ats_bool_type
atspre_gt_int_int (ats_int_type i1, ats_int_type i2) {
  return (i1 > i2) ;
}

static inline
ats_bool_type
atspre_gte_int_int (ats_int_type i1, ats_int_type i2) {
  return (i1 >= i2) ;
}

static inline
ats_bool_type
atspre_eq_int_int (ats_int_type i1, ats_int_type i2) {
  return (i1 == i2) ;
}

static inline
ats_bool_type
atspre_neq_int_int (ats_int_type i1, ats_int_type i2) {
  return (i1 != i2) ;
}



static inline
ats_int_type
atspre_compare_int_int (ats_int_type i1, ats_int_type i2) {
  if (i1 < i2) return (-1) ;
  else if (i1 > i2) return ( 1) ;
  else return (0) ;
}

static inline
ats_int_type
atspre_max_int_int (ats_int_type i1, ats_int_type i2) {
  return (i1 >= i2) ? i1 : i2 ;
}

static inline
ats_int_type
atspre_min_int_int (ats_int_type i1, ats_int_type i2) {
  return (i1 <= i2) ? i1 : i2 ;
}





static inline
ats_int_type
atspre_square_int (ats_int_type i) {
  return (i * i) ;
}

static inline
ats_int_type
atspre_cube_int (ats_int_type i) {
  return (i * i * i) ;
}

static inline
ats_int_type
atspre_pow_int_int1 (ats_int_type x, ats_int_type n) {
  ats_int_type res = 1;
  while (n > 0) {
    if (n % 2 > 0) { res *= x ; x = x * x ; }
    else { x = x * x ; }
    n = n >> 1 ;
  }
  return res ;
}



static inline
ats_int_type
atspre_gcd_int_int (ats_int_type m0, ats_int_type n0) {
  int m, n, t ;

  if (m0 >= 0) m = m0; else m = -m0 ;
  if (n0 >= 0) n = n0; else n = -n0 ;
  while (m) { t = n % m ; n = m ; m = t ; }
  return n ;

}



static inline
ats_int_type
atspre_asl_int_int1 (ats_int_type i, ats_int_type n) {
  return i << n ;
}

static inline
ats_int_type
atspre_asr_int_int1 (ats_int_type i, ats_int_type n) {
  return i >> n ;
}



static inline
ats_void_type
atspre_fprint_int (ats_ptr_type out, ats_int_type i) {
  int n ;
  n = fprintf ((FILE*)out, "%d", i) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_int] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_int (ats_int_type i) {

  atspre_fprint_int ((ats_ptr_type)stdout, i) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_int (ats_int_type i) {

  atspre_fprint_int ((ats_ptr_type)stderr, i) ;

  return ;
}



static inline
ats_void_type
atspre_fscan_int_exn (
  ats_ptr_type inp, ats_ref_type r
) {
  int n ;
  n = fscanf ((FILE*)inp, "%d", (int*)r) ;
  if (n <= 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fscan_int_exn] failed.\n") ;
  }
  return ;
}



static inline
ats_ptr_type
atspre_tostrptr_int
  (ats_int_type i) { return atspre_tostrptr_llint (i) ; }
# 316 "/home/hwwu/Programs/ats/prelude/CATS/integer.cats"
static inline
ats_uint_type
atspre_uint_of_char
  (ats_char_type c) { return ((unsigned char)c) ; }


static inline
ats_uint_type
atspre_uint_of_uchar
  (ats_uchar_type c) { return ((unsigned char)c) ; }


static inline
ats_uint_type
atspre_uint_of_double
  (ats_double_type d) { return (ats_uint_type)d ; }


static inline
ats_uint_type
atspre_succ_uint (ats_uint_type i) { return (i + 1) ; }

static inline
ats_uint_type
atspre_pred_uint (ats_uint_type i) { return (i - 1) ; }

static inline
ats_uint_type
atspre_add_uint_uint (ats_uint_type i1, ats_uint_type i2) {
  return (i1 + i2) ;
}

static inline
ats_uint_type
atspre_sub_uint_uint (ats_uint_type i1, ats_uint_type i2) {
  return (i1 - i2) ;
}

static inline
ats_uint_type
atspre_mul_uint_uint (ats_uint_type i1, ats_uint_type i2) {
  return (i1 * i2) ;
}

static inline
ats_uint_type
atspre_div_uint_uint (ats_uint_type i1, ats_uint_type i2) {
  return (i1 / i2) ;
}

static inline
ats_uint_type
atspre_mod_uint_uint (ats_uint_type i1, ats_uint_type i2) {
  return (i1 % i2) ;
}

static inline
ats_bool_type
atspre_lt_uint_uint (ats_uint_type i1, ats_uint_type i2) {
  return (i1 < i2) ;
}

static inline
ats_bool_type
atspre_lte_uint_uint (ats_uint_type i1, ats_uint_type i2) {
  return (i1 <= i2) ;
}

static inline
ats_bool_type
atspre_gt_uint_uint (ats_uint_type i1, ats_uint_type i2) {
  return (i1 > i2) ;
}

static inline
ats_bool_type
atspre_gte_uint_uint (ats_uint_type i1, ats_uint_type i2) {
  return (i1 >= i2) ;
}

static inline
ats_bool_type
atspre_eq_uint_uint (ats_uint_type i1, ats_uint_type i2) {
  return (i1 == i2) ;
}

static inline
ats_bool_type
atspre_neq_uint_uint (ats_uint_type i1, ats_uint_type i2) {
  return (i1 != i2) ;
}





static inline
ats_int_type
atspre_compare_uint_uint (ats_uint_type i1, ats_uint_type i2) {
  if (i1 < i2) return (-1) ;
  else if (i1 > i2) return ( 1) ;
  else return (0) ;
}

static inline
ats_uint_type
atspre_max_uint_uint (ats_uint_type i1, ats_uint_type i2) {
  return (i1 >= i2 ? i1 : i2) ;
}

static inline
ats_uint_type
atspre_min_uint_uint (ats_uint_type i1, ats_uint_type i2) {
  return (i1 <= i2 ? i1 : i2) ;
}

static inline
ats_uint_type
atspre_square_uint (ats_uint_type u) { return (u * u) ; }

static inline
ats_uint_type
atspre_cube_uint (ats_uint_type u) { return (u * u * u) ; }





static inline
ats_uint_type
atspre_lnot_uint (ats_uint_type x) { return (~x) ; }

static inline
ats_uint_type
atspre_land_uint_uint (ats_uint_type x, ats_uint_type y) {
  return (x & y) ;
}

static inline
ats_uint_type
atspre_lor_uint_uint (ats_uint_type x, ats_uint_type y) {
  return (x | y) ;
}

static inline
ats_uint_type
atspre_lxor_uint_uint (ats_uint_type x, ats_uint_type y) {
  return (x ^ y) ;
}





static inline
ats_uint_type
atspre_lsl_uint_int1 (
  ats_uint_type u, ats_int_type n
) {
  return (u << n) ;
}

static inline
ats_uint_type
atspre_lsr_uint_int1 (
  ats_uint_type u, ats_int_type n
) {
  return (u >> n) ;
}
# 495 "/home/hwwu/Programs/ats/prelude/CATS/integer.cats"
static inline
ats_void_type
atspre_fprint_uint (ats_ptr_type out, ats_uint_type u) {
  int n = fprintf ((FILE*)out, "%u", u) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_uint] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_uint (
  ats_uint_type u
) {

  atspre_fprint_uint((ats_ptr_type)stdout, u) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_uint (
  ats_uint_type u
) {

  atspre_fprint_uint((ats_ptr_type)stderr, u) ;

  return ;
}





static inline
ats_ptr_type
atspre_tostrptr_uint
  (ats_uint_type u) { return atspre_tostrptr_ullint (u) ; }
# 578 "/home/hwwu/Programs/ats/prelude/CATS/integer.cats"
static inline
ats_int_type
atspre_ihalf (ats_int_type n) { return (n / 2) ; }

static inline
ats_int_type
atspre_nhalf (ats_int_type n) { return (n >> 1) ; }
# 598 "/home/hwwu/Programs/ats/prelude/CATS/integer.cats"
static inline
ats_int_type
atspre_uimod (
  ats_uint_type u1, ats_int_type i2
) {
  return (u1 % ((ats_uint_type)i2)) ;
}
# 624 "/home/hwwu/Programs/ats/prelude/CATS/integer.cats"
static inline
ats_lint_type
atspre_lint_of_int (ats_int_type i) { return i ; }

static inline
ats_int_type
atspre_int_of_lint (ats_lint_type li) { return li ; }



static inline
ats_lint_type
atspre_lint_of_uint (ats_uint_type u) { return u ; }

static inline
ats_uint_type
atspre_uint_of_lint (ats_lint_type li) { return li ; }



static inline
ats_lint_type
atspre_lint_of_string
  (ats_ptr_type s) { return atol((char*)s) ; }




static inline
ats_lint_type
atspre_abs_lint (ats_lint_type i) {
  return (i >= 0 ? i : -i) ;
}

static inline
ats_lint_type
atspre_neg_lint (ats_lint_type i) {
  return (-i) ;
}

static inline
ats_lint_type
atspre_succ_lint (ats_lint_type i) { return (i + 1) ; }

static inline
ats_lint_type
atspre_pred_lint (ats_lint_type i) { return (i - 1) ; }

static inline
ats_lint_type
atspre_add_lint_lint (ats_lint_type i1, ats_lint_type i2) {
  return (i1 + i2) ;
}

static inline
ats_lint_type
atspre_sub_lint_lint (ats_lint_type i1, ats_lint_type i2) {
  return (i1 - i2) ;
}

static inline
ats_lint_type
atspre_mul_lint_lint (ats_lint_type i1, ats_lint_type i2) {
  return (i1 * i2) ;
}

static inline
ats_lint_type
atspre_div_lint_lint (ats_lint_type i1, ats_lint_type i2) {
  return (i1 / i2) ;
}

static inline
ats_lint_type
atspre_mod_lint_lint (ats_lint_type i1, ats_lint_type i2) {
  return (i1 % i2) ;
}

static inline
ats_bool_type
atspre_lt_lint_lint (ats_lint_type i1, ats_lint_type i2) {
  return (i1 < i2) ;
}

static inline
ats_bool_type
atspre_lte_lint_lint (ats_lint_type i1, ats_lint_type i2) {
  return (i1 <= i2) ;
}

static inline
ats_bool_type
atspre_gt_lint_lint (ats_lint_type i1, ats_lint_type i2) {
  return (i1 > i2) ;
}

static inline
ats_bool_type
atspre_gte_lint_lint (ats_lint_type i1, ats_lint_type i2) {
  return (i1 >= i2) ;
}

static inline
ats_bool_type
atspre_eq_lint_lint (ats_lint_type i1, ats_lint_type i2) {
  return (i1 == i2) ;
}

static inline
ats_bool_type
atspre_neq_lint_lint (ats_lint_type i1, ats_lint_type i2) {
  return (i1 != i2) ;
}



static inline
ats_int_type
atspre_compare_lint_lint (ats_lint_type i1, ats_lint_type i2) {
  if (i1 < i2) return (-1) ;
  else if (i1 > i2) return ( 1) ;
  else return (0) ;
}

static inline
ats_lint_type
atspre_max_lint_lint (ats_lint_type i1, ats_lint_type i2) {
  return (i1 >= i2 ? i1 : i2) ;
}

static inline
ats_lint_type
atspre_min_lint_lint (ats_lint_type i1, ats_lint_type i2) {
  return (i1 <= i2 ? i1 : i2) ;
}



static inline
ats_void_type
atspre_fprint_lint (ats_ptr_type out, ats_lint_type i) {
  int n ;
  n = fprintf ((FILE*)out, "%li", i) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_lint] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_lint (ats_lint_type i) {

  atspre_fprint_lint ((ats_ptr_type)stdout, i) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_lint (ats_lint_type i) {

  atspre_fprint_lint ((ats_ptr_type)stderr, i) ;

  return ;
}



static inline
ats_ptr_type
atspre_tostrptr_lint
  (ats_lint_type i) { return atspre_tostrptr_llint (i) ; }
# 805 "/home/hwwu/Programs/ats/prelude/CATS/integer.cats"
static inline
ats_ulint_type
atspre_ulint_of_int (ats_int_type i) { return i ; }

static inline
ats_int_type
atspre_int_of_ulint (ats_ulint_type ul) { return ul ; }



static inline
ats_ulint_type
atspre_ulint_of_uint (ats_uint_type u) { return u ; }

static inline
ats_uint_type
atspre_uint_of_ulint (ats_ulint_type ul) { return ul ; }



static inline
ats_ulint_type
atspre_succ_ulint (ats_ulint_type i) { return (i + 1) ; }

static inline
ats_ulint_type
atspre_pred_ulint (ats_ulint_type i) { return (i - 1) ; }

static inline
ats_ulint_type
atspre_add_ulint_ulint (ats_ulint_type i1, ats_ulint_type i2) {
  return (i1 + i2) ;
}

static inline
ats_ulint_type
atspre_sub_ulint_ulint (ats_ulint_type i1, ats_ulint_type i2) {
  return (i1 - i2) ;
}

static inline
ats_ulint_type
atspre_mul_ulint_ulint (ats_ulint_type i1, ats_ulint_type i2) {
  return (i1 * i2) ;
}

static inline
ats_ulint_type
atspre_div_ulint_ulint (ats_ulint_type i1, ats_ulint_type i2) {
  return (i1 / i2) ;
}

static inline
ats_ulint_type
atspre_mod_ulint_ulint (ats_ulint_type i1, ats_ulint_type i2) {
  return (i1 % i2) ;
}

static inline
ats_bool_type
atspre_lt_ulint_ulint (ats_ulint_type i1, ats_ulint_type i2) {
  return (i1 < i2) ;
}

static inline
ats_bool_type
atspre_lte_ulint_ulint (ats_ulint_type i1, ats_ulint_type i2) {
  return (i1 <= i2) ;
}

static inline
ats_bool_type
atspre_gt_ulint_ulint (ats_ulint_type i1, ats_ulint_type i2) {
  return (i1 > i2) ;
}

static inline
ats_bool_type
atspre_gte_ulint_ulint (ats_ulint_type i1, ats_ulint_type i2) {
  return (i1 >= i2) ;
}

static inline
ats_bool_type
atspre_eq_ulint_ulint (ats_ulint_type i1, ats_ulint_type i2) {
  return (i1 == i2) ;
}

static inline
ats_bool_type
atspre_neq_ulint_ulint (ats_ulint_type i1, ats_ulint_type i2) {
  return (i1 != i2) ;
}





static inline
ats_int_type
atspre_compare_ulint_ulint
  (ats_ulint_type i1, ats_ulint_type i2) {
  if (i1 < i2) return (-1) ;
  else if (i1 > i2) return ( 1) ;
  else return (0) ;
}

static inline
ats_ulint_type
atspre_max_ulint_ulint (ats_ulint_type i1, ats_ulint_type i2) {
  return (i1 >= i2 ? i1 : i2) ;
}

static inline
ats_ulint_type
atspre_min_ulint_ulint (ats_ulint_type i1, ats_ulint_type i2) {
  return (i1 <= i2 ? i1 : i2) ;
}





static inline
ats_ulint_type
atspre_lnot_ulint (ats_ulint_type x) { return (~x) ; }

static inline
ats_ulint_type
atspre_land_ulint_ulint (ats_ulint_type x, ats_ulint_type y) {
  return (x & y) ;
}

static inline
ats_ulint_type
atspre_lor_ulint_ulint (ats_ulint_type x, ats_ulint_type y) {
  return (x | y) ;
}

static inline
ats_ulint_type
atspre_lxor_ulint_ulint (ats_ulint_type x, ats_ulint_type y) {
  return (x ^ y) ;
}

static inline
ats_ulint_type
atspre_lsl_ulint_int1 (ats_ulint_type i, ats_int_type n) {
  return i << n ;
}

static inline
ats_ulint_type
atspre_lsr_ulint_int1 (ats_ulint_type i, ats_int_type n) {
  return i >> n ;
}





static inline
ats_void_type
atspre_fprint_ulint
  (ats_ptr_type out, ats_ulint_type i) {
  int n = fprintf ((FILE*)out, "%lu", i) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_ulint] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_ulint
  (ats_ulint_type i) {

  atspre_fprint_ulint ((ats_ptr_type)stdout, i) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_ulint
  (ats_ulint_type i) {

  atspre_fprint_ulint ((ats_ptr_type)stderr, i) ;

  return ;
}



static inline
ats_ptr_type
atspre_tostrptr_ulint
  (ats_ulint_type i) { return atspre_tostrptr_ullint (i) ; }
# 1013 "/home/hwwu/Programs/ats/prelude/CATS/integer.cats"
static inline
ats_llint_type
atspre_llint_of_int
  (ats_int_type i) { return ((ats_llint_type)i) ; }


static inline
ats_int_type
atspre_int_of_llint
  (ats_llint_type lli) { return ((ats_int_type)lli) ; }
# 1036 "/home/hwwu/Programs/ats/prelude/CATS/integer.cats"
static inline
ats_llint_type
atspre_llint_of_string
  (ats_ptr_type s) { return atoll((char*)s) ; }






static inline
ats_llint_type
atspre_abs_llint (ats_llint_type i) {
  return (i >= 0 ? i : -i) ;
}

static inline
ats_llint_type
atspre_neg_llint (ats_llint_type i) {
  return (-i) ;
}

static inline
ats_llint_type
atspre_succ_llint (ats_llint_type i) { return (i + 1) ; }

static inline
ats_llint_type
atspre_pred_llint (ats_llint_type i) { return (i - 1) ; }

static inline
ats_llint_type
atspre_add_llint_llint (ats_llint_type i1, ats_llint_type i2) {
  return (i1 + i2) ;
}

static inline
ats_llint_type
atspre_sub_llint_llint (ats_llint_type i1, ats_llint_type i2) {
  return (i1 - i2) ;
}

static inline
ats_llint_type
atspre_mul_llint_llint (ats_llint_type i1, ats_llint_type i2) {
  return (i1 * i2) ;
}

static inline
ats_llint_type
atspre_div_llint_llint (ats_llint_type i1, ats_llint_type i2) {
  return (i1 / i2) ;
}

static inline
ats_llint_type
atspre_mod_llint_llint (ats_llint_type i1, ats_llint_type i2) {
  return (i1 % i2) ;
}

static inline
ats_bool_type
atspre_lt_llint_llint (ats_llint_type i1, ats_llint_type i2) {
  return (i1 < i2) ;
}

static inline
ats_bool_type
atspre_lte_llint_llint (ats_llint_type i1, ats_llint_type i2) {
  return (i1 <= i2) ;
}

static inline
ats_bool_type
atspre_gt_llint_llint (ats_llint_type i1, ats_llint_type i2) {
  return (i1 > i2) ;
}

static inline
ats_bool_type
atspre_gte_llint_llint (ats_llint_type i1, ats_llint_type i2) {
  return (i1 >= i2) ;
}

static inline
ats_bool_type
atspre_eq_llint_llint (ats_llint_type i1, ats_llint_type i2) {
  return (i1 == i2) ;
}

static inline
ats_bool_type
atspre_neq_llint_llint (ats_llint_type i1, ats_llint_type i2) {
  return (i1 != i2) ;
}



static inline
ats_int_type
atspre_compare_llint_llint
  (ats_llint_type i1, ats_llint_type i2) {
  if (i1 < i2) return (-1) ;
  else if (i1 > i2) return ( 1) ;
  else return (0) ;
}

static inline
ats_llint_type
atspre_max_llint_llint (
  ats_llint_type i1, ats_llint_type i2
) {
  return (i1 >= i2 ? i1 : i2) ;
}

static inline
ats_llint_type
atspre_min_llint_llint (
  ats_llint_type i1, ats_llint_type i2
) {
  return (i1 <= i2 ? i1 : i2) ;
}





static inline
ats_void_type
atspre_fprint_llint (
  ats_ptr_type out, ats_llint_type i
) {
  int n = fprintf ((FILE*)out, "%lli", i) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_llint] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_llint
  (ats_llint_type lli) {

  atspre_fprint_llint ((ats_ptr_type)stdout, lli) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_llint
  (ats_llint_type lli) {

  atspre_fprint_llint ((ats_ptr_type)stderr, lli) ;

  return ;
}
# 1203 "/home/hwwu/Programs/ats/prelude/CATS/integer.cats"
static inline
ats_ullint_type
atspre_ullint_of_int
  (ats_int_type i) { return ((ats_ullint_type)i) ; }


static inline
ats_ullint_type
atspre_ullint_of_uint
  (ats_uint_type u) { return ((ats_ullint_type)u) ; }
# 1228 "/home/hwwu/Programs/ats/prelude/CATS/integer.cats"
static inline
ats_ullint_type
atspre_succ_ullint (ats_ullint_type i) { return (i + 1) ; }

static inline
ats_ullint_type
atspre_pred_ullint (ats_ullint_type i) { return (i - 1) ; }

static inline
ats_ullint_type
atspre_add_ullint_ullint (
  ats_ullint_type i1, ats_ullint_type i2
) {
  return (i1 + i2) ;
}

static inline
ats_ullint_type
atspre_sub_ullint_ullint (
  ats_ullint_type i1, ats_ullint_type i2
) {
  return (i1 - i2) ;
}

static inline
ats_ullint_type
atspre_mul_ullint_ullint (ats_ullint_type i1, ats_ullint_type i2) {
  return (i1 * i2) ;
}

static inline
ats_ullint_type
atspre_div_ullint_ullint (ats_ullint_type i1, ats_ullint_type i2) {
  return (i1 / i2) ;
}

static inline
ats_ullint_type
atspre_mod_ullint_ullint (ats_ullint_type i1, ats_ullint_type i2) {
  return (i1 % i2) ;
}

static inline
ats_bool_type
atspre_lt_ullint_ullint (ats_ullint_type i1, ats_ullint_type i2) {
  return (i1 < i2) ;
}

static inline
ats_bool_type
atspre_lte_ullint_ullint (ats_ullint_type i1, ats_ullint_type i2) {
  return (i1 <= i2) ;
}

static inline
ats_bool_type
atspre_gt_ullint_ullint (ats_ullint_type i1, ats_ullint_type i2) {
  return (i1 > i2) ;
}

static inline
ats_bool_type
atspre_gte_ullint_ullint (ats_ullint_type i1, ats_ullint_type i2) {
  return (i1 >= i2) ;
}

static inline
ats_bool_type
atspre_eq_ullint_ullint (ats_ullint_type i1, ats_ullint_type i2) {
  return (i1 == i2) ;
}

static inline
ats_bool_type
atspre_neq_ullint_ullint (ats_ullint_type i1, ats_ullint_type i2) {
  return (i1 != i2) ;
}





static inline
ats_int_type
atspre_compare_ullint_ullint
  (ats_ullint_type i1, ats_ullint_type i2) {
  if (i1 < i2) return (-1) ;
  else if (i1 > i2) return ( 1) ;
  else return (0) ;
}

static inline
ats_ullint_type
atspre_max_ullint_ullint (ats_ullint_type i1, ats_ullint_type i2) {
  return (i1 >= i2 ? i1 : i2) ;
}

static inline
ats_ullint_type
atspre_min_ullint_ullint (ats_ullint_type i1, ats_ullint_type i2) {
  return (i1 <= i2 ? i1 : i2) ;
}





static inline
ats_void_type
atspre_fprint_ullint (
  ats_ptr_type out, ats_ullint_type i
) {
  int n = fprintf ((FILE*)out, "%llu", i) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_ullint] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_ullint
  (ats_ullint_type i) {

  atspre_fprint_ullint ((ats_ptr_type)stdout, i) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_ullint
  (ats_ullint_type i) {

  atspre_fprint_ullint ((ats_ptr_type)stderr, i) ;

  return ;
}
# 25 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/integer_fixed.cats" 1
# 41 "/home/hwwu/Programs/ats/prelude/CATS/integer_fixed.cats"
extern
int fprintf (FILE *stream, const char *format, ...) ;




extern
ats_void_type
ats_exit_errmsg (ats_int_type n, ats_ptr_type msg) ;
# 59 "/home/hwwu/Programs/ats/prelude/CATS/integer_fixed.cats"
static inline
ats_int8_type
atspre_int8_of_int (ats_int_type i) {
  return i ;
}

static inline
ats_int_type
atspre_int_of_int8 (ats_int8_type i) {
  return i ;
}



static inline
ats_int8_type
atspre_abs_int8 (ats_int8_type i) {
  return (i >= 0 ? i : -i) ;
}

static inline
ats_int8_type
atspre_neg_int8 (ats_int8_type i) {
  return (-i) ;
}

static inline
ats_int8_type
atspre_succ_int8 (ats_int8_type i) {
  return (i + 1) ;
}

static inline
ats_int8_type
atspre_pred_int8 (ats_int8_type i) {
  return (i - 1) ;
}

static inline
ats_int8_type
atspre_add_int8_int8 (ats_int8_type i1, ats_int8_type i2) {
  return (i1 + i2) ;
}

static inline
ats_int8_type
atspre_sub_int8_int8 (ats_int8_type i1, ats_int8_type i2) {
  return (i1 - i2) ;
}

static inline
ats_int8_type
atspre_mul_int8_int8 (ats_int8_type i1, ats_int8_type i2) {
  return (i1 * i2) ;
}

static inline
ats_int8_type
atspre_div_int8_int8 (ats_int8_type i1, ats_int8_type i2) {
  return (i1 / i2) ;
}

static inline
ats_int8_type
atspre_mod_int8_int8 (ats_int8_type i1, ats_int8_type i2) {
  return (i1 % i2) ;
}

static inline
ats_bool_type
atspre_lt_int8_int8 (ats_int8_type i1, ats_int8_type i2) {
  return (i1 < i2) ;
}

static inline
ats_bool_type
atspre_lte_int8_int8 (ats_int8_type i1, ats_int8_type i2) {
  return (i1 <= i2) ;
}

static inline
ats_bool_type
atspre_gt_int8_int8 (ats_int8_type i1, ats_int8_type i2) {
  return (i1 > i2) ;
}

static inline
ats_bool_type
atspre_gte_int8_int8 (ats_int8_type i1, ats_int8_type i2) {
  return (i1 >= i2) ;
}

static inline
ats_bool_type
atspre_eq_int8_int8 (ats_int8_type i1, ats_int8_type i2) {
  return (i1 == i2) ;
}

static inline
ats_bool_type
atspre_neq_int8_int8 (ats_int8_type i1, ats_int8_type i2) {
  return (i1 != i2) ;
}



static inline
ats_int_type
atspre_compare_int8_int8 (ats_int8_type i1, ats_int8_type i2) {
  if (i1 < i2) return (-1) ;
  else if (i1 > i2) return ( 1) ;
  else return (0) ;
}

static inline
ats_int8_type
atspre_max_int8_int8 (ats_int8_type i1, ats_int8_type i2) {
  return (i1 >= i2) ? i1 : i2 ;
}

static inline
ats_int8_type
atspre_min_int8_int8 (ats_int8_type i1, ats_int8_type i2) {
  return (i1 <= i2) ? i1 : i2 ;
}



static inline
ats_void_type
atspre_fprint_int8 (ats_ptr_type out, ats_int8_type i) {
  int n = fprintf ((FILE*)out, "%hhd", i) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_int8] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_int8 (ats_int8_type i) {

  atspre_fprint_int8 ((ats_ptr_type)stdout, i) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_int8 (ats_int8_type i) {
  atspre_stderr_view_get () ;
  atspre_fprint_int8 ((ats_ptr_type)stderr, i) ;
  atspre_stderr_view_set () ;
  return ;
}





static inline
ats_uint8_type
atspre_uint8_of_uint (ats_uint_type i) {
  return i ;
}

static inline
ats_uint_type
atspre_uint_of_uint8 (ats_uint8_type i) {
  return i ;
}



static inline
ats_uint8_type
atspre_succ_uint8 (ats_uint8_type i) {
  return (i + 1) ;
}

static inline
ats_uint8_type
atspre_pred_uint8 (ats_uint8_type i) {
  return (i - 1) ;
}

static inline
ats_uint8_type
atspre_add_uint8_uint8 (ats_uint8_type i1, ats_uint8_type i2) {
  return (i1 + i2) ;
}

static inline
ats_uint8_type
atspre_sub_uint8_uint8 (ats_uint8_type i1, ats_uint8_type i2) {
  return (i1 - i2) ;
}

static inline
ats_uint8_type
atspre_mul_uint8_uint8 (ats_uint8_type i1, ats_uint8_type i2) {
  return (i1 * i2) ;
}

static inline
ats_uint8_type
atspre_div_uint8_uint8 (ats_uint8_type i1, ats_uint8_type i2) {
  return (i1 / i2) ;
}

static inline
ats_uint8_type
atspre_mod_uint8_uint8 (ats_uint8_type i1, ats_uint8_type i2) {
  return (i1 % i2) ;
}





static inline
ats_bool_type
atspre_lt_uint8_uint8 (ats_uint8_type i1, ats_uint8_type i2) {
  return (i1 < i2) ;
}

static inline
ats_bool_type
atspre_lte_uint8_uint8 (ats_uint8_type i1, ats_uint8_type i2) {
  return (i1 <= i2) ;
}

static inline
ats_bool_type
atspre_gt_uint8_uint8 (ats_uint8_type i1, ats_uint8_type i2) {
  return (i1 > i2) ;
}

static inline
ats_bool_type
atspre_gte_uint8_uint8 (ats_uint8_type i1, ats_uint8_type i2) {
  return (i1 >= i2) ;
}

static inline
ats_bool_type
atspre_eq_uint8_uint8 (ats_uint8_type i1, ats_uint8_type i2) {
  return (i1 == i2) ;
}

static inline
ats_bool_type
atspre_neq_uint8_uint8 (ats_uint8_type i1, ats_uint8_type i2) {
  return (i1 != i2) ;
}



static inline
ats_int_type
atspre_compare_uint8_uint8 (ats_uint8_type i1, ats_uint8_type i2) {
  if (i1 < i2) return (-1) ;
  else if (i1 > i2) return ( 1) ;
  else return (0) ;
}

static inline
ats_uint8_type
atspre_max_uint8_uint8 (ats_uint8_type i1, ats_uint8_type i2) {
  return (i1 >= i2) ? i1 : i2 ;
}

static inline
ats_uint8_type
atspre_min_uint8_uint8 (ats_uint8_type i1, ats_uint8_type i2) {
  return (i1 <= i2) ? i1 : i2 ;
}



static inline
ats_void_type
atspre_fprint_uint8 (ats_ptr_type out, ats_uint8_type i) {
  int n = fprintf ((FILE*)out, "%hhu", i) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_uint8] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_uint8 (ats_uint8_type i) {

  atspre_fprint_uint8 ((ats_ptr_type)stdout, i) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_uint8 (ats_uint8_type i) {
  atspre_stderr_view_get () ;
  atspre_fprint_uint8 ((ats_ptr_type)stderr, i) ;
  atspre_stderr_view_set () ;
  return ;
}





static inline
ats_int16_type
atspre_int16_of_int (ats_int_type i) {
  return i ;
}

static inline
ats_int_type
atspre_int_of_int16 (ats_int16_type i) {
  return i ;
}



static inline
ats_int16_type
atspre_abs_int16 (ats_int16_type i) {
  return (i >= 0 ? i : -i) ;
}

static inline
ats_int16_type
atspre_neg_int16 (ats_int16_type i) {
  return (-i) ;
}

static inline
ats_int16_type
atspre_succ_int16 (ats_int16_type i) {
  return (i + 1) ;
}

static inline
ats_int16_type
atspre_pred_int16 (ats_int16_type i) {
  return (i - 1) ;
}

static inline
ats_int16_type
atspre_add_int16_int16 (ats_int16_type i1, ats_int16_type i2) {
  return (i1 + i2) ;
}

static inline
ats_int16_type
atspre_sub_int16_int16 (ats_int16_type i1, ats_int16_type i2) {
  return (i1 - i2) ;
}

static inline
ats_int16_type
atspre_mul_int16_int16 (ats_int16_type i1, ats_int16_type i2) {
  return (i1 * i2) ;
}

static inline
ats_int16_type
atspre_div_int16_int16 (ats_int16_type i1, ats_int16_type i2) {
  return (i1 / i2) ;
}

static inline
ats_int16_type
atspre_mod_int16_int16 (ats_int16_type i1, ats_int16_type i2) {
  return (i1 % i2) ;
}

static inline
ats_bool_type
atspre_lt_int16_int16 (ats_int16_type i1, ats_int16_type i2) {
  return (i1 < i2) ;
}

static inline
ats_bool_type
atspre_lte_int16_int16 (ats_int16_type i1, ats_int16_type i2) {
  return (i1 <= i2) ;
}

static inline
ats_bool_type
atspre_gt_int16_int16 (ats_int16_type i1, ats_int16_type i2) {
  return (i1 > i2) ;
}

static inline
ats_bool_type
atspre_gte_int16_int16 (ats_int16_type i1, ats_int16_type i2) {
  return (i1 >= i2) ;
}

static inline
ats_bool_type
atspre_eq_int16_int16 (ats_int16_type i1, ats_int16_type i2) {
  return (i1 == i2) ;
}

static inline
ats_bool_type
atspre_neq_int16_int16 (ats_int16_type i1, ats_int16_type i2) {
  return (i1 != i2) ;
}



static inline
ats_int_type
atspre_compare_int16_int16 (ats_int16_type i1, ats_int16_type i2) {
  if (i1 < i2) return (-1) ;
  else if (i1 > i2) return ( 1) ;
  else return (0) ;
}

static inline
ats_int16_type
atspre_max_int16_int16 (ats_int16_type i1, ats_int16_type i2) {
  return (i1 >= i2) ? i1 : i2 ;
}

static inline
ats_int16_type
atspre_min_int16_int16 (ats_int16_type i1, ats_int16_type i2) {
  return (i1 <= i2) ? i1 : i2 ;
}



static inline
ats_void_type
atspre_fprint_int16 (ats_ptr_type out, ats_int16_type i) {
  int n = fprintf ((FILE*)out, "%d", i) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_int16] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_int16 (ats_int16_type i) {

  atspre_fprint_int16 ((ats_ptr_type)stdout, i) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_int16 (ats_int16_type i) {
  atspre_stderr_view_get () ;
  atspre_fprint_int16 ((ats_ptr_type)stderr, i) ;
  atspre_stderr_view_set () ;
  return ;
}







static inline
ats_uint16_type
atspre_uint16_of_int (ats_int_type i) { return i ; }
static inline
ats_int_type
atspre_int_of_uint16 (ats_uint16_type i) { return i ; }

static inline
ats_uint16_type
atspre_uint16_of_uint (ats_uint_type i) { return i ; }
static inline
ats_uint_type
atspre_uint_of_uint16 (ats_uint16_type i) { return i ; }



static inline
ats_uint16_type
atspre_succ_uint16 (ats_uint16_type i) {
  return (i + 1) ;
}

static inline
ats_uint16_type
atspre_pred_uint16 (ats_uint16_type i) {
  return (i - 1) ;
}

static inline
ats_uint16_type
atspre_add_uint16_uint16 (ats_uint16_type i1, ats_uint16_type i2) {
  return (i1 + i2) ;
}

static inline
ats_uint16_type
atspre_sub_uint16_uint16 (ats_uint16_type i1, ats_uint16_type i2) {
  return (i1 - i2) ;
}

static inline
ats_uint16_type
atspre_mul_uint16_uint16 (ats_uint16_type i1, ats_uint16_type i2) {
  return (i1 * i2) ;
}

static inline
ats_uint16_type
atspre_div_uint16_uint16 (ats_uint16_type i1, ats_uint16_type i2) {
  return (i1 / i2) ;
}

static inline
ats_uint16_type
atspre_mod_uint16_uint16 (ats_uint16_type i1, ats_uint16_type i2) {
  return (i1 % i2) ;
}





static inline
ats_bool_type
atspre_lt_uint16_uint16 (ats_uint16_type i1, ats_uint16_type i2) {
  return (i1 < i2) ;
}

static inline
ats_bool_type
atspre_lte_uint16_uint16 (ats_uint16_type i1, ats_uint16_type i2) {
  return (i1 <= i2) ;
}

static inline
ats_bool_type
atspre_gt_uint16_uint16 (ats_uint16_type i1, ats_uint16_type i2) {
  return (i1 > i2) ;
}

static inline
ats_bool_type
atspre_gte_uint16_uint16 (ats_uint16_type i1, ats_uint16_type i2) {
  return (i1 >= i2) ;
}

static inline
ats_bool_type
atspre_eq_uint16_uint16 (ats_uint16_type i1, ats_uint16_type i2) {
  return (i1 == i2) ;
}

static inline
ats_bool_type
atspre_neq_uint16_uint16 (ats_uint16_type i1, ats_uint16_type i2) {
  return (i1 != i2) ;
}



static inline
ats_int_type
atspre_compare_uint16_uint16 (ats_uint16_type i1, ats_uint16_type i2) {
  if (i1 < i2) return (-1) ;
  else if (i1 > i2) return ( 1) ;
  else return (0) ;
}

static inline
ats_uint16_type
atspre_max_uint16_uint16 (ats_uint16_type i1, ats_uint16_type i2) {
  return (i1 >= i2) ? i1 : i2 ;
}

static inline
ats_uint16_type
atspre_min_uint16_uint16 (ats_uint16_type i1, ats_uint16_type i2) {
  return (i1 <= i2) ? i1 : i2 ;
}





static inline
ats_void_type
atspre_fprint_uint16 (ats_ptr_type out, ats_uint16_type i) {
  int n = fprintf ((FILE*)out, "%hu", i) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_uint16] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_uint16 (ats_uint16_type i) {

  atspre_fprint_uint16 ((ats_ptr_type)stdout, i) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_uint16 (ats_uint16_type i) {
  atspre_stderr_view_get () ;
  atspre_fprint_uint16 ((ats_ptr_type)stderr, i) ;
  atspre_stderr_view_set () ;
  return ;
}





static inline
ats_int32_type
atspre_int32_of_int (ats_int_type i) {
  return i ;
}

static inline
ats_int_type
atspre_int_of_int32 (ats_int32_type i) {
  return i ;
}



static inline
ats_int32_type
atspre_abs_int32 (ats_int32_type i) {
  return (i >= 0 ? i : -i) ;
}

static inline
ats_int32_type
atspre_neg_int32 (ats_int32_type i) {
  return (-i) ;
}

static inline
ats_int32_type
atspre_succ_int32 (ats_int32_type i) {
  return (i + 1) ;
}

static inline
ats_int32_type
atspre_pred_int32 (ats_int32_type i) {
  return (i - 1) ;
}

static inline
ats_int32_type
atspre_add_int32_int32 (ats_int32_type i1, ats_int32_type i2) {
  return (i1 + i2) ;
}

static inline
ats_int32_type
atspre_sub_int32_int32 (ats_int32_type i1, ats_int32_type i2) {
  return (i1 - i2) ;
}

static inline
ats_int32_type
atspre_mul_int32_int32 (ats_int32_type i1, ats_int32_type i2) {
  return (i1 * i2) ;
}

static inline
ats_int32_type
atspre_div_int32_int32 (ats_int32_type i1, ats_int32_type i2) {
  return (i1 / i2) ;
}

static inline
ats_int32_type
atspre_mod_int32_int32 (ats_int32_type i1, ats_int32_type i2) {
  return (i1 % i2) ;
}

static inline
ats_bool_type
atspre_lt_int32_int32 (ats_int32_type i1, ats_int32_type i2) {
  return (i1 < i2) ;
}

static inline
ats_bool_type
atspre_lte_int32_int32 (ats_int32_type i1, ats_int32_type i2) {
  return (i1 <= i2) ;
}

static inline
ats_bool_type
atspre_gt_int32_int32 (ats_int32_type i1, ats_int32_type i2) {
  return (i1 > i2) ;
}

static inline
ats_bool_type
atspre_gte_int32_int32 (ats_int32_type i1, ats_int32_type i2) {
  return (i1 >= i2) ;
}

static inline
ats_bool_type
atspre_eq_int32_int32 (ats_int32_type i1, ats_int32_type i2) {
  return (i1 == i2) ;
}

static inline
ats_bool_type
atspre_neq_int32_int32 (ats_int32_type i1, ats_int32_type i2) {
  return (i1 != i2) ;
}



static inline
ats_int_type
atspre_compare_int32_int32 (ats_int32_type i1, ats_int32_type i2) {
  if (i1 < i2) return (-1) ;
  else if (i1 > i2) return ( 1) ;
  else return (0) ;
}

static inline
ats_int32_type
atspre_max_int32_int32 (ats_int32_type i1, ats_int32_type i2) {
  return (i1 >= i2) ? i1 : i2 ;
}

static inline
ats_int32_type
atspre_min_int32_int32 (ats_int32_type i1, ats_int32_type i2) {
  return (i1 <= i2) ? i1 : i2 ;
}



static inline
ats_void_type
atspre_fprint_int32 (ats_ptr_type out, ats_int32_type i) {
  int n ;
  n = fprintf ((FILE*)out, "%li", (ats_lint_type)i) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_int32] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_int32 (ats_int32_type i) {

  atspre_fprint_int32 ((ats_ptr_type)stdout, i) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_int32 (ats_int32_type i) {
  atspre_stderr_view_get () ;
  atspre_fprint_int32 ((ats_ptr_type)stderr, i) ;
  atspre_stderr_view_set () ;
  return ;
}

static inline
ats_ptr_type
atspre_tostrptr_int32
  (ats_int32_type i) { return atspre_tostrptr_llint (i) ; }
# 858 "/home/hwwu/Programs/ats/prelude/CATS/integer_fixed.cats"
static inline
ats_uint32_type
atspre_uint32_of_int (ats_int_type i) { return i ; }
static inline
ats_int_type
atspre_int_of_uint32 (ats_uint32_type i) { return i ; }

static inline
ats_uint32_type
atspre_uint32_of_uint (ats_uint_type i) { return i ; }
static inline
ats_uint_type
atspre_uint_of_uint32 (ats_uint32_type i) { return i ; }



static inline
ats_uint32_type
atspre_succ_uint32 (ats_uint32_type i) {
  return (i + 1) ;
}

static inline
ats_uint32_type
atspre_pred_uint32 (ats_uint32_type i) {
  return (i - 1) ;
}

static inline
ats_uint32_type
atspre_add_uint32_uint32 (ats_uint32_type i1, ats_uint32_type i2) {
  return (i1 + i2) ;
}

static inline
ats_uint32_type
atspre_sub_uint32_uint32 (ats_uint32_type i1, ats_uint32_type i2) {
  return (i1 - i2) ;
}

static inline
ats_uint32_type
atspre_mul_uint32_uint32 (ats_uint32_type i1, ats_uint32_type i2) {
  return (i1 * i2) ;
}

static inline
ats_uint32_type
atspre_div_uint32_uint32 (ats_uint32_type i1, ats_uint32_type i2) {
  return (i1 / i2) ;
}

static inline
ats_uint32_type
atspre_mod_uint32_uint32 (ats_uint32_type i1, ats_uint32_type i2) {
  return (i1 % i2) ;
}





static inline
ats_bool_type
atspre_lt_uint32_uint32 (ats_uint32_type i1, ats_uint32_type i2) {
  return (i1 < i2) ;
}

static inline
ats_bool_type
atspre_lte_uint32_uint32 (ats_uint32_type i1, ats_uint32_type i2) {
  return (i1 <= i2) ;
}

static inline
ats_bool_type
atspre_gt_uint32_uint32 (ats_uint32_type i1, ats_uint32_type i2) {
  return (i1 > i2) ;
}

static inline
ats_bool_type
atspre_gte_uint32_uint32 (ats_uint32_type i1, ats_uint32_type i2) {
  return (i1 >= i2) ;
}

static inline
ats_bool_type
atspre_eq_uint32_uint32 (ats_uint32_type i1, ats_uint32_type i2) {
  return (i1 == i2) ;
}

static inline
ats_bool_type
atspre_neq_uint32_uint32 (ats_uint32_type i1, ats_uint32_type i2) {
  return (i1 != i2) ;
}



static inline
ats_int_type
atspre_compare_uint32_uint32 (ats_uint32_type i1, ats_uint32_type i2) {
  if (i1 < i2) return (-1) ;
  else if (i1 > i2) return ( 1) ;
  else return (0) ;
}

static inline
ats_uint32_type
atspre_max_uint32_uint32 (ats_uint32_type i1, ats_uint32_type i2) {
  return (i1 >= i2) ? i1 : i2 ;
}

static inline
ats_uint32_type
atspre_min_uint32_uint32 (ats_uint32_type i1, ats_uint32_type i2) {
  return (i1 <= i2) ? i1 : i2 ;
}



static inline
ats_void_type
atspre_fprint_uint32 (ats_ptr_type out, ats_uint32_type i) {
  int n = fprintf ((FILE*)out, "%lu", (ats_ulint_type)i) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_uint32] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_uint32 (ats_uint32_type i) {

  atspre_fprint_uint32 ((ats_ptr_type)stdout, i) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_uint32 (ats_uint32_type i) {
  atspre_stderr_view_get () ;
  atspre_fprint_uint32 ((ats_ptr_type)stderr, i) ;
  atspre_stderr_view_set () ;
  return ;
}





static inline
ats_int64_type
atspre_int64_of_int (ats_int_type i) { return (i) ; }
static inline
ats_int64_type
atspre_int64_of_lint (ats_lint_type i) { return (i) ; }
static inline
ats_int64_type
atspre_int64_of_llint (ats_llint_type i) { return (i) ; }

static inline
ats_int_type
atspre_int_of_int64 (ats_int64_type i) { return i ; }



static inline
ats_int64_type
atspre_abs_int64 (ats_int64_type i) {
  return (i >= 0 ? i : -i) ;
}

static inline
ats_int64_type
atspre_neg_int64 (ats_int64_type i) {
  return (-i) ;
}

static inline
ats_int64_type
atspre_succ_int64 (ats_int64_type i) { return (i + 1) ; }

static inline
ats_int64_type
atspre_pred_int64 (ats_int64_type i) { return (i - 1) ; }

static inline
ats_int64_type
atspre_add_int64_int64 (ats_int64_type i1, ats_int64_type i2) {
  return (i1 + i2) ;
}

static inline
ats_int64_type
atspre_sub_int64_int64 (ats_int64_type i1, ats_int64_type i2) {
  return (i1 - i2) ;
}

static inline
ats_int64_type
atspre_mul_int64_int64 (ats_int64_type i1, ats_int64_type i2) {
  return (i1 * i2) ;
}

static inline
ats_int64_type
atspre_div_int64_int64 (ats_int64_type i1, ats_int64_type i2) {
  return (i1 / i2) ;
}

static inline
ats_int64_type
atspre_mod_int64_int64 (ats_int64_type i1, ats_int64_type i2) {
  return (i1 % i2) ;
}

static inline
ats_bool_type
atspre_lt_int64_int64 (ats_int64_type i1, ats_int64_type i2) {
  return (i1 < i2) ;
}

static inline
ats_bool_type
atspre_lte_int64_int64 (ats_int64_type i1, ats_int64_type i2) {
  return (i1 <= i2) ;
}

static inline
ats_bool_type
atspre_gt_int64_int64 (ats_int64_type i1, ats_int64_type i2) {
  return (i1 > i2) ;
}

static inline
ats_bool_type
atspre_gte_int64_int64 (ats_int64_type i1, ats_int64_type i2) {
  return (i1 >= i2) ;
}

static inline
ats_bool_type
atspre_eq_int64_int64 (ats_int64_type i1, ats_int64_type i2) {
  return (i1 == i2) ;
}

static inline
ats_bool_type
atspre_neq_int64_int64 (ats_int64_type i1, ats_int64_type i2) {
  return (i1 != i2) ;
}



static inline
ats_int_type
atspre_compare_int64_int64 (ats_int64_type i1, ats_int64_type i2) {
  if (i1 < i2) return (-1) ;
  else if (i1 > i2) return ( 1) ;
  else return (0) ;
}

static inline
ats_int64_type
atspre_max_int64_int64 (ats_int64_type i1, ats_int64_type i2) {
  return (i1 >= i2) ? i1 : i2 ;
}

static inline
ats_int64_type
atspre_min_int64_int64 (ats_int64_type i1, ats_int64_type i2) {
  return (i1 <= i2) ? i1 : i2 ;
}



static inline
ats_void_type
atspre_fprint_int64 (ats_ptr_type out, ats_int64_type i) {
  int n ;
  n = fprintf ((FILE*)out, "%lli", (ats_llint_type)i) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_int64] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_int64 (ats_int64_type i) {

  atspre_fprint_int64 ((ats_ptr_type)stdout, i) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_int64 (ats_int64_type i) {
  atspre_stderr_view_get () ;
  atspre_fprint_int64 ((ats_ptr_type)stderr, i) ;
  atspre_stderr_view_set () ;
  return ;
}

static inline
ats_ptr_type
atspre_tostrptr_int64
  (ats_int64_type i) { return atspre_tostrptr_llint (i) ; }






static inline
ats_uint64_type
atspre_uint64_of_int1 (ats_int_type i) { return i ; }
static inline
ats_uint64_type
atspre_uint64_of_uint (ats_uint_type i) { return i ; }
static inline
ats_uint64_type
atspre_uint64_of_ulint (ats_ulint_type i) { return i ; }
static inline
ats_uint64_type
atspre_uint64_of_ullint (ats_ullint_type i) { return i ; }

static inline
ats_uint_type
atspre_uint_of_uint64 (ats_uint64_type i) { return i ; }



static inline
ats_uint64_type
atspre_succ_uint64 (ats_uint64_type i) { return (i + 1) ; }

static inline
ats_uint64_type
atspre_pred_uint64 (ats_uint64_type i) { return (i - 1) ; }



static inline
ats_uint64_type
atspre_add_uint64_uint64 (ats_uint64_type i1, ats_uint64_type i2) {
  return (i1 + i2) ;
}

static inline
ats_uint64_type
atspre_sub_uint64_uint64 (ats_uint64_type i1, ats_uint64_type i2) {
  return (i1 - i2) ;
}

static inline
ats_uint64_type
atspre_mul_uint64_uint64 (ats_uint64_type i1, ats_uint64_type i2) {
  return (i1 * i2) ;
}

static inline
ats_uint64_type
atspre_div_uint64_uint64 (ats_uint64_type i1, ats_uint64_type i2) {
  return (i1 / i2) ;
}

static inline
ats_uint64_type
atspre_mod_uint64_uint64 (ats_uint64_type i1, ats_uint64_type i2) {
  return (i1 % i2) ;
}





static inline
ats_bool_type
atspre_lt_uint64_uint64 (ats_uint64_type i1, ats_uint64_type i2) {
  return (i1 < i2) ;
}

static inline
ats_bool_type
atspre_lte_uint64_uint64 (ats_uint64_type i1, ats_uint64_type i2) {
  return (i1 <= i2) ;
}

static inline
ats_bool_type
atspre_gt_uint64_uint64 (ats_uint64_type i1, ats_uint64_type i2) {
  return (i1 > i2) ;
}

static inline
ats_bool_type
atspre_gte_uint64_uint64 (ats_uint64_type i1, ats_uint64_type i2) {
  return (i1 >= i2) ;
}

static inline
ats_bool_type
atspre_eq_uint64_uint64 (ats_uint64_type i1, ats_uint64_type i2) {
  return (i1 == i2) ;
}

static inline
ats_bool_type
atspre_neq_uint64_uint64 (ats_uint64_type i1, ats_uint64_type i2) {
  return (i1 != i2) ;
}



static inline
ats_int_type
atspre_compare_uint64_uint64 (ats_uint64_type i1, ats_uint64_type i2) {
  if (i1 < i2) return (-1) ;
  else if (i1 > i2) return ( 1) ;
  else return (0) ;
}

static inline
ats_uint64_type
atspre_max_uint64_uint64 (ats_uint64_type i1, ats_uint64_type i2) {
  return (i1 >= i2) ? i1 : i2 ;
}

static inline
ats_uint64_type
atspre_min_uint64_uint64 (ats_uint64_type i1, ats_uint64_type i2) {
  return (i1 <= i2) ? i1 : i2 ;
}



static inline
ats_void_type
atspre_fprint_uint64 (ats_ptr_type out, ats_uint64_type u) {
  int n = fprintf ((FILE*)out, "%llu", (ats_ullint_type)u) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_uint64] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_uint64 (ats_uint64_type i) {

  atspre_fprint_uint64 ((ats_ptr_type)stdout, i) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_uint64 (ats_uint64_type i) {
  atspre_stderr_view_get () ;
  atspre_fprint_uint64 ((ats_ptr_type)stderr, i) ;
  atspre_stderr_view_set () ;
  return ;
}
# 26 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/integer_ptr.cats" 1
# 41 "/home/hwwu/Programs/ats/prelude/CATS/integer_ptr.cats"
extern
int fprintf (FILE *stream, const char *format, ...) ;






typedef ats_ptr_type ats_intptr_type ;
typedef ats_ptr_type ats_uintptr_type ;



extern
ats_void_type
ats_exit_errmsg(ats_int_type n, ats_ptr_type msg) ;





static inline
ats_int_type
atspre_int_of_intptr
  (ats_intptr_type i) {
  return (ats_int_type)(intptr_t)i ;
}

static inline
ats_lint_type
atspre_lint_of_intptr
  (ats_intptr_type i) {
  return (ats_lint_type)(intptr_t)i ;
}

static inline
ats_intptr_type
atspre_intptr_of_int
  (ats_int_type i) {
  return (ats_intptr_type)(intptr_t)i ;
}

static inline
ats_intptr_type
atspre_intptr_of_lint
  (ats_lint_type i) {
  return (ats_intptr_type)(intptr_t)i ;
}



static inline
ats_intptr_type
atspre_abs_intptr
  (ats_intptr_type i) {
  return ((intptr_t)i >= 0 ? i : (ats_intptr_type)(-(intptr_t)i)) ;
}

static inline
ats_intptr_type
atspre_neg_intptr
  (ats_intptr_type i) {
  return (ats_intptr_type)(-(intptr_t)i) ;
}

static inline
ats_intptr_type
atspre_succ_intptr
  (ats_intptr_type i) {
  return (ats_intptr_type)((intptr_t)i + 1) ;
}

static inline
ats_intptr_type
atspre_pred_intptr
  (ats_intptr_type i) {
  return (ats_intptr_type)((intptr_t)i - 1) ;
}



static inline
ats_intptr_type
atspre_add_intptr_int (
  ats_intptr_type i1, ats_int_type i2
) {
  return (ats_intptr_type)((intptr_t)i1 + (int)i2) ;
}

static inline
ats_intptr_type
atspre_add_intptr_intptr (
  ats_intptr_type i1, ats_intptr_type i2
) {
  return (ats_intptr_type)((intptr_t)i1 + (intptr_t)i2) ;
}



static inline
ats_intptr_type
atspre_sub_intptr_int (
  ats_intptr_type i1, ats_int_type i2
) {
  return (ats_intptr_type)((intptr_t)i1 - (int)i2) ;
}

static inline
ats_intptr_type
atspre_sub_intptr_intptr (
  ats_intptr_type i1, ats_intptr_type i2
) {
  return (ats_intptr_type)((intptr_t)i1 - (intptr_t)i2) ;
}



static inline
ats_intptr_type
atspre_mul_intptr_int (
  ats_intptr_type i1, ats_int_type i2
) {
  return (ats_intptr_type)((intptr_t)i1 * (int)i2) ;
}

static inline
ats_intptr_type
atspre_mul_intptr_intptr (
  ats_intptr_type i1, ats_intptr_type i2
) {
  return (ats_intptr_type)((intptr_t)i1 * (intptr_t)i2) ;
}



static inline
ats_intptr_type
atspre_div_intptr_int (
  ats_intptr_type i1, ats_int_type i2
) {
  return (ats_intptr_type)((intptr_t)i1 / (int)i2) ;
}

static inline
ats_intptr_type
atspre_div_intptr_intptr (
  ats_intptr_type i1, ats_intptr_type i2
) {
  return (ats_intptr_type)((intptr_t)i1 / (intptr_t)i2) ;
}



static inline
ats_intptr_type
atspre_mod_intptr_int (
  ats_intptr_type i1, ats_int_type i2) {
  return (ats_intptr_type)((intptr_t)i1 % (int)i2) ;
}

static inline
ats_intptr_type
atspre_mod_intptr_intptr (
  ats_intptr_type i1, ats_intptr_type i2
) {
  return (ats_intptr_type)((intptr_t)i1 % (intptr_t)i2) ;
}





static inline
ats_bool_type
atspre_lt_intptr_intptr (
  ats_intptr_type i1, ats_intptr_type i2
) {
  return (
    (intptr_t)i1 < (intptr_t)i2 ? 1 : 0
  ) ;
}

static inline
ats_bool_type
atspre_lte_intptr_intptr (
  ats_intptr_type i1, ats_intptr_type i2
) {
  return (
    (intptr_t)i1 <= (intptr_t)i2 ? 1 : 0
  ) ;
}

static inline
ats_bool_type
atspre_gt_intptr_intptr (
  ats_intptr_type i1, ats_intptr_type i2
) {
  return (
    (intptr_t)i1 > (intptr_t)i2 ? 1 : 0
  ) ;
}

static inline
ats_bool_type
atspre_gte_intptr_intptr (
  ats_intptr_type i1, ats_intptr_type i2
) {
  return (
    (intptr_t)i1 >= (intptr_t)i2 ? 1 : 0
  ) ;
}

static inline
ats_bool_type
atspre_eq_intptr_intptr (
  ats_intptr_type i1, ats_intptr_type i2
) {
  return (
    (intptr_t)i1 == (intptr_t)i2 ? 1 : 0
  ) ;
}

static inline
ats_bool_type
atspre_neq_intptr_intptr (
  ats_intptr_type i1, ats_intptr_type i2
) {
  return (
    (intptr_t)i1 != (intptr_t)i2 ? 1 : 0
  ) ;
}





static inline
ats_int_type
atspre_compare_intptr_intptr (
  ats_intptr_type i1, ats_intptr_type i2
) {
  if (i1 < i2) return (-1) ;
  else if (i1 > i2) return ( 1) ;
  else return (0) ;
}

static inline
ats_intptr_type
atspre_max_intptr_intptr (
  ats_intptr_type i1, ats_intptr_type i2
) {
  return ((i1 >= i2) ? i1 : i2) ;
}

static inline
ats_intptr_type
atspre_min_intptr_intptr (
  ats_intptr_type i1, ats_intptr_type i2
) {
  return ((i1 <= i2) ? i1 : i2) ;
}





static inline
ats_void_type
atspre_fprint_intptr (
  ats_ptr_type out, ats_intptr_type i
) {
  int n ;
  n = fprintf ((FILE*)out, "%lli", (ats_llint_type)(intptr_t)i) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_intptr] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_intptr (ats_intptr_type i) {

  atspre_fprint_intptr ((ats_ptr_type)stdout, i) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_intptr (ats_intptr_type i) {

  atspre_fprint_intptr ((ats_ptr_type)stderr, i) ;

  return ;
}
# 346 "/home/hwwu/Programs/ats/prelude/CATS/integer_ptr.cats"
static inline
ats_uint_type
atspre_uint_of_uintptr
  (ats_uintptr_type u) {
  return (ats_uint_type)(uintptr_t)u ;
}

static inline
ats_uintptr_type
atspre_uintptr_of_int1
  (ats_int_type i) {
  return (ats_uintptr_type)(uintptr_t)i ;
}

static inline
ats_uintptr_type
atspre_uintptr_of_uint
  (ats_uint_type u) {
  return (ats_uintptr_type)(uintptr_t)u ;
}

static inline
ats_uintptr_type
atspre_uintptr_of_ptr
  (ats_ptr_type p) {
  return (ats_uintptr_type)(uintptr_t)p ;
}



static inline
ats_ulint_type
atspre_ulint_of_uintptr
  (ats_uintptr_type u) {
  return (ats_ulint_type)(uintptr_t)u ;
}

static inline
ats_uintptr_type
atspre_uintptr_of_ulint
  (ats_ulint_type u) {
  return (ats_uintptr_type)(uintptr_t)u ;
}



static inline
ats_uintptr_type
atspre_succ_uintptr
  (ats_uintptr_type i) {
  return (ats_uintptr_type)((uintptr_t)i + 1) ;
}

static inline
ats_uintptr_type
atspre_pred_uintptr
  (ats_uintptr_type i) {
  return (ats_uintptr_type)((uintptr_t)i - 1) ;
}



static inline
ats_uintptr_type
atspre_add_uintptr_uint
  (ats_uintptr_type i1, ats_uint_type i2) {
  return (ats_uintptr_type)((uintptr_t)i1 + i2) ;
}

static inline
ats_uintptr_type
atspre_add_uintptr_uintptr
  (ats_uintptr_type i1, ats_uintptr_type i2) {
  return (ats_uintptr_type)((uintptr_t)i1 + (uintptr_t)i2) ;
}



static inline
ats_uintptr_type
atspre_sub_uintptr_uint
  (ats_uintptr_type i1, ats_uint_type i2) {
  return (ats_uintptr_type)((uintptr_t)i1 - i2) ;
}

static inline
ats_uintptr_type
atspre_sub_uintptr_uintptr (
  ats_uintptr_type i1, ats_uintptr_type i2
) {
  return (ats_uintptr_type)((uintptr_t)i1 - (uintptr_t)i2) ;
}



static inline
ats_uintptr_type
atspre_mul_uintptr_uint (
  ats_uintptr_type i1, ats_uint_type i2
) {
  return (ats_uintptr_type)((uintptr_t)i1 * i2) ;
}

static inline
ats_uintptr_type
atspre_mul_uintptr_uintptr (
  ats_uintptr_type i1, ats_uintptr_type i2
) {
  return (ats_uintptr_type)((uintptr_t)i1 * (uintptr_t)i2) ;
}



static inline
ats_uintptr_type
atspre_div_uintptr_uint (
  ats_uintptr_type i1, ats_uint_type i2
) {
  return (ats_uintptr_type)((uintptr_t)i1 / i2) ;
}

static inline
ats_uintptr_type
atspre_div_uintptr_uintptr (
  ats_uintptr_type i1, ats_uintptr_type i2
) {
  return (ats_uintptr_type)((uintptr_t)i1 / (uintptr_t)i2) ;
}



static inline
ats_uintptr_type
atspre_mod_uintptr_uint (
  ats_uintptr_type i1, ats_uint_type i2
) {
  return (ats_uintptr_type)((uintptr_t)i1 % i2) ;
}

static inline
ats_uintptr_type
atspre_mod_uintptr_uintptr (
  ats_uintptr_type i1, ats_uintptr_type i2
) {
  return (ats_uintptr_type)((uintptr_t)i1 % (uintptr_t)i2) ;
}





static inline
ats_bool_type
atspre_lt_uintptr_uintptr (
  ats_uintptr_type i1, ats_uintptr_type i2
) {
  return ((uintptr_t)i1 < (uintptr_t)i2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_lte_uintptr_uintptr (
  ats_uintptr_type i1, ats_uintptr_type i2
) {
  return ((uintptr_t)i1 <= (uintptr_t)i2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_gt_uintptr_uintptr (ats_uintptr_type i1, ats_uintptr_type i2) {
  return ((uintptr_t)i1 > (uintptr_t)i2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_gte_uintptr_uintptr (
  ats_uintptr_type i1, ats_uintptr_type i2
) {
  return ((uintptr_t)i1 >= (uintptr_t)i2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_eq_uintptr_uintptr (
  ats_uintptr_type i1, ats_uintptr_type i2
) {
  return ((uintptr_t)i1 == (uintptr_t)i2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_neq_uintptr_uintptr (
  ats_uintptr_type i1, ats_uintptr_type i2
) {
  return ((uintptr_t)i1 != (uintptr_t)i2 ? 1 : 0) ;
}





static inline
ats_int_type
atspre_compare_uintptr_uintptr (
  ats_uintptr_type i1, ats_uintptr_type i2
) {
  if (i1 < i2) return (-1) ;
  else if (i1 > i2) return ( 1) ;
  else return (0) ;
}

static inline
ats_uintptr_type
atspre_max_uintptr_uintptr (
  ats_uintptr_type i1, ats_uintptr_type i2
) {
  return (i1 >= i2 ? i1 : i2) ;
}

static inline
ats_uintptr_type
atspre_min_uintptr_uintptr (
  ats_uintptr_type i1, ats_uintptr_type i2
) {
  return (i1 <= i2 ? i1 : i2) ;
}





static inline
ats_uintptr_type
atspre_lnot_uintptr
  (ats_uintptr_type x) {
  return (ats_uintptr_type)(~(uintptr_t)x) ;
}

static inline
ats_uintptr_type
atspre_land_uintptr_uintptr
  (ats_uintptr_type x, ats_uintptr_type y) {
  return (ats_uintptr_type)((uintptr_t)x & (uintptr_t)y) ;
}

static inline
ats_uintptr_type
atspre_lor_uintptr_uintptr
  (ats_uintptr_type x, ats_uintptr_type y) {
  return (ats_uintptr_type)((uintptr_t)x | (uintptr_t)y) ;
}

static inline
ats_uintptr_type
atspre_lxor_uintptr_uintptr
  (ats_uintptr_type x, ats_uintptr_type y) {
  return (ats_uintptr_type)((uintptr_t)x ^ (uintptr_t)y) ;
}

static inline
ats_uintptr_type
atspre_lsl_uintptr_int1
  (ats_uintptr_type x, ats_int_type n) {
  return (ats_uintptr_type)((uintptr_t)x << n) ;
}

static inline
ats_uintptr_type
atspre_lsr_uintptr_int1
  (ats_uintptr_type x, ats_int_type n) {
  return (ats_uintptr_type)((uintptr_t)x >> n) ;
}



static inline
ats_void_type
atspre_fprint_uintptr (
  ats_ptr_type out, ats_uintptr_type u
) {
  int n ;
  n = fprintf ((FILE*)out, "%llu", (ats_ullint_type)(uintptr_t)u) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_uintptr] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_uintptr
  (ats_uintptr_type u) {

  atspre_fprint_uintptr ((ats_ptr_type)stdout, u) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_uintptr
  (ats_uintptr_type u) {

  atspre_fprint_uintptr ((ats_ptr_type)stderr, u) ;

  return ;
}
# 27 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/lazy.cats" 1
# 49 "/home/hwwu/Programs/ats/prelude/CATS/lazy.cats"
typedef ats_ptr_type *thunkvalue ;
# 28 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/lazy_vt.cats" 1
# 44 "/home/hwwu/Programs/ats/prelude/CATS/lazy_vt.cats"
extern void free (void*) ;
# 62 "/home/hwwu/Programs/ats/prelude/CATS/lazy_vt.cats"
static inline
ats_void_type
ats_lazy_vt_free (ats_ptr_type vp_lazy) {
  ((void (*)(ats_ptr_type, ats_bool_type))((ats_clo_ptr_type)vp_lazy)->closure_fun)(vp_lazy, 0) ;
  ats_free_gc (vp_lazy) ;
  return ;
}
# 29 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/pointer.cats" 1
# 41 "/home/hwwu/Programs/ats/prelude/CATS/pointer.cats"
extern
int fprintf (FILE *stream, const char *format, ...) ;




extern
void *memset(void *s, int c, size_t n);
extern
void *memcpy(void *dest, const void *src, size_t n) ;




static
ats_ptr_type atspre_null_ptr = (ats_ptr_type)0 ;

static inline
ats_bool_type
atspre_ptr_is_null
  (ats_ptr_type p) {
  return (p == (ats_ptr_type)0 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_ptr_isnot_null (ats_ptr_type p) {
  return (p != (ats_ptr_type)0 ? 1 : 0) ;
}







static inline
ats_void_type
atspre_ptr_free_null (ats_ptr_type p) { return ; }




static inline
ats_ptr_type
atspre_psucc (ats_ptr_type p) {
  return (ats_ptr_type)((ats_byte_type*)p + 1) ;
}

static inline
ats_ptr_type
atspre_ppred (ats_ptr_type p) {
  return (ats_ptr_type)((ats_byte_type*)p - 1) ;
}



static inline
ats_ptr_type
atspre_padd_int (
  ats_ptr_type p, ats_int_type n
) {
  return (ats_ptr_type)((ats_byte_type*)p + n) ;
}

static inline
ats_ptr_type
atspre_padd_size (
  ats_ptr_type p, ats_size_type n
) {
  return (ats_ptr_type)((ats_byte_type*)p + n) ;
}

static inline
ats_ptr_type
atspre_psub_int (
  ats_ptr_type p, ats_int_type n
) {
  return (ats_ptr_type)((ats_byte_type*)p - n) ;
}

static inline
ats_ptr_type
atspre_psub_size (
  ats_ptr_type p, ats_size_type n
) {
  return (ats_ptr_type)((ats_byte_type*)p - n) ;
}

static inline
ats_ptrdiff_type
atspre_pdiff (
  ats_ptr_type p1, ats_ptr_type p2
) {
  return ((ats_byte_type*)p1 - (ats_byte_type*)p2) ;
}



static inline
ats_bool_type
atspre_plt (ats_ptr_type p1, ats_ptr_type p2) {
  return (p1 < p2) ;
}

static inline
ats_bool_type
atspre_plte (ats_ptr_type p1, ats_ptr_type p2) {
  return (p1 <= p2) ;
}

static inline
ats_bool_type
atspre_pgt (ats_ptr_type p1, ats_ptr_type p2) {
  return (p1 > p2) ;
}

static inline
ats_bool_type
atspre_pgte (ats_ptr_type p1, ats_ptr_type p2) {
  return (p1 >= p2) ;
}

static inline
ats_bool_type
atspre_peq (ats_ptr_type p1, ats_ptr_type p2) {
  return (p1 == p2) ;
}

static inline
ats_bool_type
atspre_pneq (ats_ptr_type p1, ats_ptr_type p2) {
  return (p1 != p2) ;
}

static inline
ats_int_type
atspre_compare_ptr_ptr (
  ats_ptr_type p1, ats_ptr_type p2
) {
  if (p1 < p2) return (-1) ;
  else if (p1 > p2) return ( 1) ;
  else return (0) ;
}





static inline
ats_void_type
atspre_fprint_ptr (
  ats_ptr_type out, ats_ptr_type p
) {
  int n = fprintf ((FILE *)out, "%p", p) ;
  if (n < 0) {
    ats_exit_errmsg (n, (ats_ptr_type)"exit(ATS): [fprint_pointer] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_ptr(ats_ptr_type p) {

  atspre_fprint_ptr ((ats_ptr_type)stdout, p) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_ptr(ats_ptr_type p) {

  atspre_fprint_ptr ((ats_ptr_type)stderr, p) ;

  return ;
}



static inline
ats_ptr_type
atspre_ptr_alloc_tsz
  (ats_size_type tsz) {
  ats_ptr_type p ; p = ats_malloc_gc(tsz) ; return (ats_ptr_type)p ;
}

static inline
ats_void_type
atspre_ptr_free(ats_ptr_type ptr) { ats_free_gc(ptr) ; return ; }



static inline
ats_void_type
atspre_ptr_zero_tsz
  (ats_ref_type p, ats_size_type tsz) { memset (p, 0, tsz) ; return ; }






static inline
ats_void_type
atspre_ptr_move_tsz (
  ats_ptr_type p1
, ats_ptr_type p2
, ats_size_type tsz
) {
  memcpy ((void*)p2, (void*)p1, tsz) ; return ;
}
# 30 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/printf.cats" 1
# 46 "/home/hwwu/Programs/ats/prelude/CATS/printf.cats"
extern
ats_void_type
ats_exit_errmsg (ats_int_type n, ats_ptr_type msg) ;

extern ats_void_type atspre_stdout_view_get() ;
extern ats_void_type atspre_stdout_view_set() ;



static
ats_int_type
atspre_fprintf_err
  (ats_ptr_type file, ats_ptr_type fmt, ...) {
  int n ;
  va_list ap ;
  __builtin_va_start(ap,fmt) ;
  n = vfprintf((FILE *)file, (char *)fmt, ap) ;
  __builtin_va_end(ap) ;
  return n ;
}

static
ats_void_type
atspre_fprintf_exn (
  ats_ptr_type file, ats_ptr_type fmt, ...
) {
  int n ;
  va_list ap ;
  __builtin_va_start(ap,fmt) ;
  n = vfprintf((FILE *)file, (char *)fmt, ap) ;
  __builtin_va_end(ap) ;
  if (n < 0) {
    ats_exit_errmsg(n, (ats_ptr_type)"exit(ATS): [fprintf] failed\n") ;
  }
  return ;
}



static
ats_void_type
atspre_printf_exn (
  ats_ptr_type fmt, ...
) {
  int n ;
  va_list ap ;
  atspre_stdout_view_get() ;
  __builtin_va_start(ap,fmt) ;
  n = vprintf((char*)fmt, ap) ;
  __builtin_va_end(ap) ;
  atspre_stdout_view_set() ;
  if (n < 0) {
    ats_exit_errmsg(n, (ats_ptr_type)"exit(ATS): [printf] failed\n") ;
  }
  return ;
}

static
ats_void_type
atspre_prerrf_exn (
  ats_ptr_type fmt, ...
) {
  int n ;
  va_list ap ;
  atspre_stderr_view_get() ;
  __builtin_va_start(ap,fmt) ;
  n = vfprintf(stderr, (char *)fmt, ap) ;
  __builtin_va_end(ap) ;
  atspre_stderr_view_set() ;
  if (n < 0) {
    ats_exit_errmsg(n, (ats_ptr_type)"exit(ATS): [prerrf] failed\n") ;
  }
  return ;
}
# 31 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/reference.cats" 1
# 41 "/home/hwwu/Programs/ats/prelude/CATS/reference.cats"
extern
void *memcpy(void *dest, const void *src, size_t n) ;




static inline
ats_ptr_type
atspre_ref_make_elt_tsz (
  ats_ptr_type p0, ats_size_type sz
) {
  ats_ptr_type p ;
  p = ats_malloc_gc(sz) ;
  memcpy (p, p0, sz) ;
  return p ;
}

static inline
ats_ptr_type
atspre_ref_void_make () { return (ats_ptr_type)0 ; }

static inline
ats_ptr_type
atspre_ref_make_view_ptr (ats_ptr_type p) { return p ; }






static inline
ats_ptr_type
atspre_ref_get_view_ptr (ats_ptr_type r) { return r ; }
# 32 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/sizetype.cats" 1
# 41 "/home/hwwu/Programs/ats/prelude/CATS/sizetype.cats"
# 1 "/usr/lib/gcc/i686-linux-gnu/4.7/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/i686-linux-gnu/4.7/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.7/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/i686-linux-gnu/4.7/include-fixed/limits.h" 1 3 4
# 169 "/usr/lib/gcc/i686-linux-gnu/4.7/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 144 "/usr/include/limits.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/i386-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/i386-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/i386-linux-gnu/bits/local_lim.h" 2 3 4
# 161 "/usr/include/i386-linux-gnu/bits/posix1_lim.h" 2 3 4
# 145 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/i386-linux-gnu/bits/posix2_lim.h" 1 3 4
# 149 "/usr/include/limits.h" 2 3 4
# 170 "/usr/lib/gcc/i686-linux-gnu/4.7/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/i686-linux-gnu/4.7/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/i686-linux-gnu/4.7/include-fixed/limits.h" 2 3 4
# 42 "/home/hwwu/Programs/ats/prelude/CATS/sizetype.cats" 2



extern
int fprintf (FILE *stream, const char *format, ...) ;
# 55 "/home/hwwu/Programs/ats/prelude/CATS/sizetype.cats"
extern void exit (int) ;



static inline
ats_size_type
atspre_size_of_int
  (ats_int_type i) {
  if (i < 0) {
    fprintf (stderr, "[atspre_size_of_int(%i)] failed\n", i) ;
    exit (1) ;
  }
  return ((ats_size_type)i) ;
}
# 112 "/home/hwwu/Programs/ats/prelude/CATS/sizetype.cats"
static inline
ats_size_type
atspre_land_size_size (ats_size_type x, ats_size_type y) {
  return (x & y) ;
}

static inline
ats_size_type
atspre_lor_size_size (ats_size_type x, ats_size_type y) {
  return (x | y) ;
}

static inline
ats_size_type
atspre_lxor_size_size (ats_size_type x, ats_size_type y) {
  return (x ^ y) ;
}



static inline
ats_size_type
atspre_lsl_size_int1 (ats_size_type sz, ats_int_type n) {
  return (sz << n) ;
}

static inline
ats_size_type
atspre_lsr_size_int1 (ats_size_type sz, ats_int_type n) {
  return (sz >> n) ;
}





static inline
ats_void_type
atspre_fprint_size (
  ats_ptr_type out, ats_size_type sz
) {
  fprintf ((FILE*)out, "%lu", (ats_ulint_type)sz) ; return ;
}

static inline
ats_void_type
atspre_print_size (ats_size_type sz) {

  atspre_fprint_size ((ats_ptr_type)stdout, sz) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_size (ats_size_type sz) {

  atspre_fprint_size ((ats_ptr_type)stderr, sz) ;

  return ;
}







static inline
ats_int_type
atspre_int1_of_size1
  (ats_size_type sz) {
  if (2147483647 < sz) {
    fprintf (stderr, "[atspre_int_of_size(%lu)] failed\n", (ats_ulint_type)sz) ;
    exit (1) ;
  }
  return ((ats_int_type)sz) ;
}

static inline
ats_uint_type
atspre_uint1_of_size1
  (ats_size_type sz) {
  if ((2147483647 * 2U + 1U) < sz) {
    fprintf (stderr, "[atspre_uint_of_size(%lu)] failed\n", (ats_ulint_type)sz) ;
    exit (1) ;
  }
  return ((ats_uint_type)sz) ;
}



static inline
ats_size_type
atspre_size1_of_int1 (ats_int_type i) { return (ats_size_type)i ; }

static inline
ats_size_type
atspre_size1_of_uint1 (ats_uint_type u) { return (ats_size_type)u ; }

static inline
ats_size_type
atspre_size1_of_ptrdiff1 (ats_ptrdiff_type x) { return (ats_size_type)x ; }



static inline
ats_size_type
atspre_succ_size1 (ats_size_type sz) { return (sz + 1) ; }

static inline
ats_size_type
atspre_pred_size1 (ats_size_type sz) { return (sz - 1) ; }



static inline
ats_size_type
atspre_add_size1_int1 (ats_size_type sz1, ats_int_type i2) {
  return (sz1 + i2) ;
}

static inline
ats_size_type
atspre_add_size1_size1 (
  ats_size_type sz1, ats_size_type sz2
) {
  return (sz1 + sz2) ;
}



static inline
ats_size_type
atspre_sub_size1_int1 (ats_size_type sz1, ats_int_type i2) {
  return (sz1 - i2) ;
}

static inline
ats_size_type
atspre_sub_size1_size1 (
  ats_size_type sz1, ats_size_type sz2
) {
  return (sz1 - sz2) ;
}



static inline
ats_size_type
atspre_mul_int1_size1 (
  ats_int_type i1, ats_size_type sz2
) {
  return (i1 * sz2) ;
}

static inline
ats_size_type
atspre_mul_size1_int1 (
  ats_size_type sz1, ats_int_type i2
) {
  return (sz1 * i2) ;
}

static inline
ats_size_type
atspre_mul_size1_size1 (
  ats_size_type sz1, ats_size_type sz2
) {
  return (sz1 * sz2) ;
}






static inline
ats_size_type
atspre_div_size1_int1 (
  ats_size_type sz1, ats_int_type i2
) {
  return (sz1 / i2) ;
}



static inline
ats_size_type
atspre_div_size1_size1 (
  ats_size_type sz1, ats_size_type sz2
) {
  return (sz1 / sz2) ;
}





static inline
ats_int_type
atspre_mod_size1_int1
  (ats_size_type sz1, ats_int_type i2) {
  return (sz1 % i2) ;
}




static inline
ats_size_type
atspre_mod_size1_size1
  (ats_size_type sz1, ats_size_type sz2) {
  return (sz1 % sz2) ;
}






static inline
ats_bool_type
atspre_lt_size1_size1
  (ats_size_type sz1, ats_size_type sz2) {
  return (sz1 < sz2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_lt_int1_size1
  (ats_int_type i1, ats_size_type sz2) {
  return ((ats_size_type)i1 < sz2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_lt_size1_int1
  (ats_size_type sz1, ats_int_type i2) {
  return (sz1 < (ats_size_type)i2 ? 1 : 0) ;
}



static inline
ats_bool_type
atspre_lte_size1_size1
  (ats_size_type sz1, ats_size_type sz2) {
  return (sz1 <= sz2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_lte_int1_size1
  (ats_int_type i1, ats_size_type sz2) {
  return ((ats_size_type)i1 <= sz2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_lte_size1_int1
  (ats_size_type sz1, ats_int_type i2) {
  return (sz1 <= (ats_size_type)i2 ? 1 : 0) ;
}



static inline
ats_bool_type
atspre_gt_size1_size1
  (ats_size_type sz1, ats_size_type sz2) {
  return (sz1 > sz2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_gt_size1_int1
  (ats_size_type sz1, ats_int_type i2) {
  return (sz1 > (ats_size_type)i2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_gte_size1_size1
  (ats_size_type sz1, ats_size_type sz2) {
  return (sz1 >= sz2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_gte_size1_int1
  (ats_size_type sz1, ats_int_type i2) {
  return (sz1 >= (ats_size_type)i2 ? 1 : 0) ;
}



static inline
ats_bool_type
atspre_eq_size1_size1
  (ats_size_type sz1, ats_size_type sz2) {
  return (sz1 == sz2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_eq_size1_int1
  (ats_size_type sz1, ats_int_type i2) {
  return (sz1 == (ats_size_type)i2 ? 1 : 0) ;
}



static inline
ats_bool_type
atspre_neq_size1_size1
  (ats_size_type sz1, ats_size_type sz2) {
  return (sz1 != sz2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_neq_size1_int1
  (ats_size_type sz1, ats_int_type i2) {
  return (sz1 != (ats_size_type)i2 ? 1 : 0) ;
}



static inline
ats_size_type
atspre_max_size1_size1
  (ats_size_type sz1, ats_size_type sz2) {
  return (sz1 >= sz2 ? sz1 : sz2) ;
}

static inline
ats_size_type
atspre_min_size1_size1
  (ats_size_type sz1, ats_size_type sz2) {
  return (sz1 <= sz2 ? sz1 : sz2) ;
}
# 475 "/home/hwwu/Programs/ats/prelude/CATS/sizetype.cats"
static inline
ats_int_type
atspre_int1_of_ssize1
  (ats_ssize_type ssz) {
  if (2147483647 < ssz || ssz < (-2147483647 - 1)) {
    fprintf (stderr,
      "exit(ATS): [atspre_int1_of_ssize1(%li)] failed\n", (ats_lint_type)ssz
    ) ; exit (1) ;
  }
  return (ats_int_type)ssz ;
}

static inline
ats_ssize_type
atspre_ssize1_of_int1
  (ats_int_type i) { return (ats_ssize_type)i ; }




static inline
ats_ssize_type
atspre_add_ssize1_ssize1 (
  ats_ssize_type i, ats_ssize_type j
) {
  return (i + j) ;
}

static inline
ats_ssize_type
atspre_sub_ssize1_ssize1 (
  ats_ssize_type i, ats_ssize_type j
) {
  return (i - j) ;
}

static inline
ats_ssize_type
atspre_mul_ssize1_ssize1 (
  ats_ssize_type i, ats_ssize_type j
) {
  return (i * j) ;
}

static inline
ats_ssize_type
atspre_div_ssize1_ssize1 (
  ats_ssize_type i, ats_ssize_type j
) {
  return (i / j) ;
}



static inline
ats_bool_type
atspre_lt_ssize1_int1
  (ats_ssize_type ssz1, ats_int_type i2) {
  return (ssz1 < i2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_lte_ssize1_int1
  (ats_ssize_type ssz1, ats_int_type i2) {
  return (ssz1 <= i2 ? 1 : 0) ;
}



static inline
ats_bool_type
atspre_gt_ssize1_int1
  (ats_ssize_type ssz1, ats_int_type i2) {
  return (ssz1 > i2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_gte_ssize1_int1
  (ats_ssize_type ssz1, ats_int_type i2) {
  return (ssz1 >= i2 ? 1 : 0) ;
}



static inline
ats_bool_type
atspre_eq_ssize1_ssize1
  (ats_ssize_type ssz1, ats_ssize_type ssz2) {
  return (ssz1 == ssz2 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_neq_ssize1_ssize1
  (ats_ssize_type ssz1, ats_ssize_type ssz2) {
  return (ssz1 != ssz2 ? 1 : 0) ;
}





static inline
ats_void_type
atspre_fprint_ssize (
  ats_ptr_type out, ats_ssize_type ssz
) {
  fprintf ((FILE*)out, "%li", (ats_lint_type)ssz) ; return ;
}

static inline
ats_void_type
atspre_print_ssize
  (ats_ssize_type ssz) {

  atspre_fprint_ssize ((ats_ptr_type)stdout, ssz) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_ssize
  (ats_size_type ssz) {

  atspre_fprint_ssize ((ats_ptr_type)stderr, ssz) ;

  return ;
}
# 33 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/string.cats" 1
# 41 "/home/hwwu/Programs/ats/prelude/CATS/string.cats"
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 92 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 123 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 162 "/usr/include/string.h" 3 4
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 207 "/usr/include/string.h" 3 4

# 232 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 259 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 278 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 311 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 338 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 393 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 423 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 441 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 485 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 513 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 532 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 555 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 642 "/usr/include/string.h" 3 4

# 42 "/home/hwwu/Programs/ats/prelude/CATS/string.cats" 2



extern
int fprintf (FILE *stream, const char *format, ...) ;




static inline
ats_void_type
atspre_strbuf_bytes_trans (ats_ptr_type p) {
  return ;
}

static inline
ats_void_type
atspre_bytes_strbuf_trans
  (ats_ptr_type p, ats_size_type n) {
  ((char*)p)[n] = '\000' ; return ;
}



static inline
ats_void_type
atspre_strbufptr_free
  (ats_ptr_type base) { ats_free_gc(base); return ; }




static inline
ats_bool_type
atspre_lt_string_string
  (const ats_ptr_type s1, const ats_ptr_type s2) {
  int i = strcmp((char*)s1, (char*)s2) ;
  return (i < 0 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_lte_string_string
  (const ats_ptr_type s1, const ats_ptr_type s2) {
  int i = strcmp((char*)s1, (char*)s2) ;
  return (i <= 0 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_gt_string_string
  (const ats_ptr_type s1, const ats_ptr_type s2) {
  int i = strcmp((char*)s1, (char*)s2) ;
  return (i > 0 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_gte_string_string
  (const ats_ptr_type s1, const ats_ptr_type s2) {
  int i = strcmp((char*)s1, (char*)s2) ;
  return (i >= 0 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_eq_string_string
  (const ats_ptr_type s1, const ats_ptr_type s2) {
  int i = strcmp((char*)s1, (char*)s2) ;




  return (i == 0 ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_neq_string_string
  (const ats_ptr_type s1, const ats_ptr_type s2) {
  int i = strcmp((char*)s1, (char*)s2) ;
  return (i != 0 ? 1 : 0) ;
}

static inline
ats_int_type
atspre_compare_string_string
  (const ats_ptr_type s1, const ats_ptr_type s2) {
  int i = strcmp((char*)s1, (char*)s2) ;
  if (i < 0) return -1 ;
  if (i > 0) return 1 ;
  return 0 ;
}



static inline
ats_void_type
atspre_fprint_string
  (const ats_ptr_type out, const ats_ptr_type s) {
  int n = fprintf ((FILE *)out, "%s", (char*)s) ;
  if (n < 0) { ats_exit_errmsg
    (n, (ats_ptr_type)"exit(ATS): [fprint_string] failed.\n") ;
  }
  return ;
}

static inline
ats_void_type
atspre_print_string (const ats_ptr_type s) {

  atspre_fprint_string((ats_ptr_type)stdout, s) ;

  return ;
}

static inline
ats_void_type
atspre_prerr_string (const ats_ptr_type s) {

  atspre_fprint_string((ats_ptr_type)stderr, s) ;

  return ;
}



static inline
ats_char_type
atspre_string_get_char_at
  (const ats_ptr_type s, ats_size_type offset) {
  return *((char*)s + offset) ;
}

static inline
ats_char_type
atspre_string_get_char_at__intsz (
  const ats_ptr_type s, ats_int_type offset
) {
  return *((char*)s + offset) ;
}

static inline
ats_void_type
atspre_strbuf_set_char_at (
  ats_ptr_type s, ats_size_type offset, ats_char_type c
) {





  *((char*)s + offset) = c ; return ;
}

static inline
ats_void_type
atspre_strbuf_set_char_at__intsz (
  ats_ptr_type s, ats_int_type offset, ats_char_type c
) {
  *((char*)s + offset) = c ; return ;
}

static inline
ats_char_type
atspre_string_test_char_at (
  const ats_ptr_type s, ats_size_type offset
) {
  return *((char*)s + offset) ;
}

static inline
ats_char_type
atspre_string_test_char_at__intsz (
  const ats_ptr_type s, ats_int_type offset
) {
  return *((char*)s + offset) ;
}



static inline
ats_void_type
atspre_strbuf_initialize_substring (
  ats_ptr_type p_buf
, ats_ptr_type s, ats_size_type st, ats_size_type ln
) {
  memcpy (p_buf, ((char*)s)+st, ln) ; ((char*)p_buf)[ln] = '\000' ;
  return ;
}



static inline
ats_ptr_type
atspre_string_copy
  (ats_ptr_type str) {
  int n ; char *des ;
  n = strlen((char*)str) ;
  des = (char*)ats_malloc_gc(n+1) ;
  des[n] = '\000' ;
  memcpy(des, str, n) ;
  return (des) ;
}



static inline
ats_ptr_type
atspre_string_append
  (ats_ptr_type s1, ats_ptr_type s2) {
  int n1, n2 ; char *des ;
  n1 = strlen((char*)s1) ;
  n2 = strlen((char*)s2) ;
  des = (char*)ats_malloc_gc(n1+n2+1) ;
  des[n1+n2] = '\000' ;
  memcpy(des, s1, n1) ; memcpy (des+n1, s2, n2) ;
  return (des) ;
}



static inline
ats_bool_type
atspre_string_contains
  (ats_ptr_type s0, ats_char_type c) {
  char *s = strchr((char*)s0, (char)c) ;
  return (s != (char*)0 ? 1 : 0) ;
}



static inline
ats_size_type
atspre_string_length
  (ats_ptr_type s) { return (strlen((char*)s)) ; }




static inline
ats_bool_type
atspre_string_is_empty
  (ats_ptr_type s) { return (*((char*)s) == '\000') ; }


static inline
ats_bool_type
atspre_string_isnot_empty
  (ats_ptr_type s) { return (*((char*)s) != '\000') ; }




static inline
ats_bool_type
atspre_string_is_atend (
  ats_ptr_type s, ats_size_type i
) {
  return (*((char*)s + i) == '\000' ? 1 : 0) ;
}

static inline
ats_bool_type
atspre_string_isnot_atend (
  ats_ptr_type s, ats_size_type i
) {
  return (*((char*)s + i) != '\000' ? 1 : 0) ;
}



static inline
ats_ssize_type
atspre_string_index_of_char_from_left
  (const ats_ptr_type s, const ats_char_type c) {
  char *res ;
  res = strchr ((char*)s, c) ;
  if (res != (char*)0) return (res - (char*)s) ;
  return (-1) ;
}

static inline
ats_ssize_type
atspre_string_index_of_char_from_right
  (const ats_ptr_type s, const ats_char_type c) {
  char *res ;
  res = strrchr ((char*)s, c) ;
  if (res != (char*)0) return (res - (char*)s) ;
  return (-1) ;
}



static inline
ats_ssize_type
atspre_string_index_of_string
  (const ats_ptr_type s1, const ats_ptr_type s2) {
  char *res ;
  res = strstr ((char*)s1, (char*)s2) ;
  if (res != (char*)0) return (res - (char*)s1) ;
  return (-1) ;
}



extern ats_ptr_type
atspre_string_make_char (
  ats_size_type n, const ats_char_type c
) ;

static inline
ats_ptr_type
atspre_string_singleton
  (ats_char_type c) {
  return atspre_string_make_char (1, c) ;
}





static
ats_ptr_type atspre_stropt_none = (ats_ptr_type)0 ;

static inline
ats_bool_type
atspre_stropt_is_none
  (ats_ptr_type opt) { return (opt == (ats_ptr_type)0) ;
}

static inline
ats_bool_type
atspre_stropt_is_some
  (ats_ptr_type opt) { return (opt != (ats_ptr_type)0) ;
}

static inline
ats_void_type
atspre_fprint_stropt
(
  ats_ref_type out, ats_ptr_type opt
) {
  if (!opt)
    { fprintf ((FILE*)out, "None()") ; return ; }

  fprintf ((FILE*)out, "Some(%s)", (char*)opt) ;
  return ;
}





static inline
ats_void_type
atspre_stropt_gc_unnone (ats_ptr_type x) { return ; }





static inline
ats_void_type
atspre_strptr_free
  (ats_ptr_type base) { if (base) ats_free_gc (base) ; return ; }
# 34 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/array.cats" 1
# 41 "/home/hwwu/Programs/ats/prelude/CATS/array.cats"
extern
void *memcpy(void *dest, const void *src, size_t n) ;




static inline
ats_ptr_type
atspre_array0_of_array1 (ats_ptr_type A) { return A ; }

static inline
ats_ptr_type
atspre_array1_of_array0 (ats_ptr_type A) { return A ; }



static inline
ats_ptr_type
atspre_array_ptr_alloc_tsz (
ats_size_type n, ats_size_type tsz
) {
  return ats_malloc_gc(n * tsz) ;
}

static inline
ats_void_type
atspre_array_ptr_free
  (ats_ptr_type base) {
  ats_free_gc(base); return ;
}







extern
ats_void_type
atspre_array_ptr_initialize_elt_tsz (
  ats_ptr_type A
, ats_size_type asz
, ats_ptr_type ini
, ats_size_type tsz
) ;



static inline
ats_ptr_type
atspre_array_ptr_split_tsz (
  ats_ptr_type base
, ats_size_type offset
, ats_size_type tsz
) {
  return (ats_ptr_type)((char*)base + offset * tsz) ;
}



static inline
ats_ptr_type
atspre_array_ptr_takeout_tsz (
  ats_ptr_type base
, ats_size_type offset
, ats_size_type tsz
) {
  return (ats_ptr_type)((char*)base + offset * tsz) ;
}



static inline
ats_void_type
atspre_array_ptr_copy_tsz (
   ats_ptr_type p1
 , ats_ptr_type p2
 , ats_size_type asz
 , ats_size_type tsz
 ) {
  memcpy (p2, p1, asz * tsz) ; return ;
}

static inline
ats_void_type
atspre_array_ptr_move_tsz (
  ats_ptr_type p1
, ats_ptr_type p2
, ats_size_type asz
, ats_size_type tsz
) {
  memcpy (p2, p1, asz * tsz) ; return ;
}



static inline
ats_ptr_type
atspre_array2_ptr_takeout_tsz (
  ats_ptr_type base
, ats_size_type iofs
, ats_size_type ncol
, ats_size_type tsz
) {
  return (ats_ptr_type)((char*)base + (iofs * ncol) * tsz) ;
}
# 35 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/list.cats" 1
# 41 "/home/hwwu/Programs/ats/prelude/CATS/list.cats"
static inline
ats_ptr_type
atspre_list0_of_list1 (ats_ptr_type x) { return x ; }

static inline
ats_ptr_type
atspre_list0_of_list_vt (ats_ptr_type x) { return x ; }

static inline
ats_ptr_type
atspre_list1_of_list0 (ats_ptr_type x) { return x ; }
# 36 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/matrix.cats" 1
# 41 "/home/hwwu/Programs/ats/prelude/CATS/matrix.cats"
static inline
ats_ptr_type
atspre_matrix_ptr_takeout_row_tsz (
  ats_ptr_type base
, ats_size_type iofs
, ats_size_type ncol
, ats_size_type tsz
) {
  return (ats_ptr_type)((char*)base + (iofs * ncol) * tsz) ;
}



static inline
ats_ptr_type
atspre_matrix_ptr_takeout_elt_tsz (
  ats_ptr_type base
, ats_size_type iofs
, ats_size_type ncol
, ats_size_type jofs
, ats_size_type tsz
) {
  return (ats_ptr_type)((char*)base + (iofs * ncol + jofs) * tsz) ;
}
# 37 "redis_dats.c" 2
# 1 "/home/hwwu/Programs/ats/prelude/CATS/option.cats" 1
# 38 "redis_dats.c" 2



# 1 "/usr/local/include/hiredis/hiredis.h" 1 3
# 36 "/usr/local/include/hiredis/hiredis.h" 3
# 1 "/usr/include/i386-linux-gnu/sys/time.h" 1 3 4
# 26 "/usr/include/i386-linux-gnu/sys/time.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 27 "/usr/include/i386-linux-gnu/sys/time.h" 2 3 4

# 1 "/usr/include/i386-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/i386-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 29 "/usr/include/i386-linux-gnu/sys/time.h" 2 3 4

# 1 "/usr/include/i386-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/i386-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/i386-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/i386-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/i386-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/bits/sigset.h" 1 3 4
# 34 "/usr/include/i386-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/i386-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/i386-linux-gnu/bits/time.h" 1 3 4
# 46 "/usr/include/i386-linux-gnu/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 64 "/usr/include/i386-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/i386-linux-gnu/sys/select.h" 3 4

# 106 "/usr/include/i386-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/i386-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/i386-linux-gnu/sys/select.h" 3 4

# 31 "/usr/include/i386-linux-gnu/sys/time.h" 2 3 4








# 56 "/usr/include/i386-linux-gnu/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
# 72 "/usr/include/i386-linux-gnu/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int settimeofday (const struct timeval *__tv,
    const struct timezone *__tz)
     __attribute__ ((__nothrow__ , __leaf__));





extern int adjtime (const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__ , __leaf__));




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };






typedef int __itimer_which_t;




extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__ , __leaf__));




extern int setitimer (__itimer_which_t __which,
        const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__ , __leaf__));




extern int utimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int lutimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, const struct timeval __tvp[2]) __attribute__ ((__nothrow__ , __leaf__));
# 190 "/usr/include/i386-linux-gnu/sys/time.h" 3 4

# 37 "/usr/local/include/hiredis/hiredis.h" 2 3
# 96 "/usr/local/include/hiredis/hiredis.h" 3
typedef struct redisReply {
    int type;
    long long integer;
    int len;
    char *str;
    size_t elements;
    struct redisReply **element;
} redisReply;

typedef struct redisReadTask {
    int type;
    int elements;
    int idx;
    void *obj;
    struct redisReadTask *parent;
    void *privdata;
} redisReadTask;

typedef struct redisReplyObjectFunctions {
    void *(*createString)(const redisReadTask*, char*, size_t);
    void *(*createArray)(const redisReadTask*, int);
    void *(*createInteger)(const redisReadTask*, long long);
    void *(*createNil)(const redisReadTask*);
    void (*freeObject)(void*);
} redisReplyObjectFunctions;


typedef struct redisReader {
    int err;
    char errstr[128];

    char *buf;
    size_t pos;
    size_t len;
    size_t maxbuf;

    redisReadTask rstack[9];
    int ridx;
    void *reply;

    redisReplyObjectFunctions *fn;
    void *privdata;
} redisReader;


redisReader *redisReaderCreate(void);
void redisReaderFree(redisReader *r);
int redisReaderFeed(redisReader *r, const char *buf, size_t len);
int redisReaderGetReply(redisReader *r, void **reply);
# 156 "/usr/local/include/hiredis/hiredis.h" 3
void freeReplyObject(void *reply);


int redisvFormatCommand(char **target, const char *format, va_list ap);
int redisFormatCommand(char **target, const char *format, ...);
int redisFormatCommandArgv(char **target, int argc, const char **argv, const size_t *argvlen);


typedef struct redisContext {
    int err;
    char errstr[128];
    int fd;
    int flags;
    char *obuf;
    redisReader *reader;
} redisContext;

redisContext *redisConnect(const char *ip, int port);
redisContext *redisConnectWithTimeout(const char *ip, int port, struct timeval tv);
redisContext *redisConnectNonBlock(const char *ip, int port);
redisContext *redisConnectUnix(const char *path);
redisContext *redisConnectUnixWithTimeout(const char *path, struct timeval tv);
redisContext *redisConnectUnixNonBlock(const char *path);
int redisSetTimeout(redisContext *c, struct timeval tv);
void redisFree(redisContext *c);
int redisBufferRead(redisContext *c);
int redisBufferWrite(redisContext *c, int *done);





int redisGetReply(redisContext *c, void **reply);
int redisGetReplyFromReader(redisContext *c, void **reply);



int redisvAppendCommand(redisContext *c, const char *format, va_list ap);
int redisAppendCommand(redisContext *c, const char *format, ...);
int redisAppendCommandArgv(redisContext *c, int argc, const char **argv, const size_t *argvlen);






void *redisvCommand(redisContext *c, const char *format, va_list ap);
void *redisCommand(redisContext *c, const char *format, ...);
void *redisCommandArgv(redisContext *c, int argc, const char **argv, const size_t *argvlen);
# 42 "redis_dats.c" 2

# 1 "/home/hwwu/Programs/ats/libc/sys/CATS/time.cats" 1
# 45 "/home/hwwu/Programs/ats/libc/sys/CATS/time.cats"
typedef struct timeval ats_timeval_type ;
typedef struct timezone ats_timezone_type ;
# 65 "/home/hwwu/Programs/ats/libc/sys/CATS/time.cats"
typedef struct itimerval ats_itimerval_type ;
# 44 "redis_dats.c" 2

# 1 "/home/hwwu/Programs/ats/libc/CATS/fcntl.cats" 1
# 41 "/home/hwwu/Programs/ats/libc/CATS/fcntl.cats"
# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4







# 1 "/usr/include/i386-linux-gnu/bits/fcntl.h" 1 3 4
# 35 "/usr/include/i386-linux-gnu/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };
# 61 "/usr/include/i386-linux-gnu/bits/fcntl.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/fcntl-linux.h" 1 3 4
# 330 "/usr/include/i386-linux-gnu/bits/fcntl-linux.h" 3 4

# 404 "/usr/include/i386-linux-gnu/bits/fcntl-linux.h" 3 4

# 61 "/usr/include/i386-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4





typedef __mode_t mode_t;
# 67 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 68 "/usr/include/fcntl.h" 2 3 4
# 1 "/usr/include/i386-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/i386-linux-gnu/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;

    unsigned short int __pad1;


    __ino_t st_ino;




    __mode_t st_mode;
    __nlink_t st_nlink;




    __uid_t st_uid;
    __gid_t st_gid;



    __dev_t st_rdev;

    unsigned short int __pad2;


    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/i386-linux-gnu/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 109 "/usr/include/i386-linux-gnu/bits/stat.h" 3 4
    unsigned long int __unused4;
    unsigned long int __unused5;




  };
# 69 "/usr/include/fcntl.h" 2 3 4
# 137 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 146 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 170 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 192 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 238 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) __attribute__ ((__nothrow__ , __leaf__));
# 260 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
# 282 "/usr/include/fcntl.h" 3 4

# 42 "/home/hwwu/Programs/ats/libc/CATS/fcntl.cats" 2




# 1 "/home/hwwu/Programs/ats/libc/sys/CATS/types.cats" 1
# 41 "/home/hwwu/Programs/ats/libc/sys/CATS/types.cats"
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/i386-linux-gnu/bits/time.h" 1 3 4
# 42 "/usr/include/time.h" 2 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 131 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 186 "/usr/include/time.h" 3 4



extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));

# 223 "/usr/include/time.h" 3 4
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
# 236 "/usr/include/time.h" 3 4



extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));





extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) __attribute__ ((__nothrow__ , __leaf__));
# 319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 334 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));
# 430 "/usr/include/time.h" 3 4

# 42 "/home/hwwu/Programs/ats/libc/sys/CATS/types.cats" 2
# 1 "/usr/include/i386-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/i386-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;
# 75 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef __nlink_t nlink_t;
# 104 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef __id_t id_t;
# 115 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 146 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.7/include/stddef.h" 1 3 4
# 147 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 200 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 222 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/sys/sysmacros.h" 1 3 4
# 29 "/usr/include/i386-linux-gnu/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 63 "/usr/include/i386-linux-gnu/sys/sysmacros.h" 3 4

# 223 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/i386-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[36];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;
# 81 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 3 4
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;





typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;





    int __kind;





    unsigned int __nusers;
    __extension__ union
    {
      int __spins;
      __pthread_slist_t __list;
    };

  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{
# 185 "/usr/include/i386-linux-gnu/bits/pthreadtypes.h" 3 4
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;

  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/i386-linux-gnu/sys/types.h" 2 3 4



# 43 "/home/hwwu/Programs/ats/libc/sys/CATS/types.cats" 2





typedef blkcnt_t ats_blkcnt_type ;





typedef clock_t ats_clock_type ;

static inline
ats_lint_type atslib_lint_of_clock (clock_t t) { return t ; }
static inline
ats_double_type atslib_double_of_clock (clock_t t) { return t ; }
# 68 "/home/hwwu/Programs/ats/libc/sys/CATS/types.cats"
typedef dev_t ats_dev_type ;

static inline
ats_bool_type
atslib_eq_dev_dev
  (dev_t x1, dev_t x2) {
  return (x1 == x2 ? 1 : 0) ;
}



typedef fsblkcnt_t ats_fsblkcnt_type ;

typedef fsfilcnt_t ats_fsfilcnt_type ;

typedef gid_t ats_gid_type ;



typedef ino_t ats_ino_type ;

static inline
ats_bool_type
atslib_eq_ino_ino
  (ino_t x1, ino_t x2) {
  return (x1 == x2 ? 1 : 0) ;
}



typedef key_t ats_key_type ;



typedef mode_t ats_mode_type ;

static inline
ats_bool_type
atslib_eq_mode_mode
  (ats_mode_type m1, ats_mode_type m2) {
  return (m1 == m2 ? 1 : 0) ;
}

static inline
ats_bool_type
atslib_neq_mode_mode
  (ats_mode_type m1, ats_mode_type m2) {
  return (m1 != m2 ? 1 : 0) ;
}

static inline
ats_mode_type
atslib_lor_mode_mode
  (ats_mode_type m1, ats_mode_type m2) {
  return (m1 | m2) ;
}

static inline
ats_mode_type
atslib_land_mode_mode
  (ats_mode_type m1, ats_mode_type m2) {
  return (m1 & m2) ;
}



typedef nlink_t ats_nlink_type ;



typedef off_t ats_off_type ;
# 154 "/home/hwwu/Programs/ats/libc/sys/CATS/types.cats"
typedef pid_t ats_pid_type ;
# 179 "/home/hwwu/Programs/ats/libc/sys/CATS/types.cats"
typedef time_t ats_time_type ;

static inline
ats_lint_type atslib_lint_of_time (time_t t) { return t ; }
static inline
ats_double_type atslib_double_of_time (time_t t) { return t ; }







typedef useconds_t ats_useconds_type ;
typedef suseconds_t ats_suseconds_type ;




typedef uid_t ats_uid_type ;
# 47 "/home/hwwu/Programs/ats/libc/CATS/fcntl.cats" 2





extern ssize_t read (int fd, void *buf, size_t cnt) ;
extern ssize_t write (int fd, const void *buf, size_t cnt) ;





extern ats_void_type
ats_exit_errmsg(ats_int_type n, ats_ptr_type msg) ;



typedef ats_int_type ats_fcntlflag_type ;



static inline
ats_int_type
atslib_lnot_disjflag
  (ats_fcntlflag_type df) { return (~df) ; }


static inline
ats_int_type
atslib_lor_flag_disjflag (
  ats_fcntlflag_type f, ats_fcntlflag_type df
) {
  return (f | df) ;
}

static inline
ats_int_type
atslib_land_flag_conjflag (
  ats_fcntlflag_type f, ats_fcntlflag_type cf
) {
  return (f & cf) ;
}



static inline
ats_int_type
atslib_open_flag_err (
  ats_ptr_type path, ats_fcntlflag_type flag
) {
  return open((char*)path, flag) ;
}

static inline
ats_int_type
atslib_open_flag_mode_err (
  ats_ptr_type path
, ats_fcntlflag_type flag
, ats_mode_type mode
) {
  return open((char*)path, flag, mode) ;
}



static inline
ats_int_type
atslib_open_flag_exn
  (ats_ptr_type path, ats_fcntlflag_type flag)
{
  int fd = open((char*)path, flag) ;
  if (fd < 0) {
    perror ("open") ;
    ats_exit_errmsg(1, "exit(ATS): [open_flag] failed.\n") ;
  }
  return fd ;
}

static inline
ats_int_type
atslib_open_flag_mode_exn (
  ats_ptr_type path
, ats_fcntlflag_type flag
, ats_mode_type mode
) {
  int fd = open((char*)path, flag, mode) ;
  if (fd < 0) {
    perror ("open") ;
    ats_exit_errmsg(1, "exit(ATS): [open_flag_mode] failed.\n") ;
  }
  return fd ;
}



static inline
ats_int_type
atslib_close_err (ats_int_type fd) { return close(fd) ; }



static inline
ats_ssize_type
atslib_fildes_read_err
  (ats_int_type fd, ats_ptr_type buf, ats_size_type cnt) {
  return read(fd, buf, cnt) ;
}

static inline
ats_size_type
atslib_fildes_read_exn
  (ats_int_type fd, ats_ptr_type buf, ats_size_type cnt) {
  ats_ssize_type res ;
  res = read(fd, buf, cnt) ;
  if (res < 0) {
    perror("read") ; ats_exit_errmsg(1, "exit(ATS): [fildes_read] failed.\n") ;
  }
  return res ;
}



static inline
ats_ssize_type
atslib_fildes_write_err
  (ats_int_type fd, ats_ptr_type buf, ats_size_type cnt) {
  return write(fd, buf, cnt) ;
}

static inline
ats_size_type
atslib_fildes_write_exn
  (ats_int_type fd, ats_ptr_type buf, ats_size_type cnt) {
  ats_ssize_type res ;
  res = write(fd, buf, cnt) ;
  if (res < 0) {
    perror("write") ; ats_exit_errmsg(1, "exit(ATS): [fildes_write] failed.\n") ;
  }
  return res ;
}



static inline
ats_ssize_type
atslib_fildes_write_substring_err (
  ats_int_type fd, ats_ptr_type str, ats_size_type start, ats_size_type n
) {
  return write(fd, ((char*)str)+start, n) ;
}

static inline
ats_size_type
atslib_fildes_write_substring_exn (
  ats_int_type fd, ats_ptr_type str, ats_size_type start, ats_size_type n
) {
  ats_ssize_type res ;
  res = write(fd, ((char*)str)+start, n) ;
  if (res < 0) {
    perror("write") ; ats_exit_errmsg(1, "exit(ATS): [fildes_write] failed.\n") ;
  }
  return res ;
}



static inline
ats_fcntlflag_type
atslib_fcntl_getfl (ats_int_type fd) { return fcntl(fd, 3) ; }

static inline
ats_int_type
atslib_fcntl_setfl (
  ats_int_type fd, ats_fcntlflag_type flag
) {
  return fcntl(fd, 4, flag) ;
}
# 46 "redis_dats.c" 2





# 1 "/home/hwwu/Programs/ats/libc/CATS/stdarg.cats" 1
# 45 "/home/hwwu/Programs/ats/libc/CATS/stdarg.cats"
static inline
ats_bool_type
atslib_va_arg_bool (ats_ref_type ap)
  { return __builtin_va_arg(*(va_list*)ap,ats_int_type) ; }


static inline
ats_char_type
atslib_va_arg_char (ats_ref_type ap)
  { return __builtin_va_arg(*(va_list*)ap,ats_int_type) ; }


static inline
ats_int_type
atslib_va_arg_int (ats_ref_type ap)
  { return __builtin_va_arg(*(va_list*)ap,ats_int_type) ; }


static inline
ats_ptr_type
atslib_va_arg_ptr (ats_ref_type ap)
  { return __builtin_va_arg(*(va_list*)ap,ats_ptr_type) ; }




static inline
ats_void_type
atslib_va_end (ats_ref_type ap) { __builtin_va_end(*(va_list*)ap) ; return ; }



static inline
ats_void_type
atslib_va_copy (ats_ref_type dst, va_list src) {
  __builtin_va_copy(*(va_list*)dst,src) ; return ;
}
# 52 "redis_dats.c" 2



char *redisReplyGetString (redisReply *reply) {
 return reply->str;
}

long long redisReplyGetInteger (redisReply *reply) {
 return reply->integer;
}



int pointerIsNull (void *ptr) {
 return ptr == ((void *)0);
}

int pointerIsNotNull (void *ptr) {
 return ptr != ((void *)0);
}





redisReply *redisCommandHandler (redisContext *ctx, char *fmt, ...) {
 va_list args;
 __builtin_va_start(args,fmt);
 redisReply *reply = redisvCommand (ctx, fmt, args);
 __builtin_va_end(args);
 return reply;
}

int redisAppendCommandHandler (redisContext *ctx, char *fmt, ...) {
 va_list args;
 __builtin_va_start(args,fmt);
 int ret = redisvAppendCommand (ctx, fmt, args);
 __builtin_va_end(args);
 return ret;
}

int redisFormatCommandHandler (void **target, char *fmt, ...) {
 va_list args;
 __builtin_va_start(args,fmt);
 int ret = redisvFormatCommand ((char **)target, fmt, args);
 __builtin_va_end(args);
 return ret;
}






extern ats_void_type atspre_assert (ats_bool_type) ;
extern ats_void_type atspre_printf_exn (ats_ptr_type, ...) ;
# 128 "redis_dats.c"

ats_void_type
mainats () {


ats_ptr_type __attribute__ ((unused)) tmp1 ;

ats_bool_type __attribute__ ((unused)) tmp3 ;
ats_ptr_type __attribute__ ((unused)) tmp4 ;
ats_ptr_type __attribute__ ((unused)) tmp5 ;

ats_ptr_type __attribute__ ((unused)) tmp7 ;

ats_ptr_type __attribute__ ((unused)) tmp9 ;
ats_int_type __attribute__ ((unused)) tmp10 ;

ats_ptr_type __attribute__ ((unused)) tmp12 ;

ats_bool_type __attribute__ ((unused)) tmp14 ;
ats_ptr_type __attribute__ ((unused)) tmp15 ;


__ats_lab_mainats:
tmp1 = redisConnect (((ats_ptr_type)"127.0.0.1"), 6379) ;
tmp3 = pointerIsNotNull (tmp1) ;
             atspre_assert (tmp3) ;
tmp4 = redisCommandHandler (tmp1, ((ats_ptr_type)"ping")) ;
tmp5 = redisReplyGetString (tmp4) ;
             freeReplyObject (tmp4) ;
tmp7 = redisCommandHandler (tmp1, ((ats_ptr_type)"SET %s %s"), ((ats_ptr_type)"bar"), ((ats_ptr_type)"hello")) ;
             freeReplyObject (tmp7) ;

tmp10 = redisFormatCommandHandler ((&tmp9), ((ats_ptr_type)"SET %s %s"), ((ats_ptr_type)"bar"), ((ats_ptr_type)"hello")) ;
              atspre_printf_exn (((ats_ptr_type)"TARGET: %s\nEND\n"), tmp9) ;
tmp12 = redisReaderCreate () ;
tmp14 = pointerIsNotNull (tmp12) ;
              atspre_assert (tmp14) ;

              redisReaderFree (tmp12) ;
             redisFree (tmp1) ;
return ;
}



extern ats_void_type _2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2esats__staload (void) ;
extern ats_void_type ATS_2d0_2e2_2e10_2libc_2SATS_2stdarg_2esats__staload (void) ;

ats_void_type
_2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2edats__staload () {
static int _2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2edats__staload_flag = 0 ;
if (_2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2edats__staload_flag) return ;
_2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2edats__staload_flag = 1 ;

_2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2esats__staload () ;
ATS_2d0_2e2_2e10_2libc_2SATS_2stdarg_2esats__staload () ;

return ;
}






ats_void_type
_2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2edats__dynload () {

_2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2edats__staload () ;
# 206 "redis_dats.c"
return ;
}

int main (int argc, char *argv[]) {
ats_gc_init() ;
mainats_prelude() ;
_2home_2hwwu_2Workspace_2ats_2dredis_2helloworld_2redis_2edats__dynload() ;
mainats((ats_int_type)argc, (ats_ptr_type)argv) ;
return (0) ;
}
