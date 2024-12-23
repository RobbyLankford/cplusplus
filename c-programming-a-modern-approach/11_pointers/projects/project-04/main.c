#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

void read_cards(int num_in_rank[], int num_in_suit[]);
void analyze_hand(int num_in_rank[], int num_in_suit[], bool *straight, bool *flush, bool *four, bool *three, int *pairs);
void print_result(const bool *straight, const bool *flush, const bool *four, const bool *three, const int *pairs);

int main(void)
{


    return 0;
}

void read_cards(int num_in_rank[], int num_in_suit[])
{
    bool card_exists[NUM_RANKS][NUM_SUITS];
    char c, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    for (rank = 0; rank < NUM_RANKS; rank++)
    {
        num_in_rank[rank] = 0;
        for (suit = 0; suit < NUM_SUITS; suit++)
            card_exists[rank][suit] = false;
    }

    for (suit = 0; suit < NUM_SUITS; suit++)
        num_in_suit[suit] = 0;
    
    while (cards_read < NUM_CARDS)
    {
        bad_card = false;

        printf("Enter a card: ");
        rank_ch = getchar();

        switch(rank_ch)
        {
            case '0':           exit(EXIT_SUCCESS);
            case '2':           rank = 0; break;
            case '3':           rank = 1; break;
            case '4':           rank = 2; break;
            case '5':           rank = 3; break;
            case '6':           rank = 4; break;
            case '7':           rank = 5; break;
            case '8':           rank = 6; break;
            case '9':           rank = 7; break;
            case 't': case 'T': rank = 8; break;
            case 'j': case 'J': rank = 9; break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
            
            default: bad_card = true;
        }

        suit_ch = getchar();
        switch(suit_ch)
        {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;

            default: bad_card = true;
        }

        while ((c = getchar()) != '\n')
            if (c != ' ') bad_card = true;
        
        if (bad_card)
            printf("Bad card; Ignored.\n");
        else if (card_exists[rank][suit])
            printf("Duplicated card; Ignored.\n");
        else
        {
            num_in_rank[rank]++;
            num_in_suit[suit]++;
            card_exists[rank][suit] = true;
            cards_read++;
        }
    }
}

void analyze_hand(int num_in_rank[], int num_in_suit[], bool *straight, bool *flush, bool *four, bool *three, int *pairs)
{
    int num_consec = 0;
    int rank, suit;

    *straight = false;
    *flush = false;
    *four = false;
    *three = false;
    *pairs = 0;

    // Check for flush
    for (suit = 0; suit < NUM_SUITS; suit++)
    {
        if (num_in_suit[suit] == NUM_CARDS)
            *flush = true;
    }

    // Check for straight
    rank = 0;
    while (num_in_rank[rank] == 0) rank++;

    for ( ; rank < NUM_RANKS && num_in_rank[rank] > 0; rank++)
        num_consec++;
    
    if (num_consec == NUM_CARDS)
    {
        *straight = true;
        return;
    }

    // Check for 4-of-a-kind, 3-of-a-kind, or pairs
    for (rank = 0; rank < NUM_RANKS; rank++)
    {
        if (num_in_rank[rank] == 4)
            *four = true;
        
        if (num_in_rank[rank] == 3)
            *three = true;
        
        if (num_in_rank[rank] == 2)
            *pairs++;
    }
}

void print_result(const bool *straight, const bool *flush, const bool *four, const bool *three, const int *pairs)
{
    if (*straight && *flush)
        printf("Straight Flush");
    else if (*four)
        printf("Four of a kind");
    else if (*three && *pairs == 1)
        printf("Full House");
    else if (*flush)
        printf("Flush");
    else if (*straight)
        printf("Straight");
    else if (*three)
        printf("Three of a kind");
    else if (*pairs == 2)
        printf("Two Pairs");
    else if (*pairs == 1)
        printf("One Pair");
    else
        printf("High Card");
    
    printf("\n\n");
}