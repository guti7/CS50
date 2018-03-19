//
//  main.c
//  newlinechar
//
//  Created by Guti on 3/15/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Demonstrates `getchar()` behavior with a new line character
#include <stdio.h>
//#include <curses.h>

int main(int argc, const char * argv[]) {
    
    printf("What are your two initials? ");
    char firstInitial = getchar();
    char secondInitial = getchar();
    getchar();
    
    printf("Initials: %c, %c\n", firstInitial, secondInitial);
    return 0;
}

/*
 * `getchar()` reads any character from a buffer, not directly from input.
 * The buffer gets released only when the enter key ('\n') is pressed
 * one character at a time.
 *
 * To account for the '\n' in the buffer let the user know
 * the format of your request string, so you can use '\n' as needed.
 *
 * Another options is `getch()`, which is unbuffered. You don't need to press
 * enter to release the input. The input is read directly as it is being typed.
 * Cannot fix typing errors because of this. Also `getch` doesn't echo
 * the input to standard output as `getchar` does.
 * There is some link setup using `curses.h` required for Linux based computers.
 *
 */
