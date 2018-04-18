# Directories
EDIR = ../exe
IDIR = ../include
ODIR = obj

#Variables
CC = gcc

# debugging, warnings, include header files
CFLAGS = -g -Wall -I$(IDIR)
RM = rm -fr

# Source
SRC = count_words.c

# Objects
_OBJS = count_words.o
OBJS = $(_OBJS:%=$(ODIR)/%)

# Dependencies
DEPS = 

$(EDIR)/count_words: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY : clean
clean:
	$(RM) $(EDIR)/* $(ODIR)/*.o core *~ $(IDIR)/*~