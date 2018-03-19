//
//  main.c
//  logic
//
//  Created by Guti on 3/14/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 12.1 ABGC, 3rd edition, Perry

// Defines a series of variables ad expressions and then uses both
// Relational and logical operators to test them against each other

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int planets = 8;
    int friends = 7;
    int starWars = 6; // 8?
    int beattles = 4;
    int football = 11;
    int avengers = 6;
    
    if ((friends + beattles >= football) && (friends + avengers >= football))
    {
        printf("the cast of Friends and the Beattles coul make a football team.\n");
        
    }
    
    return 0;
}

/*
 * 'Logical Operators', you can combine more than one ralational test in a
 * single `if` statement to clarify your code.
 * A relational operator simply tests how two values relate(comparison).
 * Logical operators combine ralational operators.
 */
