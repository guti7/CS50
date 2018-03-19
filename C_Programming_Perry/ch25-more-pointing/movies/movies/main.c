//
//  main.c
//  movies
//
//  Created by Guti on 3/17/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 25.1 ABGC 3rd, Perry

// Declares and initializes an array of chrater pointers and
// then asks for ratings associated with movies.
#include <stdio.h>
#include <ctype.h> // `toupper`

#define SIZE 9
int main(int argc, const char * argv[]) {
    
    int seenMovies = 0;
    int i;
    char answer;
//    int totalMovies = 9;
    
    // Array of pointers pointing to a char - (strings of chars)
    char* movies[] = {
        "Amour", "Argo", "Beasts of the Southern Wild", "Django Unchained",
        "Les Miserables", "Life of Pi", "Lincoln", "Silver Linings Playbook",
        "Zero Dark Thirty"
    }; // It is important to note that `movies` does not hold strings
    
    // Corresponding array of 9 movie ratings
    int movieRatings[SIZE];
    
    char* tempMovie = "Used temporarily to sort rated movies";
    int outer, inner, didSwap, tempRating; // sorting loop variables
    
    for ( i = 0; i < SIZE; i++)
    {
        printf("Did you see %s? (Y/N): ", movies[i]);
        scanf(" %c", &answer);
        
        if (toupper(answer) == 'Y')
        {
            printf("What's your rating? (1-10): ");
            scanf(" %d", &movieRatings[i]); // store the rating at movie location
            seenMovies++; // keep track of seen movies
        }
        else
        {
            movieRatings[i] = -1; // not seen
        }
    }
    
    // Sort the movies by rating
    for (outer = 0; outer < SIZE - 1; outer++)
    {
        didSwap = 0;
        for (inner = 0; inner < SIZE - outer - 1; inner++)
        {
            if (movieRatings[inner + 1] > movieRatings[inner])
            {
                tempMovie = movies[inner + 1];
                tempRating = movieRatings[inner + 1];
                
                movies[inner + 1] = movies[inner];
                movieRatings[inner + 1] = movieRatings[inner];
                
                movies[inner] = tempMovie;
                movieRatings[inner] = tempRating;
                
                didSwap = 1;
                
            }
        }
        if (!didSwap) // If no swaps occurred, then it is sorted
        {
            break;
        }
    }
    
    // Print sorted movies
    printf("\n*** Your movie ratings for the 2012 Oscar Contenders ***\n");
    printf("Rate : Movie\n");
    printf("____________\n");
    for (i = 0; i < seenMovies; i++)
    {
        printf("%4d : %s\n", movieRatings[i], movies[i]);
    }
    
    return 0;
}

/*
 * Arrays and pointers are very similar.
 * An array name is a pointer and it points to the first element in the array.
 * An array name cannot change(immutable).
 *
 * Using pointers gives you flexibility on manipulating data:
 * You can directly assign a string literal to a character pointer variable.
 *
 * When using `scanf` or functions that read from the user,
 * make sure the pointer variable holds enough space for whatever the user
 * might type.
 * `scanf` using the same location of given variable to overwrite with the new
 * input. You can use `fgets` to limit the input length, if necessary.
 * 
 */
