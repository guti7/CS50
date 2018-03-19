//
//  main.c
//  putchar
//
//  Created by Guti on 3/15/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 18.1 ABGC 3rd, Perry

// Demonstrates the use of `putchar()`
#include <stdio.h>
#include <string.h> // strlen()

int main(int argc, const char * argv[]) {
    int i, len;
    char message[] = "C is fun";
    
    len = strlen(message);
    for (i = 0; i < len; i++)
    {
        putchar(message[i]);
    }
    putchar('\n');
    return 0;
}
