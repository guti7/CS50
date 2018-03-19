//
//  main.c
//  counter
//
//  Created by Guti on 3/13/18.
//  Copyright © 2018 ZenG. All rights reserved.
//
// Program 10.1 ABGC 3rd Edition, Perry

// The program increases a counter from 1 to 2, printing updates
// and then counts it back down to 1.
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int counter = 0;
    
    printf("Counter is: %d\n", counter);
    
    counter = counter + 1;
    printf("Counter is: %d\n", counter);
    
    counter = counter + 1;
    printf("Counter is: %d\n", counter); // counter == 2
    
    counter = counter - 1;
    printf("Counter is: %d\n", counter);
    
    counter = counter - 1;
    printf("Counter is: %d\n", counter); // counter == 0
    
    
    return 0;
}

/*
 * Compound operators are quicker to use!
 * *=, /=, %=, +=, -=
 * They have the lowest precedence just before the `,` (comma) operator.
 *
 *
 * Typecasting: temporarily changes the data type of one variable to another
 * (_dataType_) _value_
 * TIP: Typecast all variables to same type in an expression to avoid
 * rounding problems
 *
 * WARNING: Pay attention to what yout typecast, if you find yourself
 * typecasting back and forth consider the original type, and/or creating a
 * separate variable.
 *
 */
