//
//  main.c
//  drawpoker
//
//  Created by Guti on 3/19/18.
//  Copyright © 2018 ZenG. All rights reserved.
//

// Poker Program: Appendix B Absolute Beginner's Guide to C, 3rd Edition, Perry

/*
 * Plays draw poker. User can play indefinitely, betting between 1 and 5.
 * They are dealt 5 cards and get to choose what to keep and what to replace,
 * The new hand is reviewed and payout is given.
 */
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>

#define COUNT 5
#define RANKS 13
#define SUITS 4

// Prototypes
void printGreeting(void);
int  getBet(void);
char getSuit(int suit);
char getRank(int rank);
void getFirstHand(int cardRank[], int cardSuit[]);
void gerFinalHand(int cardRank[], int cardSuit[], int finalRank[],
                  int finalSuit[], int ranksInHand[], int suitsInHand[]);

int  analyzeHand(int ranksInHand[], int ranksInSuit[]);

int main(int argc, const char * argv[]) {
    
    int bet;
    int bank = 100;
    int i;
    int cardRank[COUNT]; // one of thirteen values (Aces-King)
    int cardSuit[COUNT]; // one of four values (Clubs, Diamonds, Hearts, Spades)
    
    int finalRank[COUNT];
    int finalSuit[COUNT];
    int ranksInHand[RANKS]; // used to evaluate the final hand
    int suitsInHand[SUITS]; // used to evaluate the final hand
    
    int winnings;
    time_t t;
    
    char suit, rank, playAgain; // stillPlay
    
    return 0;
}
