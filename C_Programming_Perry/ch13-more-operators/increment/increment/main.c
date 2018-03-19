//
//  main.c
//  increment
//
//  Created by Guti on 3/15/18.
//  Copyright © 2018 ZenG. All rights reserved.
//
// Program 13.2 ABGC, 3rd, Perry

// The program increments and decrement a counter, using the increment
// and decrement operators
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int counter = 0;
    printf("Counter: %d\n", counter);
    printf("Counter: %d\n", ++counter); // 1
    printf("Counter: %d\n", ++counter); // 2
    printf("Counter: %d\n", ++counter); // 3
    printf("Counter: %d\n", counter++); // postfix provides the value first
    printf("Counter: %d\n", counter++); // 4
    printf("Counter: %d\n", counter); // 5
    printf("Counter: %d\n", counter--); // 5
    printf("Counter: %d\n", --counter); // 3
    printf("Counter: %d\n", --counter); // 2

    
    return 0;
}
/*
 * The `increment` and `decrement` operators work on only one argument
 * increase or decrease a variable value by one unit.
 * Two variations are postfix and prefix.
 * Postfix provides the current value and then changes the original value by one
 */
