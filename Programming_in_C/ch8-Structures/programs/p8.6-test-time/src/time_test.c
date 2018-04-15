/*
* Programming in C, 4th, Kochan
* Program 8.6
* Created by @guti7 on 04/14/2018
* 
* Sets up an array to contain different times.
* Illustrastes the use of arrays of structures
*/

#include <stdio.h>

struct time {
  int hours;
  int minutes;
  int seconds;
};

struct time updateTime(struct time t);

int main(void) {
  
  // Initializing an array of structures
  struct time testTimes[5] = { { 11, 59, 59 },
                               { 12,  0,  0 },
                               {  1, 29, 59 },
                               { 23, 59, 59 },
                               { 19, 12, 27 },
                             };
  
  int i;
  
  for (i = 0; i < 5; i++) {
    printf("Time is %.2i:%.2i:%.2i", testTimes[i].hours, testTimes[i].minutes, testTimes[i].seconds);
    
    testTimes[i] = updateTime(testTimes[i]);
    
    printf("...one second later it's %.2i:%.2i:%.2i\n", testTimes[i].hours, testTimes[i].minutes, testTimes[i].seconds);
  }
  
  return 0;
}

/*
 * Updates the time to one second later
 */
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