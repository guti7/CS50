//
//  main.c
//  basketball
//
//  Created by Guti on 3/16/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 22.2 ABGC 3rd, Perry

// Parallel arrays for a basketball player's statatictics
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int gameScores[5]   = {12, 5, 21, 15, 32};
    int gameRebounds[5] = { 5, 7,  1,  5, 10};
    int gameAssists[5]  = { 2, 9,  4,  3,  6};
    
    int bestGame = 0; // current best score
    
    int gameMark = 0; // index of the best scoring game
    
    int i;
    
    // find the best game mark
    for (i = 0; i < 5; i++)
    {
        if (bestGame < gameScores[i])
        {
            bestGame = gameScores[i];
            gameMark = i;
        }
    }
    
    // Report best scoring game stats
    printf("The Best scoring game stats:\n");
    printf("Game: #%d\n", gameMark + 1);
    printf("Points: %d\n", bestGame);
    printf("Rebounds: %d\n", gameRebounds[gameMark]);
    printf("Assists: %d\n", gameAssists[gameMark]);
    
    
    return 0;
}
/*
 * Consider the use of `struct` to group together qualities
 * belonging to one object.
 *
 * Uses a sequential basic search with a user provided key (search value)
 *
 * Assume that the search will not be found, and include the code needed
 * to handle an unfound value.
 */
