//
//  main.c
//  submenu
//
//  Created by Guti on 3/15/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 17.2 ABGC 3rd, Perry

// Presents a menu of choices, and then presents a secodary menu of choices
// After the user's first choice
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    // Variables
    int choice1;
    int choice2;
    
    // Decade choices for menu
    printf("What do you want to see?\n");
    printf("1. 1980's\n");
    printf("2. 1990's\n");
    printf("3. 2000's\n");
    printf("4. Quit\n");
    
    // Validate choices
    do
    {
        printf("Enter your choice: ");
        scanf(" %d", &choice1);
        
        switch (choice1)
        {
            case 1: // 1980's
                break;
            case 2:
                // Display 1990s menu
                printf("\n\n1990s\nWhat would you like to see?\n");
                printf("1. Baseball\n");
                printf("2. Movies\n");
                printf("3. Presidents\n");
                printf("4. Quit\n");
                
                printf("Enter your choice: ");
                scanf(" %d", &choice2);
                
                // Perform actions for choice2
                if (choice2 == 1)
                {
                    printf("World series champions in the 1990s:...\n");
                    break;
                }
                else if (choice2 == 2)
                {
                    printf("Oscar-Winnig movies in 1990s:...\n");
                    break;
                }
                else if (choice2 == 3)
                {
                    printf("Presidents in the 1990s:...\n");
                    break;
                }
                else if (choice2 == 4)
                {
                    exit(2); // terminate the program from within submenu
                }
                else
                {
                    printf("Sorry, that is not a valid choice\n");
                    break;
                }
            case 3: // 2000s
                break;
            case 4:
                exit(1);
            default:
                printf("%d is not a valid choice.\n", choice1);
                printf("Try again.\n");
                break;
        }
    } while ( (choice1 < 1) || (choice1 > 4));
    
    
    return 0;
}
/*
 * Nesting `switch` statements is not a good idea, particularly when the
 * `default` choices start overlapping. It confuses the compiler, and the
 * program will not run.
 *
 * Use `switch` when your program needs to analyze a user's response to a
 * menu and execute sections of code accordingly.
 *
 */
