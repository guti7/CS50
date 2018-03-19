//
//  main.c
//  strings
//
//  Created by Guti on 3/11/18.
//  Copyright © 2018 ZenG. All rights reserved.
//
// Program 6.1
// Absolute Beginner's Guide to C, 3rd Edition
// Chapter6ex1.c

/*
 * Store strings in character arrays, but reserve enough array elements to
 * hold the longest string you'll ever store in that array.
 *
 * Strings end with the '\0' null zero(string terminator)
 *
 * Three ways to put a string in a char array:
 *  1. Initialize at declaration with a string literal
 *  2. Assign one element at a time.
 *  3. Use `strcpy()`
 *  NOTE: You cannot modify the char variable directly with a new string literal
 */

// The program pairs three kids to their favorite superhero

#include <stdio.h>
#include <string.h>  // strcpy()

int main(int argc, const char * argv[]) {
    char Kid1[12];
    char Kid2[] = "Maddie";
    char Kid3[7] = "Andrew";
    
    char Hero1[] = "Batman";
    char Hero2[34] = "Spiderman";
    char Hero3[25];
    
    Kid1[0] = 'K';
    Kid1[1] = 'a';
    Kid1[2] = 't';
    Kid1[3] = 'i';
    Kid1[4] = 'e';
    Kid1[5] = '\0';
    
    strcpy(Hero3, "The incredible Hulk");
    
    printf("%s\'s favorite hero is %s.\n", Kid1, Hero1);
    printf("%s\'s favorite hero is %s.\n", Kid2, Hero2);
    printf("%s\'s favorite hero is %s.\n", Kid3, Hero3);
    
    return 0;
    
}
