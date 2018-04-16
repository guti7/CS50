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

int main(void) {
  
  return 0;
}