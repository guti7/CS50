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

// Read a line of text from the terminal
void readLine(char buffer[]) {
  int i = 0;
  char ch;
  
  do {
    ch = getchar();
    buffer[i] = ch;
    i++;
  } while (ch != '\n');
  
  buffer[--i] = '\0';
}