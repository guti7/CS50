// Programming in C, 4th, Kochan
// Program 6.2
// Created by Guti on 3/8/18.

// Demonstrating an array of counters

#include <stdio.h>

int main(void) {

 int ratingCounters[11], i, response;

 // Initilize ratingCounters elements to zero
 for (i = 1; i <= 10; i++)
  ratingCounters[i] = 0;

 printf ("Enter 10 responses:\n");

 for (i = 1; i <= 10; i++) {
  scanf ("%i", &response);

  if ( response < 1 || response > 10 )
   printf ("Bad response: %i\n", response);
  else
   ++ratingCounters[response];
 }

 printf ("\n\nRating   Number of Responses\n");
 printf ("------ -------------------\n");

 for ( i = 1; i <= 10; i++)
  printf ("%4i%14i\n", i, ratingCounters[i]);

 return 0;

}
