//
//  main.c
//  scanf
//
//  Created by Guti on 3/11/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 8.2
// ABGC book

// The program asks the user for some basic data and prints it on screen
// to verify entries

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char topping[24];
    int slices;
    int month, day, year;
    float cost;
    
    // Looks for a floating-point variable, the cost of a pizza
    // The user needs to type $ before the cost
    printf("How much does a slice of pizza cost in your area?");
    printf(" (enter as ##.##) $");
    scanf(" %f", &cost);
    
    // The pizza topping is a char array, so your `scanf()` doesn't need an '&'
    printf("What is your favorite pizza topping (one word)? ");
    scanf(" %s", topping);
    
    // Slices count
    printf("How many slices of %s pizza do you want to eat? ", topping);
    scanf(" %d", &slices);
    
    // Dates
    printf("What is today's date? (xx/xx/xx) ");
    scanf(" %d/%d/%d", &month, &day, &year);
    
    // Report
    printf("Treat yourself to dinner on %d/%d/%d ", month, day, year);
    printf("and have %d slices of %s pizza!\n", slices, topping);
    printf("It will only cost you a total of $%.2f!\n\n", cost * slices);
}
















