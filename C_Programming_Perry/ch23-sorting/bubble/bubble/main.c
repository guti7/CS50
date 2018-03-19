//
//  main.c
//  bubble
//
//  Created by Guti on 3/16/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 23.1 ABGC 3rd, Perry

// Generates an array of random numbers and sorts them using bubble sort
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define COUNT 5

int main(int argc, const char * argv[]) {
    
    int counter, inner, outer, didSwap, temp;
//    int nums[COUNT];
    int nums[] = { 50, 32, 93, 2, 74 };
//    int nums[] = { 50, 32, 93, 50, 74 };

    time_t t;
    
    // Seed for different set of random numbers each run
    srand((uint)time(&t));

    // Fill in array to sort
    for (counter = 0; counter < COUNT; counter++)
    {
//        int num = rand() % 99 + 1; // 1 - 100 range
//        nums[counter] = num;
//        printf("%3d", num);
        printf("%3d", nums[counter]);
    }
    printf("\n");
    
    // Bubble sort
    // Stop one before the last element because of the comparison of
    // current index with the next.
    for (outer = 0; outer < COUNT - 1; outer++)
    {
        didSwap = 0;
        for (inner = 0; inner < COUNT - outer - 1; inner++)
        {

            // Compare adjacent values - swap if the next is lesser
            if (nums[inner + 1] < nums[inner])
            {
                temp = nums[inner + 1];
                nums[inner + 1] = nums[inner];
                nums[inner] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0) // if no swap happened then the list is sorted
        {
            break;
        }
    }
    
    // Bubble Sort book implementation:
    // Does not complete when an item is already in the right position
//    for (outer = 0; outer < COUNT - 1; outer++)
//    {
//        didSwap = 0;
//        for (inner = outer + 1; inner < COUNT; inner++)
//        {
//            if (nums[inner] < nums[outer])
//            {
//                temp = nums[inner];
//                nums[inner] = nums[outer];
//                nums[outer] = temp;
//                didSwap = 1;
//            }
//        }
//        if (!didSwap) // No swaps -> sorting complete
//        {
//            break;
//        }
//    }
    
    // Print array
    for (counter = 0; counter < COUNT; counter++)
    {
        printf("%3d", nums[counter]);
    }
    printf("\n");
    
    return 0;
}
