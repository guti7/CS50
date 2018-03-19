//
//  main.c
//  arithmetic
//
//  Created by Guti on 3/11/18.
//  Copyright © 2018 ZenG. All rights reserved.
//


//  Program 9.1 from ABGC, 3rd edition - Perry
// Demonstrates math operations, and different types of division


#include <stdio.h>

int main(int argc, const char * argv[]) {
    // two sets of equivalent variables, one set is integer and floating point the other.
    
    float a = 19.0;
    float b = 5.0;
    float floatAnswer;
    
    int x = 19;
    int y = 5;
    int intAnswer;
    
    // Using two float variables results in a float variable
    floatAnswer = a / b; // 3.8
    printf("%.1f divided by %.1f equals %.1f\n", a, b, floatAnswer);
    
    // Using two int variables results in int, storing it in a float coverts it
    floatAnswer = x / y;
    printf("%4d divided by %3d equals %.1f\n", x, y, floatAnswer);
    
    // Conversion from float to Int truncates, with no rounding
    intAnswer = a / b;
    printf("%.1f dividided by %.1f equals %d\n", a, b, intAnswer);
    
    // Calculating the remainder (only possible on int operands)
    intAnswer = x % y;
    printf("%d modulus %d equals %d\n", x, y, intAnswer);
    
    return 0;
}
