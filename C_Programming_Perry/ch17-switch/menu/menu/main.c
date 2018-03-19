//
//  main.c
//  menu
//
//  Created by Guti on 3/15/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 17.1 ABGC 3rd, Perry

// The program presents a menu, get's a user's choice, then uses the `switch`
// statement to execute code based on the choice. Sample code for a menu
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int choice;
    
    printf("What do you want to do?\n");
    printf("1. New contact\n");
    printf("2. Edit contact\n");
    printf("3. Call\n");
    printf("4. Text\n");
    printf("5. Exit\n");
    
    do
    {
        printf("Enter your choice: ");
        scanf(" %d", &choice);
        
        switch (choice)
        {
            case (1):
                printf("Add a new contact\n");
                break;
            case (2):
                printf("Edit an existing contact\n");
                break;
            case (3):
                printf("Call a contact or number\n");
                break;
            case (4):
                printf("Text a contact or number\n");
                break;
            case (5):
                exit(1); // Exits the program early
            default:
                printf("%d is not a valid choice.\n", choice);
                printf("Try again.\n");
                break;
        }
    } while (choice < 1 || choice > 5);
    
    return 0;
}

/*
 * Do not use a `float` or `double` for the switch test.
 * The variable can either be an integer or a character variable.
 *
 * The `break` statement ensures that only one case executes.
 * The `switch` would 'fall through' to the other cases without it.
 */
