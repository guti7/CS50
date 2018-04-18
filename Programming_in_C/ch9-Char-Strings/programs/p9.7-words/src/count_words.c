/*
* Programming in C, 4th, Kochan
* Program 9.7
* Created by @guti7 on 04/18/2018
*
* Counts the words in a portion of text.
*/

#include <stdio.h>
#include <stdbool.h>

int countWords(const char string[]);
bool isAlpha(const char c);

int main(void) {
  
  int count;
  
  const char string[] = "Some words";
  const char string2[] = "Read the next words";
  char string3[] = "Variable stringw 34234 (&)) ... again.";
  
  count = countWords(string);
  printf("\"%s\": %i words\n", string, count);
  
  count = countWords(string2);
  printf("\"%s\": %i words\n", string2, count);
  
  count = countWords(string3);
  printf("\"%s\": %i words\n", string3, count);
  
  return 0;
}

// Returns the number of words in given string.
// word: a sequence of one or more alphabetic characters.
int countWords(const char string[]) {
  // Scan for the first occurance of alpha character, 
  // and considers all subsequent characters up to the first non-alphabetic
  // character as part of the same word. Repeats until the end of the string.
  int wordCount = 0;
  
  int i = 0;
  char curr;
  bool inWord;
  
  do {
    curr = string[i];
    if (isAlpha(curr)) {
      inWord = true;
      while(isAlpha(curr)) {
        i++;
        curr = string[i];
      }
      wordCount++;
    } else {
      i++;
      curr = string[i];
    }
    inWord = false;
  } while(curr != '\0');
   
  return wordCount;
}

// Checks for alphabet character
bool isAlpha(const char c) {
  return (c >= 65 && c <= 90) || (c >= 97 && c <= 122);
}