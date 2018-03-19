//
//  main.c
//  arraypointers
//
//  Created by Guti on 3/17/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    int vals[5] = { 10, 20, 30, 40, 50 };
    
    printf("vals points to  : %p\n", vals);
    printf("&vals           : %p\n", &vals);
//    printf("%p\n", *vals);
//    printf("%d\n", *vals);
//    printf("\n");
//    // Address of individual array elements
    printf("&vals[0]        : %p\n", &(vals[0]));
    printf("%p\n", &(vals[1]));
    printf("%p\n", &(vals[2]));
    printf("%p\n", &(vals[3]));
    printf("%p\n", &(vals[4]));
    printf("%p\n", &(vals[5]));
    printf("\n");
    // Pointer arithmetic - addresses
    printf("%p\n", (vals + 0));
    printf("%p\n", (vals + 1));
    printf("%p\n", (vals + 2));
    printf("%p\n", (vals + 3));
    printf("%p\n", (vals + 4));
    printf("%p\n", (vals + 5));
    printf("\n");
    // Pointer arithmetic - dereferencing - hex format
    printf("%p\n", *(vals + 0));
    printf("%p\n", *(vals + 1));
    printf("%p\n", *(vals + 2));
    printf("%p\n", *(vals + 3));
    printf("%p\n", *(vals + 4));
    printf("%p\n", *(vals + 5));
    printf("\n");
    // Pointer arithmetic - dereferencing - digit format
    printf("%d\n", *(vals + 0));
    printf("%d\n", *(vals + 1));
    printf("%d\n", *(vals + 2));
    printf("%d\n", *(vals + 3));
    printf("%d\n", *(vals + 4));
    printf("%d\n", *(vals + 5));
    printf("\n");
    printf("sizeof(int): %d\n", sizeof(int));
    
    // Characters and pointers
    char name[5] = "Zen"; // Pointer constant -  name points to 'Z'
    char* pName = "Zen"; // Pointer variable - pName points to 'Z'
    
    printf("\nname points to  : %p\n", name);
    printf("pName points to : %p\n", pName);
    
    printf("Address of name : %p\n", &name);
    printf("Address of pName: %p\n", &pName);
    
    // point to a different string
    strcpy(name, "Guti");
    pName = "Guti";
    
    printf("\nname : %s\npName: %s\n", name, pName);
    
    return 0;
}
/*
 * Pointer variables are mutable. You can modify what they point to.
 * Pointer constants are immutable. You cannot modify what they point to.
 *
 * Pointer variable to a character/string points to the first character.
 * %s and all string functions work with pointer variables because a string
 * literal initialization automatically adds the null zero to the end of the
 * string('\0').
 *
 * TIP: String assignment - with pointers
 * C puts all your program's string literals into memory somewhere and then
 * 'replaces' them in your program with their addresses.
 * C is not really putting "The string" 'into' the pointer variable because
 * the pointer variable can only hold addresses.
 */
