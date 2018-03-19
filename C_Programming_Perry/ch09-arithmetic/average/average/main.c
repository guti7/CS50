//
//  main.c
//  average
//
//  Created by Guti on 3/13/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Program 9.3, ABGC 3rd edition, Perry

// The program calculates the average of four grades.

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int grade1, grade2, grade3, grade4;
    float averageGrade, gradeDelta, percentDiff;
    
    // Multiple assignment
    grade1 = grade3 = 88;

    grade2 = 79;
    
    // Prompt user for fourth grade
    printf("What did you get on the fourth test (0 - 100)? ");
    scanf(" %d", &grade4);
    
    // average grade
    averageGrade = (grade1 + grade2 + grade3 + grade4) / 4;
    printf("Your average is %.1f.\n", averageGrade);
    
    gradeDelta = 95 - averageGrade;
    percentDiff = 100 * (gradeDelta / 95);
    printf("Your grade is %.1f points lower that the ", gradeDelta);
    printf("top grade in the class (95)\n");
    printf("You are %.1f percent behind that grade!\n", percentDiff);
    
    return 0;
}
