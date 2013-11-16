/* vi:set ts=4 sw=4:
 *
 * VIM - Vi IMproved		by Bram Moolenaar
 *
 * Do ":help uganda"  in Vim to read copying and usage conditions.
 * Do ":help credits" in Vim to see a list of people who contributed.
 */

/*
 * Definitions of various common control characters
 */

#define NUL 					'\000'
#define TAB 					'\011'
#define NL						'\012'
#define NL_STR					(char_u *)"\012"
#define CR						'\015'
#define ESC 					'\033'
#define ESC_STR 				(char_u *)"\033"
#define DEL 					0x7f
#define CSI 					0x9b

#define Ctrl(x) ((x) & 0x1f)
#define Meta(x) ((x) | 0x80)

/*
 * Character that separates dir names in a path.
 * For MS-DOS, WIN32 and OS/2 we use the backslash.  A slash mostly works
 * fine, but there are places where it doesn't (e.g. in a command name).
 */
#if defined(BACKSLASH_IN_FILENAME)
# define PATHSEP '\\'
# define PATHSEPSTR "\\"
#else
# define PATHSEP '/'
# define PATHSEPSTR "/"
#endif