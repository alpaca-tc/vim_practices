/* term.c */
int set_termname __PARMS((char_u *term));
void getlinecol __PARMS((void));
int add_termcap_entry __PARMS((char_u *name, int force));
void termcapinit __PARMS((char_u *term));
void flushbuf __PARMS((void));
void trash_output_buf __PARMS((void));
void outchar __PARMS((unsigned c));
void outstrn __PARMS((char_u *s));
void outstr __PARMS((register char_u *s));
void windgoto __PARMS((int row, int col));
void setcursor __PARMS((void));
void ttest __PARMS((int pairs));
void add_long_to_buf __PARMS((long_u val, char_u *dst));
int get_long_from_buf __PARMS((char_u *buf, long_u *val));
void outnum __PARMS((register long n));
void check_winsize __PARMS((void));
void set_winsize __PARMS((int width, int height, int mustset));
void settmode __PARMS((int raw));
void starttermcap __PARMS((void));
void stoptermcap __PARMS((void));
void setmouse __PARMS((void));
int mouse_has __PARMS((int c));
void scroll_start __PARMS((void));
void cursor_on __PARMS((void));
void cursor_off __PARMS((void));
void scroll_region_set __PARMS((WIN *wp, int off));
void scroll_region_reset __PARMS((void));
void clear_termcodes __PARMS((void));
void add_termcode __PARMS((char_u *name, char_u *string));
char_u *find_termcode __PARMS((char_u *name));
char_u *get_termcode __PARMS((int i));
void del_termcode __PARMS((char_u *name));
int check_termcode __PARMS((int max_offset));
char_u *replace_termcodes __PARMS((char_u *from, char_u **bufp, int from_part));
void show_termcodes __PARMS((void));
int show_one_termcode __PARMS((char_u *name, char_u *code, int printit));