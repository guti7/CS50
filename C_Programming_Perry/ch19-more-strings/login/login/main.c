//
//  main.c
//  login
//
//  Created by Guti on 3/16/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 19.1 ABGC 3rd, Perry
// Asks the user for a username and password. Checks for a valid format
// password containing an uppercase letter, lowercase letter, and a digit.

#include <stdio.h>
#include <string.h> // `strlen`
#include <ctype.h> // `isdigit`, `isupper`, `islower`

int main(int argc, const char * argv[]) {
    
    int i;
    int hasUpper, hasLower, hasDigit;
    char user[25], password[25];
    
    // Initialize test variables
    hasUpper = hasLower = hasDigit = 0;
    
    printf("What is your username? ");
    scanf(" %s", user);
    
    printf("Create a password: ");
    scanf(" %s", password);
    
    // Check password for valid format
    long int len = strlen(password);
    for (i = 0; i < len; i++)
    {
        char ch = password[i];
        if (isdigit(ch))
        {
            hasDigit = 1;
            continue;
        }
        if (isupper(ch))
        {
            hasUpper = 1;
            continue;
        }
        if (islower(ch))
        {
            hasLower = 1;
        }
    }
    
    // Report results
    if ( hasDigit && hasUpper && hasLower)
    {
        printf("You have selected a strong passoword, %s\n", user);
        
    }
    else
    {
        printf("\nReview the strength of your password.\n");
        printf("We recommend you include uppercase and lowercase letters,\n");
        printf("and at least one digit.\n");
    }
    
    return 0;

}

/*
 * Character-testing functions - using `ctype.h` header file
 * Determining exactly the type of characters the program receives.
 * `isdigit`, `isalpha`, `isupper`, `islower` are common character testing functions
 *
 *
 */
