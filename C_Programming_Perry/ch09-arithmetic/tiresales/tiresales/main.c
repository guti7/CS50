//
//  main.c
//  tiresales
//
//  Created by Guti on 3/13/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 9.2, ABGC 3rd edition, Perry
//
// This program asks the user for anumber of tires and price per tire.
// It calculates total price, adding sales tax.

#include <stdio.h>

// Sales tax rate
#define SALESTAX 0.07

int main(int argc, const char * argv[]) {
    
    // Variables
    int numTires;
    float tirePrice, beforeTax, netSales;
    
    // Prompt user for number of tires to purchase and price per tire
    printf("How many tires did you purchase? ");
//    scanf(" %d", &numTires);
    scanf(" %d", &numTires);
    printf("What was the cost per tire? $");
    scanf(" %f", &tirePrice);
    
    // Compute totals
    beforeTax = tirePrice * numTires;
    netSales = beforeTax + (beforeTax * SALESTAX);
    
    printf("You spent $%.2f on your tires.\n\n", netSales);
    
    return 0;
}
