##
##	 -------------------------------------------------------------------------
##
##	 This file is part of the BoneClamp Data Conversion and Processing System
##	 Copyright (C) 2013 BoneClamp
##
##	 -------------------------------------------------------------------------
##
##	Written in 2013 by: Yogi Patel <yapatel@gatech.edu>
##
##	To the extent possible under law, the author(s) have dedicated all copyright
##	and related and neighboring rights to this software to the public domain
##	worldwide. This software is distributed without any warranty.
##
##	You should have received a copy of the CC Public Domain Dedication along with
##	this software. If not, see <http://creativecommons.org/licenses/by-sa/3.0/legalcode>.
##

SRC_DIR = src
OBJ_DIR = obj

CC = gcc
CFLAGS = -Wall -I$(INC_DIR) -D__DEBUG -mtune=cortex-a8 -march=armv7-a
LDFLAGS = -L$(LIB_DIR) -lprussdrv -lpthread

all:
	puggle

clean:
	rm puggle
