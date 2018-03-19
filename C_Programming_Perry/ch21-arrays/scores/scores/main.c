//
//  main.c
//  scores
//
//  Created by Guti on 3/16/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 21.1 ABGC 3rd, Perry

// Creates an array of game goals for a football player in Champions League
#include <stdio.h>
#define GAMES 10
int main(int argc, const char * argv[]) {
    
    int gameGoals[GAMES] = {2, 2, 1, 1, 2, 1, 2, 1};
    int totalGoals = 0;
    int i;
    float average;
    
    // predict scored goals in next 2 matches in quarter-finals
    for (i = 8; i < GAMES; i++)
    {
        printf("How many goals do you predict for game #%i? ", i + 1);
        scanf(" %d", &gameGoals[i]); // get the address of current index
    }
    
    // Calculate average
    for (i = 0; i < GAMES; i++)
    {
        totalGoals += gameGoals[i];
    }
    
    average = (float)totalGoals/ GAMES;
    
    printf("The player's goal scoring average is: %f\n", average);
    
    return 0;
}
/*
 * Adding values to a predefined array, using the intialization, and assignment.
 *
 * Make sure you assign initial values to all variables to avoid random,
 * incorrect results.
 */
