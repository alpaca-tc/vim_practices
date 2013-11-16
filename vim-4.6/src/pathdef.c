/* pathdef.c -- DO NOT EDIT! */
/* This file is automatically created by Makefile
 * Change the Makefile only. */
#include "vim.h"
#ifndef SYS_VIMRC_FILE
char_u *sys_vimrc_fname = (char_u *)"/usr/local/share/vim/vimrc";
#else
char_u *sys_vimrc_fname = (char_u *)SYS_VIMRC_FILE;
#endif
#ifndef SYS_GVIMRC_FILE
char_u *sys_gvimrc_fname = (char_u *)"/usr/local/share/vim/gvimrc";
#else
char_u *sys_gvimrc_fname = (char_u *)SYS_GVIMRC_FILE;
#endif
#ifndef VIM_HLP
char_u *help_fname = (char_u *)"/usr/local/share/vim/vim_help.txt";
#else
char_u *help_fname = (char_u *)VIM_HLP;
#endif
char_u *all_cflags = (char_u *)"gcc -c -I. -DHAVE_CONFIG_H    -g -O -Wall -Wshadow -DX_DISPLAY_MISSING ";
