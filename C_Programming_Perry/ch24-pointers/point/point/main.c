//
//  main.c
//  point
//
//  Created by Guti on 3/17/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 24.1 ABGC 3rd, Perry

// Demonstrates pointers by declaring, initializing, getting addresses, and
// dereferencing.
#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    
    // Regular variables and types
    int kids;
    float price;
    char code;
    float total;
    
    // Pointer variables with pointer types
    // no assignment - null pointers
    int* pKids = NULL;
    float* pPrice;
    char* pCode;
    
    price = 17.50;
    pPrice = &price;
    
    printf("%p\n", pKids); // NULL - 0x0 - '\n'
    printf("%p\n", pPrice); // pPrice and &price should equal - same address
    printf("%p\n", &price);
    printf("%f\n", *pPrice); // *pPrice and price point to the same memory location
    
    printf("\nHow many kids are you taking to the amusemnt park? ");
    scanf(" %d", &kids);
    
    printf("Do you have a discount ticket?\n");
    printf("Enter (E)mplyee, (S)av-More, (N)o discount: ");
    scanf(" %c", &code);
    
//    pCode = code; // incorrect assignment! Types don't match
    pCode = &code;
    pKids = &kids;
    
    printf("\nVariable Handling with Pointers:\n\n");
    
    printf("You've got %d %s...\n", *pKids, *pKids != 1 ? "kids" : "kid");
    
    *pCode = toupper(*pCode);
    switch (*pCode)
    {
        case 'E':
        {
            printf("Employee discount: 50%%\n");
            total = 0.50 * *pKids * *pPrice;
            break;
        }
        case 'S':
            printf("Coupon discount: 20%%\n");
            total = 0.80 * *pKids * *pPrice;
            break;
        default: // Including 'N'%
            printf("Full price on tickets: $%.2f\n", *pPrice);
            total = *pKids * *pPrice;
            break;
    }
    
    printf("Total: $%.2f\n", total);
    return 0;
}
/*
 * A pointer variable is a variable that holds the location of another variable.
 * You refer to the pointed-to variable by 'dereferencing' the pointer.
 *
 * Arrays are pointers in disguise.
 *
 * `&` produces the address of a vriable.
 * `*` used to define a pointer variable, and 'dereference' the pointer
 *
 */
