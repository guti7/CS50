//
//  main.c
//  changer
//
//  Created by Guti on 3/19/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 29.2 ABGC 3rd, Perry
// Opens existing file, makes some changes, and then prints file's contents
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE * filePointer; // Global access

int main(int argc, const char * argv[]) {
    
    char character;
    int i;
    
    char path[120] = "/Users/Guti/Developer/CS50/C_Programming_Perry/ch29-random-files/letters/letters/";
    char *fileName = "letters.txt";
    
    char * filePath = strcat(path, fileName);
    filePointer = fopen(filePath, "r+");
    
    if (!filePointer)
    {
        printf("Error--Could not open file\n");
        exit(1);
    }
    
    printf("Which letter would you like to change? (1-26) ");
    scanf(" %d", &i);
    
    // Move file pointer to the ith character
    fseek(filePointer, i - 1, SEEK_SET);
    
    fputc('*', filePointer);
    
    // Print the file to screen
    // Reposition file pointer to the start of the file
    fseek(filePointer, 0, SEEK_SET);
    printf(" **** File contents ****\n");
    for (i = 0; i < 26; i++)
    {
        character = fgetc(filePointer);
        printf("next char: %c\n", character);
    }
    
    // Close open files
    fclose(filePointer);
    
    return 0;
}

























