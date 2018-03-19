//
//  main.c
//  birthdayb
//
//  Created by Guti on 3/14/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 11.2 - ABGC 3rd edition, Perry
//
// The program asks the user for their birth year and calculates the age.
// Branching `if...else`

#include <stdio.h>

#define CURRENTYEAR 2018

int main(int argc, const char * argv[]) {

    int yearBorn, age;
    
    printf("What year were you born? ");
    scanf(" %d", &yearBorn);
    
    // data validation
    if (yearBorn > CURRENTYEAR)
    {
        printf("You haven't been born yet?\n");
    }
    else
    {
        age = CURRENTYEAR - yearBorn;
        
        printf("This year you will be %d years old!\n", age);
        
        // Was this birth year a Leap Year
        if (yearBorn % 4 == 0) {
            printf("You are born in a Leap Year -- cool!\n");
        }
    }
    
    return 0;
}
