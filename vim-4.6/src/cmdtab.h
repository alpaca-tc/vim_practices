/* vi:ts=4:sw=4
 *
 * VIM - Vi IMproved
 *
 * Code Contributions By:	Bram Moolenaar			mool@plex.nl
 *							Tim Thompson			twitch!tjt
 *							Tony Andrews			onecom!wldrdg!tony 
 *							G. R. (Fred) Walter		watmath!watcgl!grwalter 
 */

/*
 * THIS FILE IS AUTOMATICALLY PRODUCED - DO NOT EDIT
 */

#define RANGE	   0x01			/* allow a linespecs */
#define BANG	   0x02			/* allow a ! after the command name */
#define EXTRA	   0x04			/* allow extra args after command name */
#define XFILE	   0x08			/* expand wildcards in extra part */
#define NOSPC	   0x10			/* no spaces allowed in the extra part */
#define	DFLALL	   0x20			/* default file range is 1,$ */
#define NODFL	   0x40			/* do not default to the current file name */
#define NEEDARG	   0x80			/* argument required */
#define TRLBAR	  0x100			/* check for trailing vertical bar */
#define REGSTR	  0x200			/* allow "x for register designation */
#define COUNT	  0x400			/* allow count in argument, after command */
#define NOTRLCOM  0x800			/* no trailing comment allowed */
#define ZEROR	 0x1000			/* zero line number allowed */
#define USECTRLV 0x2000			/* do not remove CTRL-V from argument */
#define NOTADR	 0x4000			/* number before command is not an address */
#define EDITCMD	 0x8000			/* has "+command" argument */
#define BUFNAME 0x10000			/* accepts buffer name */
#define FILES	(XFILE + EXTRA)	/* multiple extra files allowed */
#define WORD1	(EXTRA + NOSPC)	/* one extra word allowed */
#define FILE1	(FILES + NOSPC)	/* 1 file allowed, defaults to current file */
#define NAMEDF	(FILE1 + NODFL)	/* 1 file allowed, defaults to "" */
#define NAMEDFS	(FILES + NODFL)	/* multiple files allowed, default is "" */

/*
 * This array maps ex command names to command codes. The order in which
 * command names are listed below is significant -- ambiguous abbreviations
 * are always resolved to be the first possible match (e.g. "r" is taken
 * to mean "read", not "rewind", because "read" comes before "rewind").
 * Not supported commands are included to avoid ambiguities.
 */
static struct
{
	char_u	*cmd_name;	/* name of the command */
	long_u	 cmd_argt;	/* command line arguments permitted/needed/used */
} cmdnames[] =
{
	{(char_u *)"append",		BANG+RANGE+TRLBAR},			/* not supported */
#define CMD_append 0
	{(char_u *)"all",			RANGE+NOTADR+COUNT+TRLBAR},
#define CMD_all 1
	{(char_u *)"abbreviate",	EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_abbreviate 2
	{(char_u *)"abclear",		TRLBAR},
#define CMD_abclear 3
	{(char_u *)"args",			BANG+NAMEDFS+EDITCMD+TRLBAR},
#define CMD_args 4
	{(char_u *)"argument",		BANG+RANGE+NOTADR+COUNT+EXTRA+EDITCMD+TRLBAR},
#define CMD_argument 5
	{(char_u *)"ascii",			TRLBAR},
#define CMD_ascii 6
	{(char_u *)"autocmd",		BANG+EXTRA+NOTRLCOM+USECTRLV},
#define CMD_autocmd 7
	{(char_u *)"buffer",		RANGE+NOTADR+BUFNAME+COUNT+EXTRA+TRLBAR},
#define CMD_buffer 8
	{(char_u *)"ball",			RANGE+NOTADR+COUNT+TRLBAR},
#define CMD_ball 9
	{(char_u *)"buffers",		TRLBAR},
#define CMD_buffers 10
	{(char_u *)"bdelete",		BANG+RANGE+BUFNAME+NOTADR+COUNT+EXTRA+TRLBAR},
#define CMD_bdelete 11
	{(char_u *)"bunload",		BANG+RANGE+BUFNAME+NOTADR+COUNT+EXTRA+TRLBAR},
#define CMD_bunload 12
	{(char_u *)"bmodified",		RANGE+NOTADR+COUNT+TRLBAR},
#define CMD_bmodified 13
	{(char_u *)"bnext",			RANGE+NOTADR+COUNT+TRLBAR},
#define CMD_bnext 14
	{(char_u *)"bNext",			RANGE+NOTADR+COUNT+TRLBAR},
#define CMD_bNext 15
	{(char_u *)"bprevious",		RANGE+NOTADR+COUNT+TRLBAR},
#define CMD_bprevious 16
	{(char_u *)"brewind",		RANGE+TRLBAR},
#define CMD_brewind 17
	{(char_u *)"blast",			RANGE+TRLBAR},
#define CMD_blast 18
	{(char_u *)"change",		BANG+RANGE+COUNT+TRLBAR},	/* not supported */
#define CMD_change 19
	{(char_u *)"cabbrev",		EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_cabbrev 20
	{(char_u *)"cabclear",		TRLBAR},
#define CMD_cabclear 21
	{(char_u *)"cc",			RANGE+NOTADR+COUNT+TRLBAR+BANG},
#define CMD_cc 22
	{(char_u *)"cd",			NAMEDF+TRLBAR},
#define CMD_cd 23
	{(char_u *)"center",		TRLBAR+RANGE+EXTRA},
#define CMD_center 24
	{(char_u *)"cfile",			TRLBAR+FILE1+BANG},
#define CMD_cfile 25
	{(char_u *)"chdir",			NAMEDF+TRLBAR},
#define CMD_chdir 26
	{(char_u *)"checkpath",		TRLBAR+BANG},
#define CMD_checkpath 27
	{(char_u *)"clist",			TRLBAR+BANG},
#define CMD_clist 28
	{(char_u *)"close",			BANG+TRLBAR},
#define CMD_close 29
	{(char_u *)"cmap",			EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_cmap 30
	{(char_u *)"cmapclear",		TRLBAR},
#define CMD_cmapclear 31
	{(char_u *)"cmenu",			EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_cmenu 32
	{(char_u *)"cnext",			RANGE+NOTADR+COUNT+TRLBAR+BANG},
#define CMD_cnext 33
	{(char_u *)"cNext",			RANGE+NOTADR+COUNT+TRLBAR+BANG},
#define CMD_cNext 34
	{(char_u *)"cnoremap",		EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_cnoremap 35
	{(char_u *)"cnoremenu",		EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_cnoremenu 36
	{(char_u *)"cnoreabbrev",	EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_cnoreabbrev 37
	{(char_u *)"copy",			RANGE+EXTRA+TRLBAR},
#define CMD_copy 38
	{(char_u *)"cprevious",		RANGE+NOTADR+COUNT+TRLBAR+BANG},
#define CMD_cprevious 39
	{(char_u *)"cquit",			TRLBAR+BANG},
#define CMD_cquit 40
	{(char_u *)"cunmap",		EXTRA+TRLBAR+USECTRLV},
#define CMD_cunmap 41
	{(char_u *)"cunmenu",		EXTRA+TRLBAR+USECTRLV},
#define CMD_cunmenu 42
	{(char_u *)"cunabbrev",		EXTRA+TRLBAR+USECTRLV},
#define CMD_cunabbrev 43
	{(char_u *)"delete",		RANGE+REGSTR+COUNT+TRLBAR},
#define CMD_delete 44
	{(char_u *)"display",		EXTRA+NOTRLCOM+TRLBAR},
#define CMD_display 45
	{(char_u *)"digraphs",		EXTRA+TRLBAR},
#define CMD_digraphs 46
	{(char_u *)"djump",			BANG+RANGE+DFLALL+EXTRA},
#define CMD_djump 47
	{(char_u *)"dlist",			BANG+RANGE+DFLALL+EXTRA},
#define CMD_dlist 48
	{(char_u *)"doautocmd",		EXTRA+TRLBAR},
#define CMD_doautocmd 49
	{(char_u *)"dsearch",		BANG+RANGE+DFLALL+EXTRA},
#define CMD_dsearch 50
	{(char_u *)"dsplit",		BANG+RANGE+DFLALL+EXTRA+TRLBAR},
#define CMD_dsplit 51
	{(char_u *)"edit",			BANG+FILE1+EDITCMD+TRLBAR},
#define CMD_edit 52
	{(char_u *)"endif",			RANGE+BANG+EXTRA},
#define CMD_endif 53
	{(char_u *)"ex",			BANG+FILE1+EDITCMD+TRLBAR},
#define CMD_ex 54
	{(char_u *)"exit",			RANGE+BANG+FILE1+DFLALL+TRLBAR},
#define CMD_exit 55
	{(char_u *)"file",			BANG+FILE1+TRLBAR},
#define CMD_file 56
	{(char_u *)"files",			TRLBAR},
#define CMD_files 57
	{(char_u *)"fixdel",		TRLBAR},
#define CMD_fixdel 58
	{(char_u *)"global",		RANGE+BANG+EXTRA+DFLALL},
#define CMD_global 59
	{(char_u *)"gui",			BANG+NAMEDFS+EDITCMD+TRLBAR},
#define CMD_gui 60
	{(char_u *)"gvim",			BANG+NAMEDFS+EDITCMD+TRLBAR},
#define CMD_gvim 61
	{(char_u *)"help",			EXTRA+NOTRLCOM},
#define CMD_help 62
	{(char_u *)"insert",		BANG+RANGE+TRLBAR},			/* not supported */
#define CMD_insert 63
	{(char_u *)"iabbrev",		EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_iabbrev 64
	{(char_u *)"iabclear",		TRLBAR},
#define CMD_iabclear 65
	{(char_u *)"if",			RANGE+BANG+EXTRA},
#define CMD_if 66
	{(char_u *)"ijump",			BANG+RANGE+DFLALL+EXTRA},
#define CMD_ijump 67
	{(char_u *)"ilist",			BANG+RANGE+DFLALL+EXTRA},
#define CMD_ilist 68
	{(char_u *)"imap",			EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_imap 69
	{(char_u *)"imapclear",		TRLBAR},
#define CMD_imapclear 70
	{(char_u *)"imenu",			EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_imenu 71
	{(char_u *)"inoremap",		EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_inoremap 72
	{(char_u *)"inoremenu",		EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_inoremenu 73
	{(char_u *)"inoreabbrev",	EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_inoreabbrev 74
	{(char_u *)"isearch",		BANG+RANGE+DFLALL+EXTRA},
#define CMD_isearch 75
	{(char_u *)"isplit",		BANG+RANGE+DFLALL+EXTRA+TRLBAR},
#define CMD_isplit 76
	{(char_u *)"iunmap",		EXTRA+TRLBAR+USECTRLV},
#define CMD_iunmap 77
	{(char_u *)"iunmenu",		EXTRA+TRLBAR+USECTRLV},
#define CMD_iunmenu 78
	{(char_u *)"iunabbrev",		EXTRA+TRLBAR+USECTRLV},
#define CMD_iunabbrev 79
	{(char_u *)"join",			BANG+RANGE+COUNT+TRLBAR},
#define CMD_join 80
	{(char_u *)"jumps",			TRLBAR},
#define CMD_jumps 81
	{(char_u *)"k",				RANGE+WORD1+TRLBAR},
#define CMD_k 82
	{(char_u *)"list",			RANGE+COUNT+TRLBAR},
#define CMD_list 83
	{(char_u *)"last",			EXTRA+BANG+EDITCMD+TRLBAR},
#define CMD_last 84
	{(char_u *)"left",			TRLBAR+RANGE+EXTRA},
#define CMD_left 85
	{(char_u *)"ls",			TRLBAR},
#define CMD_ls 86
	{(char_u *)"move",			RANGE+EXTRA+TRLBAR},
#define CMD_move 87
	{(char_u *)"mark",			RANGE+WORD1+TRLBAR},
#define CMD_mark 88
	{(char_u *)"marks",			EXTRA+TRLBAR},
#define CMD_marks 89
	{(char_u *)"map",			BANG+EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_map 90
	{(char_u *)"mapclear",		BANG+TRLBAR},
#define CMD_mapclear 91
	{(char_u *)"make",			NEEDARG+EXTRA+TRLBAR+XFILE},
#define CMD_make 92
	{(char_u *)"menu",			BANG+EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_menu 93
	{(char_u *)"mkexrc",		BANG+FILE1+TRLBAR},
#define CMD_mkexrc 94
	{(char_u *)"mkvimrc",		BANG+FILE1+TRLBAR},
#define CMD_mkvimrc 95
	{(char_u *)"mfstat",		TRLBAR},					/* for debugging */
#define CMD_mfstat 96
	{(char_u *)"mode",			WORD1+TRLBAR},
#define CMD_mode 97
	{(char_u *)"next",			RANGE+NOTADR+BANG+NAMEDFS+EDITCMD+TRLBAR},
#define CMD_next 98
	{(char_u *)"new",			BANG+FILE1+RANGE+NOTADR+EDITCMD+TRLBAR},
#define CMD_new 99
	{(char_u *)"nmap",			EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_nmap 100
	{(char_u *)"nmapclear",		TRLBAR},
#define CMD_nmapclear 101
	{(char_u *)"nmenu",			EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_nmenu 102
	{(char_u *)"nnoremap",		EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_nnoremap 103
	{(char_u *)"nnoremenu",		EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_nnoremenu 104
	{(char_u *)"number",		RANGE+COUNT+TRLBAR},
#define CMD_number 105
	{(char_u *)"#",				RANGE+COUNT+TRLBAR},
#define CMD_pound 106
	{(char_u *)"noremap",		BANG+EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_noremap 107
	{(char_u *)"noremenu",		BANG+EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_noremenu 108
	{(char_u *)"noreabbrev",	EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_noreabbrev 109
	{(char_u *)"normal",		BANG+EXTRA+NEEDARG+NOTRLCOM+USECTRLV},
#define CMD_normal 110
	{(char_u *)"nunmap",		EXTRA+TRLBAR+USECTRLV},
#define CMD_nunmap 111
	{(char_u *)"nunmenu",		EXTRA+TRLBAR+USECTRLV},
#define CMD_nunmenu 112
	{(char_u *)"Next",			EXTRA+RANGE+NOTADR+COUNT+BANG+EDITCMD+TRLBAR},
#define CMD_Next 113
	{(char_u *)"open",			TRLBAR},					/* not supported */
#define CMD_open 114
	{(char_u *)"only",			BANG+TRLBAR},
#define CMD_only 115
	{(char_u *)"print",			RANGE+COUNT+TRLBAR},
#define CMD_print 116
	{(char_u *)"pop",			RANGE+NOTADR+COUNT+TRLBAR+ZEROR},
#define CMD_pop 117
	{(char_u *)"put",			RANGE+BANG+REGSTR+TRLBAR+ZEROR},
#define CMD_put 118
	{(char_u *)"preserve",		TRLBAR},
#define CMD_preserve 119
	{(char_u *)"previous",		EXTRA+RANGE+NOTADR+COUNT+BANG+EDITCMD+TRLBAR},
#define CMD_previous 120
	{(char_u *)"pwd",			TRLBAR},
#define CMD_pwd 121
	{(char_u *)"quit",			BANG+TRLBAR},
#define CMD_quit 122
	{(char_u *)"qall",			BANG+TRLBAR},
#define CMD_qall 123
	{(char_u *)"read",			BANG+RANGE+NAMEDF+TRLBAR+ZEROR},
#define CMD_read 124
	{(char_u *)"rewind",		EXTRA+BANG+EDITCMD+TRLBAR},
#define CMD_rewind 125
	{(char_u *)"recover",		BANG+FILE1+TRLBAR},
#define CMD_recover 126
	{(char_u *)"redo",			TRLBAR},
#define CMD_redo 127
	{(char_u *)"registers",		EXTRA+NOTRLCOM+TRLBAR},
#define CMD_registers 128
	{(char_u *)"resize",		TRLBAR+WORD1},
#define CMD_resize 129
	{(char_u *)"retab",			TRLBAR+RANGE+DFLALL+BANG+WORD1},
#define CMD_retab 130
	{(char_u *)"right",			TRLBAR+RANGE+EXTRA},
#define CMD_right 131
	{(char_u *)"rviminfo",		BANG+FILE1+TRLBAR},			/* only when VIMINFO defined */
#define CMD_rviminfo 132
	{(char_u *)"substitute",	RANGE+EXTRA},
#define CMD_substitute 133
	{(char_u *)"sargument",		BANG+RANGE+NOTADR+COUNT+EXTRA+EDITCMD+TRLBAR},
#define CMD_sargument 134
	{(char_u *)"sall",			RANGE+NOTADR+COUNT+TRLBAR},
#define CMD_sall 135
	{(char_u *)"sbuffer",		RANGE+NOTADR+BUFNAME+COUNT+EXTRA+TRLBAR},
#define CMD_sbuffer 136
	{(char_u *)"sball",			RANGE+NOTADR+COUNT+TRLBAR},
#define CMD_sball 137
	{(char_u *)"sbmodified",	RANGE+NOTADR+COUNT+TRLBAR},
#define CMD_sbmodified 138
	{(char_u *)"sbnext",		RANGE+NOTADR+COUNT+TRLBAR},
#define CMD_sbnext 139
	{(char_u *)"sbNext",		RANGE+NOTADR+COUNT+TRLBAR},
#define CMD_sbNext 140
	{(char_u *)"sbprevious",	RANGE+NOTADR+COUNT+TRLBAR},
#define CMD_sbprevious 141
	{(char_u *)"sbrewind",		TRLBAR},
#define CMD_sbrewind 142
	{(char_u *)"sblast",		TRLBAR},
#define CMD_sblast 143
	{(char_u *)"suspend",		TRLBAR+BANG},
#define CMD_suspend 144
	{(char_u *)"set",			EXTRA+TRLBAR},
#define CMD_set 145
	{(char_u *)"shell",			TRLBAR},
#define CMD_shell 146
	{(char_u *)"sleep",			RANGE+COUNT+NOTADR+TRLBAR},
#define CMD_sleep 147
	{(char_u *)"source",		BANG+NAMEDF+NEEDARG+TRLBAR},
#define CMD_source 148
	{(char_u *)"split",			BANG+FILE1+RANGE+NOTADR+EDITCMD+TRLBAR},
#define CMD_split 149
	{(char_u *)"snext",			RANGE+NOTADR+BANG+NAMEDFS+EDITCMD+TRLBAR},
#define CMD_snext 150
	{(char_u *)"sNext",			EXTRA+RANGE+NOTADR+COUNT+BANG+EDITCMD+TRLBAR},
#define CMD_sNext 151
	{(char_u *)"sprevious",		EXTRA+RANGE+NOTADR+COUNT+BANG+EDITCMD+TRLBAR},
#define CMD_sprevious 152
	{(char_u *)"srewind",		EXTRA+BANG+EDITCMD+TRLBAR},
#define CMD_srewind 153
	{(char_u *)"slast",			EXTRA+BANG+EDITCMD+TRLBAR},
#define CMD_slast 154
	{(char_u *)"stop",			TRLBAR+BANG},
#define CMD_stop 155
	{(char_u *)"stag",			RANGE+NOTADR+BANG+WORD1+TRLBAR+ZEROR},
#define CMD_stag 156
	{(char_u *)"sunhide",		RANGE+NOTADR+COUNT+TRLBAR},
#define CMD_sunhide 157
	{(char_u *)"sview",			NEEDARG+RANGE+BANG+FILE1+EDITCMD+TRLBAR},
#define CMD_sview 158
	{(char_u *)"swapname",		TRLBAR},
#define CMD_swapname 159
	{(char_u *)"t",				RANGE+EXTRA+TRLBAR},
#define CMD_t 160
	{(char_u *)"tag",			RANGE+NOTADR+BANG+WORD1+TRLBAR+ZEROR},
#define CMD_tag 161
	{(char_u *)"tags",			TRLBAR},
#define CMD_tags 162
	{(char_u *)"undo",			TRLBAR},
#define CMD_undo 163
	{(char_u *)"unabbreviate",	EXTRA+TRLBAR+USECTRLV},
#define CMD_unabbreviate 164
	{(char_u *)"unhide",		RANGE+NOTADR+COUNT+TRLBAR},
#define CMD_unhide 165
	{(char_u *)"unmap",			BANG+EXTRA+TRLBAR+USECTRLV},
#define CMD_unmap 166
	{(char_u *)"unmenu",		BANG+EXTRA+TRLBAR+USECTRLV},
#define CMD_unmenu 167
	{(char_u *)"vglobal",		RANGE+EXTRA+DFLALL},
#define CMD_vglobal 168
	{(char_u *)"version",		EXTRA+TRLBAR},
#define CMD_version 169
	{(char_u *)"visual",		RANGE+BANG+FILE1+EDITCMD+TRLBAR},
#define CMD_visual 170
	{(char_u *)"view",			RANGE+BANG+FILE1+EDITCMD+TRLBAR},
#define CMD_view 171
	{(char_u *)"vmap",			EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_vmap 172
	{(char_u *)"vmapclear",		TRLBAR},
#define CMD_vmapclear 173
	{(char_u *)"vmenu",			EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_vmenu 174
	{(char_u *)"vnoremap",		EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_vnoremap 175
	{(char_u *)"vnoremenu",		EXTRA+TRLBAR+NOTRLCOM+USECTRLV},
#define CMD_vnoremenu 176
	{(char_u *)"vunmap",		EXTRA+TRLBAR+USECTRLV},
#define CMD_vunmap 177
	{(char_u *)"vunmenu",		EXTRA+TRLBAR+USECTRLV},
#define CMD_vunmenu 178
	{(char_u *)"write",			RANGE+BANG+FILE1+DFLALL+TRLBAR},
#define CMD_write 179
	{(char_u *)"wnext",			RANGE+NOTADR+BANG+FILE1+TRLBAR},
#define CMD_wnext 180
	{(char_u *)"wNext",			RANGE+NOTADR+BANG+FILE1+TRLBAR},
#define CMD_wNext 181
	{(char_u *)"wprevious",		RANGE+NOTADR+BANG+FILE1+TRLBAR},
#define CMD_wprevious 182
	{(char_u *)"winsize",		EXTRA+NEEDARG+TRLBAR},
#define CMD_winsize 183
	{(char_u *)"wq",			RANGE+BANG+FILE1+DFLALL+TRLBAR},
#define CMD_wq 184
	{(char_u *)"wall",			BANG+TRLBAR},
#define CMD_wall 185
	{(char_u *)"wqall",			BANG+FILE1+DFLALL+TRLBAR},
#define CMD_wqall 186
	{(char_u *)"wviminfo",		BANG+FILE1+TRLBAR},			/* only when VIMINFO defined */
#define CMD_wviminfo 187
	{(char_u *)"xit",			RANGE+BANG+FILE1+DFLALL+TRLBAR},
#define CMD_xit 188
	{(char_u *)"xall",			BANG+TRLBAR},
#define CMD_xall 189
	{(char_u *)"yank",			RANGE+REGSTR+COUNT+TRLBAR},
#define CMD_yank 190
	{(char_u *)"z",				RANGE+COUNT+TRLBAR},		/* not supported */
#define CMD_z 191
	{(char_u *)"@",				RANGE+EXTRA+TRLBAR},
#define CMD_at 192
	{(char_u *)"!",				RANGE+BANG+NAMEDFS},
#define CMD_bang 193
	{(char_u *)"<",				RANGE+COUNT+TRLBAR},
#define CMD_lshift 194
	{(char_u *)">",				RANGE+COUNT+TRLBAR},
#define CMD_rshift 195
	{(char_u *)"=",				RANGE+TRLBAR},
#define CMD_equal 196
	{(char_u *)"&",				RANGE+EXTRA},
#define CMD_and 197
	{(char_u *)"~",				RANGE+EXTRA}
#define CMD_tilde 198
#define CMD_SIZE 199

};
