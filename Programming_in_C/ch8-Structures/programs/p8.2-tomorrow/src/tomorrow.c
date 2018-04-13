/*
* Programming in C, 4th, Kochan
* Program 8.2
* Created by Guti on 04/13/2018.
*
* Asks the user to enter today's date, calculates tomorrow's date, and
* displays results.
*/

#include <stdio.h>

int main(void) {
  
  // Date structure
  struct date {
    int month;
    int day;
    int year;
  };
  
  struct date today, tomorrow;
  
  const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30,
                                 31, 31, 30, 31, 30, 31 };
  
  printf("Enter today's date (mm dd yyyy): ");
  scanf("%i%i%i", &today.month, &today.day, &today.year);
  
  printf("Today's date is %.2i/%.2i/%.2i\n", today.month, today.day, today.year % 100); // 
}