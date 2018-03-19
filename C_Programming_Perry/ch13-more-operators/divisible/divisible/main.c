//
//  main.c
//  divisible
//
//  Created by Guti on 3/15/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 13.1, ABGC 3rd edition, Perry

// The program asks for a number 1 to 100 and tells wether or not their choice
// is equally divisble by 2, 5, and 9.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // Define the integer to hold the user's guess and then get it from the user
    
    int numPick;
    
    printf("Pick an integer between 1 and 100. ");
    scanf(" %d", &numPick);
    
    printf("%d %s divisible by 2.\n", numPick, (numPick % 2 == 0 ? "is" : "is not"));
    printf("%d %s divisible by 5.\n", numPick, (numPick % 5 == 0 ? "is" : "is not"));
    printf("%d %s divisible by 9.\n", numPick, (numPick % 9 == 0 ? "is" : "is not"));
    
    return 0;
}

/*
 * The 'conditional operator' streamlines some logic and
 * requires three values to work. Does exactly what `if...else` does.
 * The `?:` compiles into more compact code.
 *
 * _relation_ ? _trueStatement_ : _falseStatement_;
 *
 */
