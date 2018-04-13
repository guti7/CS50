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
int numberOfDays(struct date d);
bool isLeapYear(int year);
void printDate(struct date d);

int main(void) {
  
  struct date today, tomorrow;
  
  printf("Enter today's date (mm dd yyyy): ");
  scanf("%i%i%i", &today.month, &today.day, &today.year);
  
  // Find tomorrow's Date
  if (today.day != numberOfDays(today)) { // Regular next day
    tomorrow.day = today.day + 1;
    tomorrow.month = today.month;
    tomorrow.year = today.year;
  } else if (today.month  == 12) { // At end of year
    tomorrow.day = 1;
    tomorrow.month = 1;
    tomorrow.year = today.year + 1;
  } else { // At end of month 
    tomorrow.day = 1;
    tomorrow.month = today.month + 1;
    tomorrow.year = today.year;
  }
  
  printf("Tomorrow's date is: ");
  printDate(tomorrow);
}

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

bool isLeapYear(int year) {
  return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

void printDate(struct date d) {
  printf("%.2i/%.2i/%i\n", d.month, d.day, d.year);
}