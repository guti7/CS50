#Variables
CC = gcc
CFLAGS = -g -Wall

counters: counters.o
	gcc counters.o -o counters
  
counters.o: counters.c
	gcc -c -g -Wall counters.c
  
clean:
	rm *.o counters