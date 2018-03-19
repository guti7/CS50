//
//  main.c
//  writing
//
//  Created by Guti on 3/18/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 28.1 ABGC 3rd, Perry

// Writes book information to a file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "book.h"

#define SIZE 1

FILE * fileP;

int main(int argc, const char * argv[]) {
    
    int counter;
    struct book books[SIZE]; // struct book * books[3];
    
    // Ge the book info
    for (counter = 0; counter < SIZE; counter++)
    {
        printf("Title #%d? ", counter + 1);
        gets(books[counter].title);
        
        puts("Author? ");
        gets(books[counter].author);
        
        puts("Price? ");
        scanf(" %f", &books[counter].price);
        
        puts("Pages Count? ");
        scanf(" %d", &books[counter].pages);
        
        getchar(); // clear newline from input buffer
    }
    
    // File set up
    char path[] = "/Users/Guti/Developer/CS50/C_Programming_Perry/ch28-files/writing/writing/library.txt";
//    char *pPath;
    fileP = fopen(path, "w"); // open mode 'write' overwrites existing files
    
    // Check success on file open
    if (fileP == 0) // !fileP
    {
        printf("Error--file could not be opened.\n");
        exit(1);
    }
    
    // Save data by writing to file pointer
    fprintf(fileP, "\nHere is the collection of books:\n");
    for (counter = 0; counter < SIZE; counter++)
    {
        fprintf(fileP, "#%d: %s by %s, pages: %d, cost: $%6.2f\n\n", counter + 1,
                books[counter].title, books[counter].author,
                books[counter].pages, books[counter].price);
    }
    
    // Close file pointer
    fclose(fileP);
    
    return 0;
}






















