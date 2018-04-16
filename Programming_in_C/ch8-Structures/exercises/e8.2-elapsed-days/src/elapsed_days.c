/*
* Programming in C, 4th, Kochan
* Exercise 8.2
* Created by @guti7 on 04/15/2018
* 
* Calculates the number of elapsed days between two dates.
* Examples:
*   July   2, 2015 & July     16, 2015 =  14 days
*   August 8, 2014 & February 22, 2015 = 198 days
*
* Find total elapsed days = N2 - N1, where N2 is the most recent date,
* 
* Calculate N for each date:
* N = 1461 * f(year, month) / 4 + 153 x g(month) / 5 + day
* 
* f(year, month) = year - 1,   if month <=2
*                = year,       otherwise
* 
*       g(month) = month + 13, if month <=2
*                = month +  1, otherwise
*
*/

#include <stdio.h>

struct date {
  int month;
  int day;
  int year;
};

// Prototypes
int elapsedDays(struct date startDate, struct date endDate);
int calculateN(struct date d);
int yearValue(int year, int month);
int monthValue(int month);
void printDate(struct date d);
void printElapsedDays(struct date d1, struct date d2, int n);

int main(void) {
  
  struct date startDate =  { 6,  2, 2015 };
  struct date endDate   =  { 6, 16, 2015 };
  
  int n = elapsedDays(startDate, endDate);
  
  printElapsedDays(startDate, endDate, n);
  
  return 0;
}

// Calculates the elapsed days between two dates
int elapsedDays(struct date startDate, struct date endDate) {
  return 1;
}

// Displays the given date to console
void printDate(struct date d) {
  printf("%.2i/%.2i/%i", d.month, d.day, d.year);
}

// Prints the elapsed days N
void printElapsedDays(struct date d1, struct date d2, int n) {
  printf("Elapsed days:\n  ");
  printDate(d1);
  printf(" to ");
  printDate(d2);
  printf(": %i days\n", n);
}