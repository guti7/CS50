/*
* Programming in C, 4th, Kochan
* Program 9.4
* Created by @guti7 on 04/17/2018
*
* Testing strings for equality
*/

#include <stdio.h>
#include <stdbool.h>

bool equalString(const char s1[], const char s2[]);

int main(void) {
  
  const char s1[] = "come";
  const char s2[] = "go";
  const char s3[] = "comE";
  const char s4[] = "come";
  const char stra[] = "string compare test";
  const char strb[] = "string";
  
  bool isEqual;
  
  
  printf("String equality:\n");
  isEqual = equalString(s1, s2);
  printf("\"%s\" %s \"%s\"\n", s1, isEqual? "==":"!=", s2);
  
  isEqual = equalString(s1, s3);
  printf("\"%s\" %s \"%s\"\n", s1, isEqual? "==":"!=", s3);
  
  isEqual = equalString(s4, s1);
  printf("\"%s\" %s \"%s\"\n", s4, isEqual? "==":"!=", s1);
  
  isEqual = equalString(stra, strb);
  printf("\"%s\" %s \"%s\"\n", stra, isEqual? "==":"!=", strb);
  isEqual = equalString(strb, stra);
  printf("\"%s\" %s \"%s\"\n", strb, isEqual? "==":"!=", stra);
  isEqual = equalString(strb, "string");
  printf("\"%s\" %s \"%s\"\n", strb, isEqual? "==":"!=", "string");
  isEqual = equalString(strb, "");
  printf("\"%s\" %s \"%s\"\n", strb, isEqual? "==":"!=", "");
  
  
  return 0;
}

// Check for equality in passed strings, assumes valid input
bool equalString(const char s1[], const char s2[]) {
  int i = 0;
  
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
    i++;
  }
  
  // both string index reached end at same time, then equal, otherwise false
  return s1[i] == '\0' && s2[i] == '\0';
}
