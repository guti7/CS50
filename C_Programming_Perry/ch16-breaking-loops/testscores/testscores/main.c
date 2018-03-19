//
//  main.c
//  testscores
//
//  Created by Guti on 3/15/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 16.1 ABGC 3rd, Perry

// Aks users to input 25 test grades for a class, then computes the average
// test grade. You can enter -1 as a grade if you have fewer than 25 students

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int numTest;
    float currGrade, average, total = 0.0;
    
    // Aks for students' grade
    for (numTest = 0; numTest < 25; numTest++)
    {
        // get the test scores
        printf("Next student's test score? ");
        scanf(" %f", &currGrade);
        
        if (currGrade < 0.0)
        {
            break;
        }
        total += currGrade;
    }
    
    average = total / numTest; // automatic float conversiom
    
    printf("The average is %.1f%%.\n", average);
    
    return 0;
}
/*
 * `break` and `continue` statements let you control loops for those special
 * occassions when you want to quit a loop early or repeat a loop sooner
 * than it would normally repeat.
 *
 * `break` always happens inside a loop. Its purpose is to terminate
 * the current loop.
 */
