//
//  main.c
//  reading
//
//  Created by Guti on 3/18/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 28.2 ABGC 3rd, Perry
// Reads book info into the program
#include <stdio.h>
#include <stdlib.h>

//#include "./../../writing/writing/book.h"

FILE * fileP;

int main(int argc, const char * argv[]) {
    
    char fOpenPath[] = "/Users/Guti/Developer/CS50/C_Programming_Perry/ch28-files/writing/writing/library.txt";
    
    char fileLine[100]; // will hold each line of input (up to 99 character + '\n'
    
    fileP = fopen(fOpenPath, "r");
    
    if (fileP) // File open success
    {
        while (!feof(fileP)) // haven't reached EOF (end of file signal)
        {
            fgets(fileLine, 100, fileP); // get the next line
            if (!feof(fileP)) // if the end wasn't reached
            {
                puts(fileLine);
            }
        }
    }
    else
    {
        printf("\nError opening file.\n");
    }
    
    // Close open file pointers
    fclose(fileP);
    
    return 0;
}
