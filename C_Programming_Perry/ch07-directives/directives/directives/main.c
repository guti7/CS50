//
//  main.c
//  Directives
//
//  Created by Guti on 3/11/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

/*
 * Making your programs more powerful with 'preprocessor directives'
 * Preprocessor directives don't cause anything to happen at runtimee.
 * They work during the compiling phase of the program.
 *
 * It works as a file merge: The contents of the filename specified replaces
 * the statement where the `#include` happens.
 *
 * The filename is often a header file ending with extension '.h'
 * Use <> when the filename is part of the C libraries
 * Use "" when you are the author of the header file.
 *
 * "" causes the compiler to begin search for filename staring with current
 * directory.
 *
 * The `#define` directive lets you give names to literals, defined as constants
 * NOTE: Constants defined with `#define` are not variables.
 *
 *  `#define _CONSTANTNAME_ _constantDefinition_`
 *
 * Defined constants are useful for values that remain the same during one
 * program execution, but still might need to change with each execution.
 *
 * 
 */

// Chapter 7: Absolute Beginner's Guide to C, 3rd Edition

// The program lists three kids and their school supply needs,
// as well as cost to buy the supplies

#include <stdio.h>
#include <string.h>
#include "header.h"

int main(int argc, const char * argv[]) {
    int age;
    char childName[14] = "Thomas";
    
    printf("\n%s have %d kids.\n", FAMILY, KIDS);
    
    age = 11;
    printf("The oldest, %s, is %d.\n", childName, age);
    
    strcpy(childName, "Christopher");
    age = 6;
    printf("The middle boy, %s, is %d.\n", childName, age);
    
    age = 3;
    strcpy(childName, "Benjamin");
    printf("The youngest, %s, is %d.\n", childName, age);
    
    return 0;
    
}































