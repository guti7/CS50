//
//  main.c
//  letters
//
//  Created by Guti on 3/18/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 29.1 ABGC 3rd, Perry

// Opens a file named 'letters.txt' and prints the alphabet in the file
// Reads the data from file and prints it to screen backwards
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COUNT 26
FILE * filePointer;

int main(int argc, const char * argv[]) {
    
    char letter;
    int i;
    
    char path[110] = "/Users/Guti/Developer/CS50/C_Programming_Perry/ch29-random-files/letters/letters/";
    char fileName[] = "letters.txt";
    char *filePath = strcat(path, fileName);
    
    filePointer = fopen(filePath, "w+");
    
    if (!filePointer) // filePointer == 0
    {
        printf("Error--File could not be opened\n");
        exit(1);
    }
    
    for (letter = 'A'; letter <= 'Z'; letter++)
    {
        fputc(letter, filePointer);
    }
    printf("Wrote letters 'A' through 'Z' in %s.\n", fileName);
    
    // Reading the file backwards
    fseek(filePointer, -1, SEEK_END); // minus 1 byte from the end - EOF
    printf("File contents read backwards:\n");
    for (i = COUNT; i > 0; i--)
    {
        letter = fgetc(filePointer);
        fseek(filePointer, -2, SEEK_CUR);
        printf("current letter: %c\n", letter);
    }
    
    // Close all files
    fclose(filePointer);
    
    return 0;
}

/*
 * Random files let you skip around in the file, reading and writing
 * at any point you access.
 *
 * In C, a file is a stream of bytes, and the way you access it isn't linked
 * to any format of the file.
 *
 * Random-Access `fopen` modes - "r+", "w+", "a+",
 * All write and read to and from the file, but they differ on what you need
 * to with the file:
 * "r+" if the file already exists,
 * "w+" overwrites or creates a file,
 * "a+" appends to the end of file,
 *
 * `fseek` lets you move around within a file by moving the file pointer
 * so you read and write at nonsequential places.
 * `fseek (filePointer, longValue, origin)`
 * use only on random access files, i.e. files you open with '+' access
 *
 * One of the advantages of random access files is that you can write and reread
 * the data just added without having to close and open the file.
 *
 *
 */





















