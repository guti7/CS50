//
//  main.c
//  testAnalyzeHand
//
//  Created by Guti on 3/19/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

#define SUITS 4
#define RANKS 13
int  analyzeHand(int ranksInHand[], int ranksInSuit[]);

int main(int argc, const char * argv[]) {
    
    int winnings;
    
    int ranks[RANKS] = { 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0,}; //(A - K)
    int suits[SUITS] = { 1, 2, 1, 1}; // c d h s
    
    
    winnings = analyzeHand(ranks, suits);
    
    printf("winnigs: %d\n", winnings);
    
    
    return 0;
}

// Determines the value of the final hand to report winnings
int analyzeHand(int ranksInHand[], int suitsInHand[])
{
    int consecutive_num = 0;
    int rank, suit;
    int straight = false;
    int flush = false;
    int four = false; // of a kind
    int three = false; // of a kind
    int pairs = 0;
    
    // Find if you have all (5 cards) of the same suit - flush
    for (suit = 0; suit < SUITS; suit++)
    {
        if (suitsInHand[suit] == 5)
        {
            flush = true;
        }
    }

    
    // Find if you have all (5 cards') ranks in consecutive order - straight
    
    rank = 0;
    // get to the first non zero count of a rank

    while(ranksInHand[rank] == 0)
    {
        rank++;
    }

    for (; rank < RANKS && ranksInHand[rank]; rank++)
    {
        consecutive_num++;
    }
    
    if (consecutive_num == 5)
    {
        straight = true;
    }
    
    // Find other winnnig hand of cards - 2 pairs, 3 of kind, 4 of kind (same ranks)
    for (rank = 0; rank < 13; rank++)
    {
        if (ranksInHand[rank] == 4)
        {
            four = true;
        }
        if (ranksInHand[rank] == 3)
        {
            three = true;
        }
        if (ranksInHand[rank] == 2)
        {
            pairs++;
        }
        
    }
    
    printf(" ********** TEST hand types **********\n");
    printf("flush: %d\n", flush);
    printf("straigth: %d\n", straight);
    printf("four: %d\n", four);
    printf("three: %d\n", three);
    printf("pairs: %d\n", pairs);
    
    
    // Winnings depending on the final hand
    printf("\n");
    if (straight && flush)
    {
        printf("Straight flush\n\n");
        return 20;
    }
    else if (four)
    {
        printf("Four of kind\n\n");
        return 10;
    }
    else if (three && pairs == 1)
    {
        printf("Full house\n\n");
        return 8;
    }
    else if (flush)
    {
        printf("Flush\n\n");
        return 5;
    }
    else if (straight)
    {
        printf("Flush\n\n");
        return 4;
    }
    else if (three)
    {
        printf("Three of a kind\n\n");
        return 3;
    }
    else if (pairs == 2)
    {
        printf("Two pairs\n\n");
        return 2;
    }
    else if (pairs == 1)
    {
        printf("Pair\n\n");
        return 1;
    }
    else
    {
        printf("High Card\n\n");
        return 0;
    }
}
