//
//  main.c
//  dowhile
//
//  Created by Guti on 3/15/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 14.2, ABGC, 3rd, Perry

// Multiplies two numbers and displays the result until the user stops the program
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float num1, num2, result;
    char choice;
    
    do
    {
        printf("Enter your first number to multiply: ");
        scanf(" %f", &num1);
        
        printf("Enter your 2nd number to multiply: ");
        scanf(" %f", &num2);
        
        result = num1 * num2;
        printf("%.2f times %.2f equals %.2f\n\n", num1, num2, result);
        
        // Prompt to stop program
        printf("Do you want to multiply another pair? (Y/N): ");
        scanf(" %c", &choice);
        
    } while (choice != 'N' && choice != 'n');
    
    return 0;
}

/*
 * The `do...while` statement is similar to the `while` except it is guaranteed
 * to execute at least once, since the condition is checked at the end of the loop
 */
