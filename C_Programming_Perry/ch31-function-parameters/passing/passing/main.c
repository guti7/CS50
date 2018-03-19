//
//  main.c
//  passing
//
//  Created by Guti on 3/19/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 31.4 ABGC 3rd, Perry

// Demonstrates passing multiple variables to a function.
// i.e. passing by value, by address, and arrays (by address by default)
#include <stdio.h>

// function prototypes
void changeSome(int i, float *newX, int array[5]);
void printValues(int i, float x, int array[5], int arrayLen);

int main(int argc, const char * argv[]) {
    
    int i = 10;
    float x = 20.5;
    
    int array[] =  { 10, 20, 30, 40, 50 };
    int arrayLen = sizeof(array) / sizeof(array[0]);
    
    // Print values
    printValues(i, x, array, arrayLen);
    
    // Change some values
    changeSome(i, &x, array);
    printf("\nChange Some called...\n\n");
    
    // Print values
    printValues(i, x, array, arrayLen);
    
    return 0;
}

// Change arguments passed
void changeSome(int i, float *newX, int array[5])
{
    int j;
    
    i = 47;
    *newX = 97.6; // by address
    
    for (j = 0; j < 5; j++)
    {
        array[j] = 100 + 100 * j;
    }
}

// Print values passed
void printValues(int i, float x, int array[5], int arrayLen)
{
    puts("main() variables:\n");
    printf("i: %d\n", i);
    printf("x is %.2f\n", x);
    for (int counter = 0; counter < arrayLen ; counter++)
    {
        printf("array[%d]: %d\n", counter, array[counter]);
    }
}
/*
 * Sharing local variables between functions by passing the variable to a
 * function.
 *
 * Non-array variables are generally passed by value (you get a copy).
 * Array(pointers) are passed by reference (the address location of the value).
 * 
 *
 *
 */
