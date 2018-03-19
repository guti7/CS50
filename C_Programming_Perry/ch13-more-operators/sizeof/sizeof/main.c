//
//  main.c
//  sizeof
//
//  Created by Guti on 3/15/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i = sizeof(int);
    int f = sizeof(float);
    char name[] = "Ruth Claire";
    int j = 7;
    
    printf("size of i: %d\n", i);
    printf("size of f: %d\n", f);
    printf("size of name: %lu\n", sizeof(name));
    printf("size of j: %lu\n", sizeof(j));
    
    return 0;
}

/*
 * `sizeof` operator finds the number of memory locations it takes to store
 * values of any data type, it also works on variables.
 * The result depends on your machine, and C compiler you are using.
 */
