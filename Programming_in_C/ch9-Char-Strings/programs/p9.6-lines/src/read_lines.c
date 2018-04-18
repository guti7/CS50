/*
* Programming in C, 4th, Kochan
* Program 9.6
* Created by @guti7 on 04/18/2018
*
* Reading lines of data
*/

#include <stdio.h>

#define LINE_LENGTH 80

void readLine(char buffer[], int count);
void printString(char string[]);

int main(void) {
  
  int i;
  char line[81];
  
  for (i = 0; i < 3; i++) {
    readLine(line, LINE_LENGTH);
    printf("Typed: %s\n\n", line);
  }
  
  
  
  return 0;
}

// Read a line of text from the terminal
void readLine(char buffer[], int count) {
  int i = 0;
  char ch;
  printf("Type something (max %i characters): ", LINE_LENGTH);
  do {
    // reads one character ahead
    ch = getchar();
    buffer[i] = ch;
    i++;
  } while (ch != '\n' && i < count);
  
  buffer[i] = '\0';
  
  // Clear terminal buffer before next read
  if (i + 1 > count) {
    while(ch != '\n' && ch != EOF) {
      ch = getchar();
    };
  }
}

void printString(char string[]) {
  int j = 0;
  while (string[j] != '\0') {
    printf("%c,", string[j]);
    j++;
  }
  printf("\n");
}