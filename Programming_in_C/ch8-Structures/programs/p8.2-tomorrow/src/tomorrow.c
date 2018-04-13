/*
* Programming in C, 4th, Kochan
* Program 8.2
* Created by Guti on 04/13/2018.
*
* Asks the user to enter today's date, calculates tomorrow's date, and
* displays results.
*/

#include <stdio.h>

// Date structure
struct date {
  int month;
  int day;
  int year;
};

// Prototypes
void printDate(struct date d);

int main(void) {
  
  struct date today, tomorrow;
  
  const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30,
                                 31, 31, 30, 31, 30, 31 };
  
  printf("Enter today's date (mm dd yyyy): ");
  scanf("%i%i%i", &today.month, &today.day, &today.year);
  
  // Find tomorrow's Date
  // Regular next day
  tomorrow.day = today.day + 1;
  tomorrow.month = today.month;
  tomorrow.year = today.year;
  
  printf("Tomorrow's date is: ");
  printDate(tomorrow);
}

void printDate(struct date d) {
  printf("%.2i/%.2i/%.2i\n", d.month, d.day, d.year % 100);
}