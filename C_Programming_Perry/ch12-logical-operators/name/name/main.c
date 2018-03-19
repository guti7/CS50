//
//  main.c
//  name
//
//  Created by Guti on 3/14/18.
//  Copyright © 2018 ZenG. All rights reserved.
//
// Program 12.2 ABGC, 3rd edition, Perry

// Asks for last name, if last name starts with letters between P & Q
// they get to a special room to claim tickets

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // Set up array for last name and then get it from the user
    char name[25];
    printf("What is your last name? ");
    printf("(capitalize first letter) ");
    scanf(" %s", name);
    char initial = name[0];
    if (((initial >= 'P') && (initial <= 'S')) || ((initial >= 'p') && (initial <= 's')))
    {
        printf("You must go to room 2424 ");
        printf("for your tickets.\n");
    }
    else
    {
        printf("You can get your tickets here.\n");
    }
    
    return 0;
}

/*
 * Logical operators (&&, ||) let you combine more than one ralational test
 * into a single statement and execute code accordingly.
 *
 * `&&` operator has precedence over `||`
 * Don't overuse the negation operator `!`
 * Don't combine too many relational operator in a single expression.
 */
