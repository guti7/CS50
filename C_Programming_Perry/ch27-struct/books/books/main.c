//
//  main.c
//  books
//
//  Created by Guti on 3/18/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 27.1 ABGC 3rd, Perry

// Gets book info from the user, using a struct to define a book

#include <stdio.h>
#include <stdlib.h>
#include "book.h"

#define SIZE 3

int main(int argc, const char * argv[]) {
    
    int counter;
    struct book books[SIZE]; // array of three books
    
    // Get info from user
    for (counter = 0; counter < SIZE; counter++)
    {
        printf("What is the title of the book #%d?\n ", counter + 1);
        //scanf(" %s", books[counter].title); // Stops at spaces
        // TODO: Alternatively, you can use `fgets`
        gets(books[counter].title);
        
        puts("Who is the author? ");
        gets(books[counter].author);
        
        puts("How much did it cost? ");
        scanf(" %f", &books[counter].price);
        
        puts("How many pages in the book? ");
        scanf(" %d", &books[counter].pages);
        getchar(); // clear the last '\n' character left in the buffer
        
    }
    
    // Report data
    printf("\n\n*** Book Collection ***\n");
    
    for (counter = 0; counter < SIZE; counter++)
    {
        printf("#%d: %s by %s\n ", counter + 1,
                                books[counter].title,
                                books[counter].author);
        printf("pages: %d, price: $%.2f\n", books[counter].pages, books[counter].price);
        printf("\n");
    }
    
    return 0;
}
/*
 * The C 'structure' is a way by which you group data and get
 * access to all the individual parts known as 'members'.
 *
 * Structure definition:
 * Before you can declare variables of your structure, you
 * need to tell your program what your structure looks like by defining it.
 *
 * A structure definition can be considered as an aggregate type, it has a name
 * and can be considered a single value. It serves as a blueprint.
 *
 * `struct` keyword begins the structure definition
 *
 * ````````````````````````
 *  struct [structureTag] { // the structure tag: the assigned new 'data type'
 *      member; // regular built-in data type definitions
 *      member;
 *      ...
 *      member;
 *  };
 * ````````````````````````
 *
 */

// Sample struct
struct inventoryItem {
    char manufacturer[25];
    char model[15];
    int diskSize; // MB
    int memorySpace; // MB
    int ports; // USB ports on the system
    int quantity; // inventory quantity available
    float cost;
    float price; // retail
};
/*
 * `inventoryItem` does not define 8 variables, it defines 8 members
 *
 * Consider putting structs in a header file if you have a use for them
 * in multiple programs.
 *
 * Declaring variables of the newly creating `struct` data type
 * ``` struct [structureTag] var1, var2, ..., varN; ```
 *
 * Array of struct variables
 * ``` struct [structureTag] arrayName[SIZE]; ```
 *
 * Struct pointers
 * ``` struct [structureTag] *var1, *var2, ..., *varN;
 */

// Sample struct variable declarations
void structures()
{
    // You must tell C that your structure data type is a struct
    // in order to declare a struct variable.
    struct inventoryItem item1, item2, item3;
    
    struct inventoryItem items[500];
    
    // Pointers to instances of a structure
    struct inventoryItem *elem1, *elem2, *elem3;
    
    // Heap allocation for struct pointers
    elem1 = (struct inventoryItem *)malloc(sizeof(struct inventoryItem));
    
}



















