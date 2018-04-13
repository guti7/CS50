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
SRC = structure.c

# Objects
_OBJS = structure.o
OBJS = $(_OBJS:%=$(ODIR)/%)

# Dependencies
DEPS = 

$(EDIR)/structure: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY : clean
clean:
	$(RM) $(EDIR)/* $(ODIR)/*.o core *~ $(IDIR)/*~