//
//  main.c
//  hometown
//
//  Created by Guti on 3/16/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 19.2 ABGC 3rd, Perry

// Asks the user for their hometown and home state (two letters)
// Demonstrates string input and output functions
#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char city[15];
    char state[3]; // including null zero terminator
    char fullLocation[18] = "";
    
    puts("What town do you live in?"); // adds a new line '\n'
    gets(city);
    
    puts("What state do you live in? (2-letters)");
    gets(state);
    
    // concatenation
    strcat(fullLocation, city);
    strcat(fullLocation, ", ");
    strcat(fullLocation, state);
    
    puts("You live in ");
    puts(fullLocation);
    return 0;
}
/*
 * Other character functions: `toupper()`, `tolower()`
 *
 * String functions:
 * `strcpy()`, `strlen()`, `strcat()`, `puts()`, `gets()`
 *
 * Make sure the first argument to `strcat()` has enough space to hold the
 * resulting concatenated string.
 *
 * It is recommended to use `scanf` or `fgets` over `gets` because of potential buffer
 * overflow/overrun using `gets`.
 *
 */
