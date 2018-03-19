//
//  main.c
//  malloc
//
//  Created by Guti on 3/18/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 26.1 ABGC 3rd, Perry

// Demonstrates the use of the heap by
// allocating an array, filling it with random numbers, then looping
// through the values to find smallest, biggest, and the average.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    time_t t;
    int* randomNums;

    int biggest, smallest;
    float average;
    double total = 0;
    
    int i, size;
    
    srand(time(&t));
    
    printf("How many random numbers do you want in your array? ");
    scanf(" %d", &size);
    
    // Allocation in the heap
    randomNums = (int *) malloc(size * sizeof(int));
    
    // Check success on allocation
    if (!randomNums) // zero
    {
        printf("Random array allocation failed!\n");
        exit(1);
    }
    
    // Assign random numbers to array
    for (i = 0; i < size; i++)
    {
        randomNums[i] = rand() % 500 + 1; // range 1 - 500
    }
    
    // Find stats
    biggest = 0;
    smallest = 501;
    
    printf("\n*** Array elements ***\n");
    for (i = 0; i < size; i++)
    {
        int value = randomNums[i];
        printf(" %3d", value);
        if (value > biggest)
        {
            biggest = value;
        }
        else if (value < smallest)
        {
            smallest = value;
        }
        
        total += value;
    }
    printf("\n");
    
    average = total / size;
    
    // Results
    printf("\n*** Random Number Stats ***\n");
    printf("Largest : %d\n", biggest);
    printf("Smallest: %d\n", smallest);
    printf("Average : %.2f\n", average);
    
    // Deallocate memory from heap
    free(randomNums);
    
    return 0;
}

/*
 * `malloc` allocates heap memory
 * You access the heap via a pointer variable
 * Deallocate heap memory when you are done with it. `free`
 *
 * Allocate your pointer that you will use for heap memory,
 * then `alloc` just when you need it.
 *
 * Use an array of pointers when you need to track multiple chucks
 * Verify that allocation was succesful
 *
 * Don't always rely on regular arrays for your programs
 * Use the heap when you need data just for a short time.
 *
 */























