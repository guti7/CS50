/*
* Programming in C, 4th, Kochan
* Program 8.7
* Created by @guti7 on 04/15/2018
* 
* Uses a months array to set up the initial values inside the array.
* and then displays the months
*/

#include <stdio.h>

struct month {
  int numberOfDays;
  char name[3];
};

int main(void) {
  
  int i;
  
  const struct month months[4] =
  { { 31, { 'J', 'a', 'n' } }, { 28, { 'F', 'e', 'b'} },
    { 31, { 'M', 'a', 'r' } }, { 30, { 'A', 'p', 'r' } },
  };
  
  printf("Month    Number of Days\n");
  printf("-----    --------------\n");
  
  for (i = 0; i < 4; i++) {
    printf(" %c%c%c          %i\n", months[i].name[0], months[i].name[1], months[i].name[2], months[i].numberOfDays);
  }
  
  return 0;
}

/*
* It is valid to declare a variable to be of a particular structure type at
* the same time that the structure is defined.
*/
struct book {
  int year;
  int pages;
  char *author;
  char *genre;
} littlePrince, alchemist, siddhartha;