CC=gcc
CFLAGS=-I.

hellomake: hellomake.o hellofunc.o 
	$(CC) -o hellomake.exe hellomake.o hellofunc.o

.PHONY: clean
clean:
	rm -fr *.exe *.o