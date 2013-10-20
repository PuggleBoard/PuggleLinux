##
##	 -------------------------------------------------------------------------
##
##	 This file is part of the Puggle Data Conversion and Processing System
##	 Copyright (C) 2013 Puggle
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

GCC = gcc -w
PLUGIN_NAME = hhneuron
HEADERS = hhneuron.h
SOURCES = hhneuron.cpp

CFLAGS += -Wall -I$(INCDIR_APP_LOADER) -D__DEBUG -mtune=cortex-a8 -march=armv7-a
LDFLAGS += -L$(LIBDIR_APP_LOADER) -lpthread -fPIC -ldl
LIBFLAGS += -lfPIC -shared
OBJDIR = obj
OBJS = hhneuron.o
TARGET = hhneuron.so

$(TARGET): $(OBJ)
	@$(GCC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: clean

clean:
	@rm *.so
	@rm *.o
