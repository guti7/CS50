#Variables
CC = gcc

# debugging, warnings, include header files (current directory) (-I.)
CFLAGS = -g -Wall
RM = rm -fr

# Source
SRC = counters.c

# # Objects
OBJS = counters.o

# Dependencies
# DEP = 

counters: $(OBJS)
	$(CC) $(CFLAGS) -o counters $(OBJS) 

$(OBJS): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)
  
clean:
	# counters *.dSYM *.out
	$(RM) *.o *.exe counters