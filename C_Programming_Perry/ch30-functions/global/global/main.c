//
//  main.c
//  global
//
//  Created by Guti on 3/19/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 30.1 ABGC 3rd, Perry

// Demonstrates difference between global variables and local variables
#include <stdio.h>

// function prototype - C99
void printAgain(void);

// first global variable - defined outside a block (outside braces)
int global1 = 10;

int main(int argc, const char * argv[]) {
    
    // fist local variable
    float local1;
    local1 = 9.0;
    
    printf("global: %d, local1: %.2f\n", global1, local1);
    
    printAgain();
    
    return 0;
}

float global2 = 19.0;

void printAgain()
{
    int local2 = 5;
    
    printf("global1: %d, global2: %.2f, local2: %d\n", global1, global2, local2);
    // `local1` is not available in this scope (block). It is local to `main`
}
