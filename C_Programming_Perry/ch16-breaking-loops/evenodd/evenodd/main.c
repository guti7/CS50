//
//  main.c
//  evenodd
//
//  Created by Guti on 3/15/18.
//  Copyright © 2018 ZenG. All rights reserved.
//


// Program 16.2 ABGC 3rd, Perry
//
// Prints a message whether the number is even or odd.
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i;
    
    // looping through 1 - 10
    for (i = 1; i <= 10; i++)
    {
        if (i % 2 == 1) // odd
        {
            printf("I'm rather odd...\n");
            // jump to next iteration
            continue;
        }
        printf("Even up!\n");
    }
    
    return 0;
}
/*
 * Loops can be terminated early with `break`
 * Loops can be continued early with `continue`
 */
