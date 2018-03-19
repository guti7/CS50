//
//  main.c
//  customers
//
//  Created by Guti on 3/16/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 22.1 ABGC 3rd, Perry

// Maintains a list of customers and their balance
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int counter;
    int idSearch; // customer id
    int found = 0; // customer id flag
    
    // Parallel arrays for customers and respective balance
    int customerIDs[5]       = {  313,   453,   502,    101,  892 };
    float customerBalance[5] = { 0.00, 45.43, 71.23, 301.56, 9.08 };
    
    // Get customer id to search
    printf("*** Customer Balance Lookup ***\n");
    printf("Enter id number: ");
    scanf(" %d", &idSearch);
    
    // Search customer ids
    for (counter = 0; counter < 5; counter++)
    {
        if (idSearch == customerIDs[counter])
        {
            found = 1;
            break;
        }
    }
    
    // Check balance
    if (found)
    {
        float balance = customerBalance[counter];
        printf("Customer %d balance: $%.2f\n", idSearch, balance);
        if (balance > 100.00)
        {
            printf("No additional credit!\n");
        }
        else
        {
            printf("The credit is good.\n");
        }
        
    }
    else
    {
        printf("*** Incorrect customer ID ***\n");
        printf("ID #%d not found.\n", idSearch);
    }
    
    return 0;
}
