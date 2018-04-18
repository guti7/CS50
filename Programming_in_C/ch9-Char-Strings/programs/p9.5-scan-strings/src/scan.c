/*
* Programming in C, 4th, Kochan
* Program 9.5
* Created by @guti7 on 04/18/2018
*
* Reading strings using `scanf` and `%s` format characters
*/

#include <stdio.h>

int main(void) {
  
  char s1[81], s2[10], s3[81];
  
  printf("Enter text:\n");
  
  // placing a number after % in the format string, tells `scanf` the max
  // number of characters to read, then continues to read next char
  scanf("%80s%9s%80s", s1, s2, s3);
  
  printf("\ns1 = %s\ns2 = %s\ns3 = %s\n", s1, s2, s3);
  
  return 0;
}

