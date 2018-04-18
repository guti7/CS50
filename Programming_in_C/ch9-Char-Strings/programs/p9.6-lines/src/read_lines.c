/*
* Programming in C, 4th, Kochan
* Program 9.6
* Created by @guti7 on 04/18/2018
*
* Reading lines of data
*/

#include <stdio.h>

void readLine(char buffer[]);

int main(void) {
  
  int i;
  char line[81];
  
  for (i = 0; i < 2; i++) {
    printf("Type something: ");
    readLine(line);
    printf("Typed: %s\n\n", line);
  }
  
  return 0;
}

void readLine(char buffer[]) {
  int j = 0;
  char ch = getchar();
  
  while (ch != '\n') {
    buffer[j] = ch;
    ch = getchar();
    j++;
  }
  
  buffer[j] = '\0';
}