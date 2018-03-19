//
//  main.c
//  birthday
//
//  Created by Guti on 3/14/18.
//  Copyright © 2018 ZenG. All rights reserved.
//
// Program 11.1 ABGC, 3rd edition. Perry

// The program asks the user for their birth year and calculates how they
// will be in the current year.

#include <stdio.h>

#define CURRENTYEAR 2018

int main(int argc, const char * argv[]) {
    
    int yearBorn, age;
    
    printf("What year were you born? ");
    scanf(" %d", &yearBorn);
    
    // Data validation
    if (yearBorn > CURRENTYEAR) {
        printf("You haven't been born yet?\n");
        printf("Want to try a different year?\n");
        printf("What year were you born? ");
        scanf(" %d", &yearBorn);
    }
    
    age = CURRENTYEAR - yearBorn;
    
    printf("This year you will be %d years old!\n", age);
    
    // Was your birth year a leap year?
    if (yearBorn % 4 == 0) {
        printf("You were born in a Leap Year -- cool!\n");
    }
    
    return 0;
}
