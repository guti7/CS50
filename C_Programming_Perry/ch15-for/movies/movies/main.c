//
//  main.c
//  movies
//
//  Created by Guti on 3/15/18.
//  Copyright © 2018 ZenG. All rights reserved.
//
// Program 15.1 ABGC 3rd, Perry

// The program asks the users how many movies they've seen this year,
// asks for the titles and a rating. Remembers the favorite and least favorite.
#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    int counter, numMovies, rating, faveRating, leastRating;
    char movieName[40], favorite[40], least[40];
    
    // Initial baseline values for comparison on new ratings
    faveRating  =  0;
    leastRating = 10;
    
    // Get count on movies watched
    do
    {
        printf("How many movies have you seen this year? ");
        scanf(" %d", &numMovies);
        
        // Only positive numbers are valid.
        if (numMovies < 1)
        {
            printf("No movies!? Try again:\n");
        }
        
    } while (numMovies < 1);
    
    
    for (counter = 1; counter <= numMovies; counter++)
    {
        // Get info on movies
        printf("What is the name of the movie? (one word) ");
        scanf(" %s", movieName);
        printf("What would you rate it? (1-10) ");
        scanf(" %d", &rating);
        
        // Update best rated movie
        if (rating > faveRating)
        {
            strcpy(favorite, movieName);
            faveRating = rating;
        }
        
        // Update worst rated movie
        if (rating < leastRating)
        {
            strcpy(least, movieName);
            leastRating = rating;
        }
    }
    
    // Report results
    printf("Your favorite movie was %s.\n", favorite);
    printf("Your least favorite movie was %s.\n", least);
    
    return 0;
}

/*
 * Use the `for` loop when you now the number of iterations needed
 */
