//
//  main.c
//  dice
//
//  Created by Guti on 3/16/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 20.2 ABGC 3rd, Perry

// Rolls two dice and presents the total. Asks the user if the next roll
// will be higher or lower.
#include <stdio.h>
#include <time.h> // `time()`
#include <stdlib.h> // `rand()`, `srand()`
#include <ctype.h> // `toupper()`

int main(int argc, const char * argv[]) {
    
    int die1, die2;
    int total1, total2;
    
    time_t t;
    char answer;
    
    // Randomize each program run
    srand((uint)time(&t)); // warning: precision conversion from long to uint
    
    // Get random dice rolls
    die1 = rand() % 5 + 1;
    die2 = rand() % 5 + 1;
    
    total1 = die1 + die2;
    printf("First dice roll: %d, %d.\nTotal: %d\n\n", die1, die2, total1);
    
    // Get user's guess
    do
    {
        puts("Do you think the next roll will be (H)igher, (L)ower, or (S)ame?");
        puts("Enter H, L, or S:");
        
        scanf(" %c", &answer);
        answer = toupper(answer);
    } while (answer != 'H' && answer != 'L' && answer != 'S');
    
    // Roll dice
    die1 = rand() % 5 + 1;
    die2 = rand() % 5 + 1;
    total2 = die1 + die2;
    // Show new results
    printf("Dice: %d, %d.\nTotal: %d\n", die1, die2, total2);
    
    // Compare guess with results
    switch(answer) // TODO: complete switch cases
    {
        case 'H':
            if (total2 > total1)
            {
                printf("Righ on!\n");
                printf("total2 is more than total1: %d > %d\n", total2, total1);
            }
            else
            {
                printf("Incorrect: %d is not greater than %d", total2, total1);
            }
        case 'L':
        case 'S':
        default:
            printf("Invalid answer choice. Start over.\n");
    }
    
    return 0;
}

/*
 * Generate random values with `rand()`. Returns a random integer
 * from 0 to 32767.
 * You can seed the random number generator to limit the randomness of `rand()`
 * Also you can use the seed to always get a different set of random numbers.
 *
 */
