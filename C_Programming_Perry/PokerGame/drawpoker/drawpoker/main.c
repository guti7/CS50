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
void getFinalHand(int cardRank[], int cardSuit[], int finalRank[],
                  int finalSuit[], int ranksInHand[], int suitsInHand[]);

int  analyzeHand(int ranksInHand[], int ranksInSuit[]);
void printHand(int cardRank[], int cardSuit[]);
void startNewRound(int * ranks, int * suits);

int main(int argc, const char * argv[]) {
    
    int bet;
    int bank = CREDITS;
    int cardRank[COUNT]; // one of thirteen values (Aces-King)
    int cardSuit[COUNT]; // one of four values (Clubs, Diamonds, Hearts, Spades)
    
    int finalRank[COUNT];
    int finalSuit[COUNT];
    int ranksInHand[RANKS]; // used to evaluate winnings
    int suitsInHand[SUITS]; // used to evaluate winnings
    
    int winnings;
    time_t t;
    
    char playAgain;
    
    // Start the game
    printGreeting();
    
    // Play a round
    do
    {
        
        // Clear up previous round results
        startNewRound(ranksInHand, suitsInHand);
        
        bet = getBet();
        
        srand((uint)time(&t)); // seed rand for each new round
        getFirstHand(cardRank, cardSuit);
        printf("\n    * First hand *\n");
        printHand(cardRank, cardSuit);
        
        
        // finalize hand
        getFinalHand(cardRank, cardSuit, finalRank, finalSuit, ranksInHand, suitsInHand);
        printf("\n   *** Final hand ***\n");
        printHand(finalRank, finalSuit);
        
        // Winnings
        winnings = analyzeHand(ranksInHand, suitsInHand);
        printf("  **** ¡Vencedor de a %d! ****\n", bet * winnings);
        
        bank = bank - bet + (bet * winnings);
        printf("\n ***** Banco: $%d *****\n", bank);
        
        // Play Again?
        printf("\n\tDoble o Rajas? ");
        scanf(" %c", &playAgain);
        
    } while (toupper(playAgain) == 'Y');
    
    printf("😭 None of that now.\n");
    
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
// Clear up the previous round hand values
void startNewRound(int * ranks, int * suits) {
    int i;
    
    // clear ranks
    for (i = 0; i < RANKS; i++)
    {
        ranks[i] = 0;
    }
    
    // clear suits
    for (i = 0; i < SUITS; i++)
    {
        suits[i] = 0;
    }
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
            printf("Come back when you can handle the pressure 😎\n");
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
                    break;
                }
            }
            
        } while(duplicate);
    }
}

// Prints the 5 card hand
void printHand(int ranks[], int suits[])
{
    for(int i = 0; i < COUNT; i++)
    {
        char suit = getSuit(suits[i]);
        char rank = getRank(ranks[i]);
        printf("card #%d: %c%c\n", i + 1, rank, suit);
    }
    printf("\n");
}

// Gets character representing the suit
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

// Gets the character representing the rank
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

// Get final hand by asking to keep or replace a card
void getFinalHand(int ranks[], int suits[], int finalRanks[],
                  int finalSuits[], int ranksInHand[], int suitsInHand[])
{
    int i, j, duplicate;
    char suit, rank, answer;
    
    printf("   ** Doubts **\n");
    for (i = 0; i < COUNT; i++)
    {
        suit = getSuit(suits[i]);
        rank = getRank(ranks[i]);
        
        printf("Keep card #%d: %c%c? (Y/N) ", i + 1, rank, suit);
        scanf(" %c", &answer);
        
        if (toupper(answer) == 'Y')
        {
            finalRanks[i] = ranks[i];
            finalSuits[i] = suits[i];
            // Keep track of the value cards in final hand
            ranksInHand[finalRanks[i]]++;
            suitsInHand[finalSuits[i]]++;
            continue; // does it do anything special?
        }
        else if (toupper(answer) == 'N')
        {
            // get a replacement card
            duplicate = 0; // clear for every new round
            do
            {
                duplicate = 0; // clear for every new draw
                finalRanks[i] = rand() % RANKS;
                finalSuits[i] = rand() % SUITS;
                
                // Check drawn card for duplicates in hand
                for (j = 0; j < COUNT; j++)
                {
                    if (finalRanks[i] == ranks[j] && finalSuits[i] == suits[j])
                    {
                        duplicate = 1;
                        break;
                    }
                }
                
                // Check for duplicates for newly drawn cards (if any)
                if (!duplicate) { // if duplicate hasn't been found yet
                    for (j = 0; j < i; j++)
                    {
                        if(finalRanks[i] == finalRanks[j] && finalSuits[i] == finalSuits[j])
                        {
                            duplicate = 1;
                        }
                    }
                }
            
            } while (duplicate);
            
            // Update final values in for final hand
            ranksInHand[finalRanks[i]]++;
            suitsInHand[finalSuits[i]]++;
        }
    }
}

// Determines the value of the final hand to report winnings
int analyzeHand(int ranks[], int suits[])
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
        if (suits[suit] == 5)
        {
            flush = true;
        }
    }
    
    
    // Find if you have all (5 cards') ranks in consecutive order - straight
    
    rank = 0;
    // get to the first non zero count of a rank
    while(ranks[rank] == 0)
    {
        rank++;
    }
    // Check if you have five cards in a sequence
    for (; rank < 13 && ranks[rank]; rank++)
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
        if (ranks[rank] == 4)
        {
            four = true;
        }
        if (ranks[rank] == 3)
        {
            three = true;
        }
        if (ranks[rank] == 2)
        {
            pairs++;
        }
        
    }
    
    
    // Winnings depending on the final hand
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




















