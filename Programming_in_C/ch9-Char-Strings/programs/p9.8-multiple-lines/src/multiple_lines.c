/*
* Programming in C, 4th, Kochan
* Program 9.8
* Created by @guti7 on 04/18/2018
*
* Counts the words in a portion of text spanning multiple lines.
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void readLine(char buffer[]);
int countWords(const char string[]);
bool isAlpha(const char c);

int main(void) {
  
  char line[81]; // 80 characters long plus null character terminator
  int wordCount = 0;
  
  // Prompt user for text
  printf("Enter some text:\n");
  printf("Press 'RETURN' to end.\n\n");
  
  do {
    readLine(line);
    wordCount += countWords(line);
  } while (line[0] != '\0'); // check for null string
  
  // Display total word count
  printf("Total words: %i\n", wordCount);
  
  return 0;
}

// Read a line of text from the terminal
void readLine(char buffer[]) {
  int i = 0;
  char ch;
  do {
    // reads one character ahead
    ch = getchar();
    buffer[i] = ch;
    i++;
  } while (ch != '\n');
  
  buffer[i - 1] = '\0';
}

// Returns the number of words in given string.
// word: a sequence of one or more alphabetic characters.
int countWords(const char string[]) {
  // Scan for the first occurance of alpha character, 
  // and considers all subsequent characters up to the first non-alphabetic
  // character as part of the same word. Repeats until the end of the string.
  
  int i, wordCount = 0;
  bool inWord = false;
  
  for (i = 0; string[i] != '\0'; i++) {
    if (isAlpha(string[i])) {
      if (!inWord) {
        wordCount++;
        inWord = true;
      }
    } else {
      inWord = false;
    }
  }
   
  return wordCount;
}

// Checks for alphabet character
bool isAlpha(const char c) {
  return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}