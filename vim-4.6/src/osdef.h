/*
* osdef.h is automagically created from osdef?.h.in by osdef.sh -- DO NOT EDIT
*/
/* autoconf cannot fiddle out declarations. Use our homebrewn tools. (jw) */
/* 
 * Declarations that may cause conflicts belong here so that osdef.sh
 * can clean out the forest. Everything else belongs in unix.h
 *
 * How this works:
 * - This file contains all unix prototypes that Vim might need.
 * - The shell script osdef.sh is executed at compile time to remove all the
 *   prototypes that are in an include file. This results in osdef.h.
 * - osdef.h is included in vim.h.
 *
 * sed cannot always handle so many commands, this is file 1 of 2
 */

#ifndef ferror	/* let me say it again: "macros should never have prototypes" */
#endif
#if defined(sun) || defined(_SEQUENT_)	
/* used inside of stdio macros getc(), puts(), putchar()... */
extern int   _flsbuf __ARGS((int, FILE *));
extern int   _filbuf __ARGS((FILE *));
#endif

#if !defined(HAVE_SELECT)
struct pollfd;			/* for poll __ARGS */
extern int poll __ARGS((struct pollfd *, long, int));
#endif

#ifdef HAVE_MEMSET
#endif
#ifdef HAVE_STRCSPN
#endif
#ifdef USEBCOPY
#else
# ifdef USEMEMCPY
# else
#  ifdef USEMEMMOVE
#  endif
# endif
#endif
/* used inside of FDZERO macro: */
#ifdef HAVE_SETSID
#endif
#ifdef HAVE_SETPGID
#endif
#ifdef HAVE_STRTOL
#endif

#ifndef USE_SYSTEM
#endif

extern int   toupper __ARGS((int));
extern int   tolower __ARGS((int));

#ifdef HAVE_SIGSET
#endif


#if defined(HAVE_GETCWD) && !defined(sun)
#else
#endif





#ifdef HAVE_TERMIOS_H
#endif

#ifdef HAVE_SYS_STATFS_H
#endif

#ifdef HAVE_GETTIMEOFDAY
#endif

#ifdef HAVE_GETPWNAM
#endif
