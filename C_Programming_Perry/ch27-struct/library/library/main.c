//
//  main.c
//  library
//
//  Created by Guti on 3/18/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 27.2 ABGC 3rd, Perry

// Book library, using pointers to structures
#include <stdio.h>
#include <stdlib.h>
#include "book.h"

#define SIZE 2

int main(int argc, const char * argv[]) {
    int counter;
    struct book *books[SIZE]; // Array of three structure pointer variables
    
    
    printf("Enter library inventory:\n");
    
    for (counter = 0; counter < SIZE; counter++)
    {
        // allocate memory for each book in books
        books[counter] = (struct book *)malloc(sizeof(struct book));
        
        printf("Book title #%d?\n", counter + 1);
        gets(books[counter]->title); // using structure pointer operator
        
        puts("Author? ");
        gets(books[counter] -> author);
        
        puts("Cost? ");
        scanf(" %f", &books[counter] -> price);
        
        puts("Pages? ");
        scanf(" %d", &books[counter] -> pages);
        
        getchar(); // clears newline input from buffer
    }
    
    // Report results
    printf("\n*** Library ***\n");
    for (counter = 0; counter < SIZE; counter++)
    {
        printf("\"%s\" by %s: $%6.2f, pgs: %3d\n", books[counter] -> title,
               books[counter] -> author, books[counter] -> price,
               books[counter] -> pages
        );
    }
    
    return 0;
}

/*
 * A 'structure' is an aggregate variable data type.
 * A structure can hold several values of different data types
 *
 * Before using a structure variable, you must define the `struct`
 * `struct` signals how many members are in the structure and the
 * data typ of each member
 *
 * Member names exist only so you can work witha an indivual part of the
 * structure. Do not use member names as regular variables
 *
 */
