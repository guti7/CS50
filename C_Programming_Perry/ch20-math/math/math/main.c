//
//  main.c
//  math
//
//  Created by Guti on 3/16/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 20.1 ABGC 3rd, Perry

// Demonstrates the math functions from `math.h`
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    printf("Math problem examples:\n");
    
    printf("Square roots\n");
    printf("√%.1f = %.1f\n", 49.0, sqrt(49.0));
    printf("√%.1f = %.1f\n", 149.0, sqrt(149.0));
    printf("√%.1f = %.1f\n", .1490, sqrt(.1490));
    
    printf("\nPowers\n");
    printf("%.1f ^ %.1f = %.1f\n", 4.0, 3.0, pow(4.0, 3.0));
    printf("%.1f ^ %.1f = %.1f\n", 7.0, 5.0, pow(7.0, 5.0));
    
    printf("\nTrigonometry\n");
    printf("cos(60º) = %.3f\n", cos(60 * M_PI / 180.0));
    printf("tan(45º) = %.3f\n", tan(45 * M_PI / 180.0));
    printf("atan(45º) = %.3f\n", atan(45 * M_PI / 180.0));
    
    printf("\nLogarithm\n");
    printf("e ^ 2 = %.3f\n", exp(2));
    printf("ln(5) = %.3f\n", log(5)); // why is it not called `ln`?
    printf("log(5) = %.3f\n", log10(5));
    
    printf("\n");
    
    return 0;
}
