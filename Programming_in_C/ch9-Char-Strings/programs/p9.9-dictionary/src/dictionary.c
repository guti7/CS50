/*
* Programming in C, 4th, Kochan
* Program 9.9
* Created by @guti7 on 04/18/2018
*
* Simulate a dictionary and lookup words to get a definition
*/
#include <stdio.h>
#include <stdbool.h>

struct entry {
  char word[15];
  char definition[50];
};

int lookupIterative(const struct entry dictionary[], const char word[], const int size);
bool equalStrings(const char s1[], const char s2[]);
int compareStrings(const char s1[], const char s2[]);
int lookupBinary(const struct entry dictionary[], const char word[], const int size);

int main(void) {
  
  char word[15];
  int entry;
  int dictSize = 4;
  
  const struct entry dictionary[4] = 
    {
      { "abyss", "a bottomless pit" },
      { "aerie", "a high nest" },
      { "agar",  "a jelly made from seaweed" },
      { "ajar",  "partially open" },
    };
  
  printf("Enter word to lookup: \n");
  scanf("%14s", word);
  // entry = lookupIterative(dictionary, word, dictSize);
  entry = lookupBinary(dictionary, word, dictSize);
  
  printf("entry: %i\n", entry);
  if (entry != -1) {
    printf("\n%s: %s\n", word, dictionary[entry].definition);
  } else {
    printf("%s: Not Found.\n", word);
  
  
  
  }
  
  return 0;
}

// Searches for the word in dictionary of given size using binary search
int lookupBinary(const struct entry dictionary[], const char word[], int size) {
  
  int low = 0;
  int high = size - 1;
  int mid, result;
  
  while (low <= high) {
    mid = (low + high) / 2;
    result = compareStrings(dictionary[mid].word, word);
    if (result == 0) {
      return mid;
    } else if (result > 0) {
      high = mid - 1;
    } else { // compare < 0
      low = mid + 1;
    }
  }
  
  return -1;
}

// Determines lexicographical order of the first string compared to the second
int compareStrings(const char s1[], const char s2[]) {
  int i = 0;
  
  while ( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
    i++;
  }
  
  return s1[i] - s2[i];
}

// Searches for a word in dictionary, returns entry value or -1 if not found
int lookupIterative(const struct entry dictionary[],
                    const char word[], const int size) {
  
  int i, entry = -1;
  
  // iterate over dictionary and look for a match of word to an entry
  for (i = 0; i < size; i++) {
    if (equalStrings(dictionary[i].word, word)) {
      entry = i;
      break;
    }
  }
  
  return entry;
}

// Check for equality in passed strings, assumes valid input
bool equalStrings(const char s1[], const char s2[]) {
  int i = 0;
  
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
    i++;
  }
  
  return s1[i] == s2[i]; // at end of strings, '\0'
}