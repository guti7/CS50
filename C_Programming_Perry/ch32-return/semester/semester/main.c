//
//  main.c
//  returning
//
//  Created by Guti on 3/19/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 32.1 ABGC 3rd, Perry

// Demonstrates functions returning a value
#include <stdio.h>

#define COUNT 3
// function prototype
float gradeAverage(float testScores[COUNT], int length);


int main(int argc, const char * argv[]) {
    
    int counter;
    float testScores[COUNT];
    float average;
    
    printf("Enter semester test scores:\n");
    
    for (counter = 0; counter < COUNT; counter++)
    {
        printf("Grade #%d: ", counter + 1);
        scanf(" %f", &testScores[counter]);
    }
    
    // Calculate average
    average = gradeAverage(testScores, COUNT);
    
    // Results
    printf("Semester average: %.2f\n", average);
    
    return 0;
}

float gradeAverage(float testScores[COUNT], int length)
{
    float total = 0;
    for (int i = 0; i < length; i++)
    {
        total += testScores[i];
    }
    return total / length;
}

/*
 * You can only return one value from a receiving function.
 *
 * C expects that every function definition have a return type
 * If not specified, C assigns `int` implicitly.
 *
 * `void` keyword is used to specify "no type" - used to specify no return type
 * or no parameter types in a function definition
 *
 * Function Prototypes:
 * It is recommended to provide a function prototype for all functions
 * The function prototype is a model for the actual function, and is put before
 * `main`
 *
 * A header file is a file that contains the programs function prototypes
 * and any structure, data, it needs to perform it's purpose.
 * When you `#include` a library you are importing the functions prototypes
 *
 * `main` prototype: It needs no prototype as long as it is the first
 * function in the program. It is known as a 'self-prototyping' function
 *
 * Parameter lists in the calling function, receiving function, and prototype
 * should match in both numbers and data types (the actual names don't matter).
 *
 */



























