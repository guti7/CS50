//
//  main.c
//  morebooks
//
//  Created by Guti on 3/18/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 28.3 ABGC 3rd, Perry
// Opens existing book info file and adds to it
#include <stdio.h>
#include <stdlib.h>

FILE * filePointer;

int main(int argc, const char * argv[]) {
    char path[] = "/Users/Guti/Developer/CS50/C_Programming_Perry/ch28-files/writing/writing/library.txt";
    
    filePointer = fopen(path, "a");
    
    if (!filePointer)
    {
        printf("Error opening the file!\n");
        exit(1);
    }
    
    // Adding content to file
    fprintf(filePointer, "\nMore books to come!\n");
    
    fclose(filePointer);
    
    return 0;
}

/*
 * By now you know how to create, read, and write sequential files to disk.
 *
 * When reading from a file, check for the end-of-file condition to ensure
 * that you don't try to read past the end of the file.
 *
 * Use built-in function `feof` to check for the end-of-file
 * Don't read from a file without first checking if you have reaached the end
 * first.
 *
 */




























