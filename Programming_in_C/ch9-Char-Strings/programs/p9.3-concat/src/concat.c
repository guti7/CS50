/*
* Programming in C, 4th, Kochan
* Program 9.3
* Created by @guti7 on 04/17/2018
*
* Concatenating character strings
*/

#include <stdio.h>

void concat(char result[], const char st1[], const char st2[]);

int main(void) {
  const char s1[] = "Test ";
  const char s2[] = "works.";
  char s3[20];
  
  concat(s3, s1, s2);
  
  printf("%s\n", s3);
  
  return 0;
}

void concat(char result[], const char st1[], const char st2[]) {
  int i = 0, j = 0;
  
  while (st1[i] != '\0') {
    result[i] = st1[i];
    i++;
  }
  
  while (st1[j] != '\0') {
    result[i + j] = st2[j];
    j++;
  }
  
  result[i + j] = '\0';
}