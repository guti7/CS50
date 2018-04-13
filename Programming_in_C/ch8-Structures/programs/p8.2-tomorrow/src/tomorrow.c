/*
* Programming in C, 4th, Kochan
* Program 8.2
* Created by Guti on 04/13/2018.
*
* Asks the user to enter today's date, calculates tomorrow's date, and
* displays results.
*/

#include <stdio.h>
#include <stdbool.h>

// Date structure
struct date {
  int month;
  int day;
  int year;
};

// Prototypes
struct date updateDate(struct date d);
int numberOfDays(struct date d);
bool isLeapYear(int year);
void printDate(struct date d);

int main(void) {
  
  struct date thisDay, nextDay;
  
  printf("Enter today's date (mm dd yyyy): ");
  scanf("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);
  
  // Find next Date
  nextDay = updateDate(thisDay);
  
  printf("Tomorrow's date is: ");
  printDate(nextDay);
}

// Determines the next date from a date
struct date updateDate(struct date d) {
  
  struct date tomorrow;
  
  if (d.day != numberOfDays(d)) { // Regular next day
    tomorrow.day = d.day + 1;
    tomorrow.month = d.month;
    tomorrow.year = d.year;
  } else if (d.month  == 12) { // At end of year
    tomorrow.day = 1;
    tomorrow.month = 1;
    tomorrow.year = d.year + 1;
  } else { // At end of month 
    tomorrow.day = 1;
    tomorrow.month = d.month + 1;
    tomorrow.year = d.year;
  }
  
  return tomorrow;
}

// Total days for the month of the given date, considering leap years
int numberOfDays(struct date d) {
  int days;
  const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30,
                                 31, 31, 30, 31, 30, 31 };
  
  days = daysPerMonth[d.month - 1];
  
  if (isLeapYear(d.year) && d.month == 2) {
    days++;
  }
  
  return days;
}

// Finds if given year is a leap year
bool isLeapYear(int year) {
  return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

// Displays the given date to console
void printDate(struct date d) {
  printf("%.2i/%.2i/%i\n", d.month, d.day, d.year);
}