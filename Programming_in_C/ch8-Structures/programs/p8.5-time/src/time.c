/*
* Programming in C, 4th, Kochan
* Program 8.5
* Created by @guti7 on 04/13/2018
* 
* Updates time by one second
*/

#include <stdio.h>

// Time
struct time {
  int seconds;
  int minutes;
  int hours;
};

// Prototypes
struct time updateTime(struct time t);
void printTime(struct time t);

// main
int main(void) {
  
  // get start time
  struct time currentTime, nextTime;
  
  // Prompt user for time
  printf("Enter the time (hh:mm:ss): ");
  scanf("%i:%i:%i", &currentTime.hours, &currentTime.minutes, &currentTime.seconds);
  
  // Report current time
  printf("Current time: ");
  printTime(currentTime);
  
  // Update time by second
  printf("Updated time: ");
  nextTime = updateTime(currentTime);
  printTime(nextTime);
  
  return 0;
}

// Updates the given time by one second
struct time updateTime(struct time t) {
  // increase by one second 
  t.seconds++;
  
  // update time members
  if (t.seconds == 60) {
    t.seconds = 0;
    t.minutes++;
    if (t.minutes == 60) {
      t.minutes = 0;
      t.hours++;
      if (t.hours == 24) {
        t.hours = 0;
      }
    }
  }
  
  return t;
}

// Display current time to console
void printTime(struct time t) {
  printf("%.2i:%.2i:%.2i\n", t.hours, t.minutes, t.seconds);
}