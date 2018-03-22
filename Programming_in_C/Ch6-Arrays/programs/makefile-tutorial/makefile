CC = gcc
CFLAGS = -I. -g -Wall 
DEPS = hellomake.h

hellomake: hellomake.o hellofunc.o 
	$(CC) -o hellomake hellomake.o hellofunc.o

# Dependencies on heade files
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
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