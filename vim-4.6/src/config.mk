#
# config.mk.in -- autoconf template for Vim on Unix		vim:ts=8:sw=8:
#
# DO NOT EDIT config.mk!! Do not edit config.mk.in!! Edit Makefile and run
# configure again. config.mk will be overwritten by configure. 
#
# Configure does not edit the makefile directly. This method is not the 
# standard use of GNU autoconf, but it has two advantages:
#   a) The user can override every choice made by configure.
#   b) Modifications to the makefile are not lost when configure is run.
#
# I hope this is worth being nonstandard. jw.


CC = gcc
DEFS = -DHAVE_CONFIG_H
CFLAGS = -g -O -Wall -Wshadow
srcdir = .
LDFLAGS = 
LIBS = -ltermcap 
CTAGS = ctags

CPP = gcc -E
CPP_MM = M
X_CFLAGS = -DX_DISPLAY_MISSING 
X_LIBS_DIR = 
X_PRE_LIBS = 
X_EXTRA_LIBS = 
X_LIBS = 

### Prefix for location of files
PREFIX = /usr/local
# to fix a bug in autoconf, also do this:
prefix = /usr/local

### Location of binary
EXEC_PREFIX = ${prefix}

### Location for help files
HELPDIR = /share

### Do we have a GUI
GUI_INC_LOC = 
GUI_LIB_LOC = 
MOTIF_COMMENT = ZZZ
ATHENA_COMMENT = ZZZ
NARROW_PROTO = 
GUI_X_LIBS = 
