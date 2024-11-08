/* Deal from a standard deck of cards */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define SUITS 4
#define RANKS 13

int main(void)
{
    bool in_hand[SUITS][RANKS] = {false};
    int num_cards, rank, suit;

    const char *rank_code[] = {"Two", "Three", "Four", "Five",
                               "Six", "Seven", "Eight", "Nine", "Ten"
                               "Jack", "Queen", "King", "Ace"};
    
    const char *suit_code[] = {"Clubs", "Diamonds", "Hearts", "Spades"};

    srand((unsigned) time(NULL));

    printf("Enter number of cards in hand: ");
    scanf("%d", &num_cards);

    printf("Your hand:\n");
    while (num_cards > 0)
    {
        suit = rand() % SUITS;
        rank = rand() % RANKS;

        if (!in_hand[suit][rank])
        {
            in_hand[suit][rank] = true;
            num_cards--;

            printf("%s of %s\n", rank_code[rank], suit_code[suit]);
        }
    }

    return 0;
}
