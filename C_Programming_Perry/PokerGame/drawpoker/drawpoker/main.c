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
#define CREDITS 100

// Prototypes
void printGreeting(void);
int  getBet(void);
char getSuit(int suit);
char getRank(int rank);
void getFirstHand(int cardRank[], int cardSuit[]);
void gerFinalHand(int cardRank[], int cardSuit[], int finalRank[],
                  int finalSuit[], int ranksInHand[], int suitsInHand[]);

int  analyzeHand(int ranksInHand[], int ranksInSuit[]);
void printHand(int cardRank[], int cardSuit[]);

int main(int argc, const char * argv[]) {
    
    int bet;
    int bank = CREDITS;
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
    
    // Start the game
    printGreeting();
    
    // TODO: TEST `playAgain`
    playAgain = 'N';
    
    // Play a round
    do
    {
        bet = getBet();
        
        srand((uint)time(&t));
        getFirstHand(cardRank, cardSuit);
        printHand(cardRank, cardSuit);
        
        
    } while (toupper(playAgain) == 'Y');
    
    // TODO: TEST `bet`, random first hand
    printf("\nTest bet: %d\n", bet);
    printf("\nTEst random first hand:\n");
    printHand(cardRank, cardSuit);
    
    return 0;
}

// Game greeting and introduction
void printGreeting(void)
{
    printf("********************************************************\n");
    printf("\n\tWelcome to Clandestino\n");
    printf("\t\tSwift Draw Poker\n\n");
    printf("********************************************************\n");
    
    printf("Pay attention:\n");
    printf("Tienes %d créditos, apuesta de 1 a 5.\n", CREDITS);
    printf("Recibes 5 naipes\n");
    printf("Escoge sabiamente cual guardar y cual cambiar.\n");
    printf("¿Listo para la Ganancia?\n");
    printf("Apuestas 1 crédito\n");
    printf("Par\t\t\t\t\t 1\n");
    printf("Dos Pares\t\t\t 2\n");
    printf("Tres Unicos\t\t\t 3\n");
    printf("Regla\t\t\t\t 4\n");
    printf("Solido\t\t\t\t 5\n");
    printf("La Casa\t\t\t\t 8\n");
    printf("Cuatro\t\t\t\t10\n");
    printf("Regla Solida\t\t20\n");
    printf("¡Éntrale!\n\n");
}

// Get the user's bet between 1 and 5
int getBet(void)
{
    int bet;
    
    // valid input [0,5]
    do
    {
        printf("Bet?\n");
        printf("Enter 0 to give up: ");
        scanf(" %d", &bet);
        
        if (bet >= 1 && bet <= 5)
        {
            break;
        }
        else if (bet == 0)
        {
            printf("Come back when you can handle the pressure\n");
            exit(1);
        }
        else
        {
            printf("\n**** Only bet 1-5 or give up! ****\n\n");
        }
    } while ( (bet < 0) || (bet > 5));
    
    return bet;
}

// Deal the first five cards
void getFirstHand(int cardRank[], int cardSuit[])
{
    int i, j;
    int duplicate;
    
    for (i = 0; i < COUNT; i++)
    {
        duplicate = 0; // found a duplicate card
        do
        {
            // get a card (random rank and suit)
            cardRank[i] = rand() % RANKS; // (0 - 12) -> (2-10, J, Q, K, A)
            cardSuit[i] = rand() % SUITS; // (0 - 3)  -> (♢, ♡, ♧, ♤)
            
            // Check if drawn random card is already in hand
            for (j = 0; j < i; j++)
            {
                if (cardRank[i] == cardRank[j] && cardSuit[i] == cardSuit[j])
                {
                    duplicate = 1;
                }
            }
            
        } while(duplicate);
    }
}

// Print hand
void printHand(int ranks[], int suits[])
{
    printf("Your hand:\n");
    for(int i = 0; i < COUNT; i++)
    {
        char suit = getSuit(suits[i]);
        char rank = getRank(ranks[i]);
        printf("card #%d: %c%c\n", i + 1, rank, suit);
    }
    printf("\n");
}

char getSuit(int suit)
{
    char s;
    switch(suit)
    {
        case 0:
            s = 'C'; // Clubs
            break;
        case 1:
            s = 'D'; // Diamonds
            break;
        case 2:
            s = 'H'; // Hearts
            break;
        case 3:
            s = 'S'; // Spades
            break;
        default:
            s = 0; // Invalid
            break;
    }
    return s;
}
char getRank(int rank)
{
    char r;
    switch(rank)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            r = (rank + 1) + '0'; // convert to ASCII value from integer value
            break;
        case 9:
            r = 'T'; // Ten(10)
            break;
        case 10:
            r = 'J'; // Jack
            break;
        case 11:
            r = 'Q'; // Queen
            break;
        case 12:
            r = 'K'; // King
            break;
        case 0:
            r = 'A'; // Ace
            break;
        default:
            r = 0; // Invalid
            break;
    }
    return r;
}























