/*
* Programming in C, 4th, Kochan
* Exercise 8.2
* Created by @guti7 on 04/15/2018
* 
* Calculates the number of elapsed days between two dates.
* Examples:
*   July   2, 2015 & July     16, 2015 =  14 days
*   August 8, 2004 & February 22, 2005 = 198 days 
*
*/

#include <stdio.h>
#include <stdbool.h>

struct date {
  int month;
  int day;
  int year;
};

// Global variables
// March 1, 1700 to February 28, 1800 is N + 2
const struct date mar_01_1700 = { 3,  1, 1700 };
// March 1, 1800 to February 28, 1900 is N + 1
const struct date mar_01_1800 = { 3,  1, 1800 };
// dates after March 1, 1900 is N
const struct date mar_01_1900 = { 3,  1, 1900 };
// anything on or before February 28, 1700 is N

// Prototypes
int elapsedDays(struct date startDate, struct date endDate);
int calculateN(struct date d);
int yearValue(int year, int month);
int monthValue(int month);
bool isEarlierDate(struct date d1, struct date d2);
void printDate(struct date d);
void printElapsedDays(struct date d1, struct date d2, int n);

int main(void) {
  
  struct date startDate =  { 6,  2, 2015 };
  struct date endDate   =  { 6, 16, 2015 };
  
  int n = elapsedDays(startDate, endDate);
  printElapsedDays(startDate, endDate, n);
  
  printf("\nNew dates:\n");
  startDate =  (struct date){ 8,  8, 2004 };
  endDate   =  (struct date){ 2, 22, 2005 };
  
  n = elapsedDays(startDate, endDate);
  printElapsedDays(startDate, endDate, n);
  
  printf("\nNew dates:\n");
  startDate =  (struct date){ 3,  1, 1700 };
  endDate   =  (struct date){ 3,  2, 1800 };
  
  n = elapsedDays(startDate, endDate);
  printElapsedDays(startDate, endDate, n);
  
  return 0;
}

// Calculates the elapsed days between two dates
// elapsed days = N2 - N1, where N2 is the most recent date,
int elapsedDays(struct date startDate, struct date endDate) {
  return calculateN(endDate) - calculateN(startDate);
}

// Calculate N for date
int calculateN(struct date d) {
  // N = 1461 * f(year, month) / 4 + 153 * g(month) / 5 + day
  int n = 1461 * yearValue(d.year, d.month) / 4 + 153 * monthValue(d.month) / 5 + d.day;
  
  // TODO: off by one in some dates
  if (isEarlierDate(d, mar_01_1700)) {
    n += 0;
  } else if (isEarlierDate(d, mar_01_1800)) {
    n += 2;
  } else if (isEarlierDate(d, mar_01_1900)) {
    n += 1;
  } else {
    n += 0;
  }
  
  return n;
}

// Year value = year - 1, if month <=2, year, otherwise
int yearValue(int year, int month) {
  if (month <= 2) {
    return year - 1;
  }
  return year;
}

// month value = month + 13, if month <=2, month +  1, otherwise
int monthValue(int month) {
  if (month <= 2) {
    return month + 13;
  }
  return month + 1;
}

// Checks if d1 is and earlier date than the second date
bool isEarlierDate(struct date d1, struct date d2) {
  return d1.year <= d2.year && d1.month <= d2.month && d1.day < d2.day;
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