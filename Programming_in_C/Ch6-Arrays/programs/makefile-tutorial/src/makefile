# ./ is within src/
#headers directory
IDIR = ../include
ODIR = obj
# library directory
LDIR = ../lib

# linking math
LIBS = -lm 

CC = gcc
CFLAGS = -I$(IDIR) -g -Wall 
DEPS = hellomake.h
OBJS = hellomake.o hellofunc.o

hellomake.exe: $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)

# Dependencies on heade files
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
# %.* means all files ending with .o and .c
# CC defines de compiler to use, -c says to generate the object
# file, -o $@ says to put the output in the file named on
# the left side of the :, the $< is the first item in the
# dependencies list.
	
# hellomake.o: hellomake.c hellomake.h
# 	$(CC) -c -o hellomake.o hellomake.c $(CFLAGS)
# 
# hellofunc.o: hellofunc.c hellomake.h
# 	$(CC) -c -o hellofunc.o hellofunc.c $(CFLAGS)

# (left side) $@ : $^ (right side)

.PHONY: clean
clean:
	rm -fr *.exe *.o