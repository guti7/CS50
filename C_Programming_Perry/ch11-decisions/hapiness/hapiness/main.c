//
//  main.c
//  hapiness
//
//  Created by Guti on 3/14/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 11.3, ABGC 3rd edition, Perry

// The program asks the user their state of hapiness on a scale of 1 to 10
// Provides a reponse depending of the hapiness rating provided

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int prefer;
    
    printf("On a scale of 1 to 10, how happy are you? ");
    scanf(" %d", &prefer);
    
    // Series of if statements to find a response based on the rating
    if (prefer >= 8)
    {
        printf("Great for you!\n");
        printf("Things are going well for you!\n");
    }
    else if (prefer >= 5)
    {
        printf("Better than average, right?\n");
    }
    else if (prefer >= 3)
    {
        printf("Sorry you're feeling not so great.\n");
    }
    else
    {
        printf("Hang in there--things will improve.\n");
    }
    
    return 0;
}

/*
 * You don't always want the same code to execute every program run.
 */
