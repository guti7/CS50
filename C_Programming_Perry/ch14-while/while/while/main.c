//
//  main.c
//  while
//
//  Created by Guti on 3/15/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 14.1 ABGC, 3rd, Perry

// Increases a counter, printing updates, using a while loop

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int counter = 0;
    
    while (counter < 5)
    {
        printf("counter: %d\n", ++counter);
    }
    
    while (counter > 1)
    {
        printf("counter: %d\n", --counter);
    }
    
    return 0;
}
