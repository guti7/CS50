//
//  main.c
//  getchar
//
//  Created by Guti on 3/15/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 18.2 ABGC 3rd, Perry

// Demonstrates the use of `getchar()`
#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    int i;
    char message[25];
    
    printf("Type up to 25 characters and press enter...\n");
    
    for (i = 0; i < 25; i++)
    {
        message[i] = getchar();
        
        if (message[i] == '\n') // check for length less than 25
        {
            i--; // don't include the return character
            break;
        }
    }
    
    putchar('\n'); // one line break after the loop is done
    
    // display saved input message
    for (; i >= 0; i--)
    {
        putchar(message[i]);
    }
    putchar('\n');
    
    return 0;
}
