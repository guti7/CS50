EDIR = ../exe
IDIR = ../include
ODIR = obj

#Variables
CC = gcc

# debugging, warnings, include header files (current directory) (-I.)
CFLAGS = -g -Wall -I$(IDIR)
RM = rm -fr

# Source
SRC = fibonacci.c

# # Objects
_OBJS = fibonacci.o
OBJS = $(_OBJS:%=$(ODIR)/%)

# Dependencies
DEPS = 

$(EDIR)/fibonacci: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ 

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -o $@ -c $< 
# $(OBJS): $(SRC)
# 	$(CC) $(CFLAGS) -o $(OBJS) -c $(SRC)
	
.PHONY : clean
clean:
# *.dSYM *.out
	$(RM) $(EDIR)/* $(ODIR)/*.o core *~ $(IDIR)/*~ 