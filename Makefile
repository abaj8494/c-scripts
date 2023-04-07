SOURCES = $(wildcard *.c)
EXECS = $(SOURCES:%.c=%)
CFLAGS = 
BINDIR = /.local/bin/c

all: $(EXECS)
