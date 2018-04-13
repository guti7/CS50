/*
* Programming in C, 4th, Kochan
* Program 8.1
* Created by Guti on 04/12/2018.
*
* Illustrates the use of a structure
*/

#include <stdio.h>

int main(void) {
  // Date structure
  struct date {
    int month;
    int day;
    int year;
  };
  
  struct date today;
  today.month = 4;
  today.day = 12;
  today.year = 2022;
  
  printf("Today's date is %i/%i/%.2i\n", today.month, today.day, today.year % 100); // 
}