EDIR = ../exe
IDIR = ../include
ODIR = obj

#Variables
CC = gcc

# debugging, warnings, include header files
CFLAGS = -g -Wall -I$(IDIR)
RM = rm -fr

# Source
SRC = prime_revisited.c

# # Objects
_OBJS = prime_revisited.o
OBJS = $(_OBJS:%=$(ODIR)/%)

# Dependencies
DEPS = 

$(EDIR)/prime_revisited: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ 

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -o $@ -c $< 
	
.PHONY : clean
clean:
	$(RM) $(EDIR)/* $(ODIR)/*.o core *~ $(IDIR)/*~ 