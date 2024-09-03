#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    int wins = 0, losses = 0;
    char c;

    srand((unsigned) time(NULL));

    while (true)
    {
        if (play_game())
            wins++;
        else
            losses++;
        
        printf("Play again? ");
        scanf(" %c", &c);

        if (c != 'y' && c != 'Y')
            break;
        
        printf("\n");
    }

    printf("\nWins: %2d Losses: %2d\n", wins, losses);

    return 0;
}


int roll_dice(void)
{
    // Randomly generate 0-5 twice, so add 2 to the sum
    return (rand() % 6) + (rand() % 6) + 2;
}

bool play_game(void)
{
    int dice = roll_dice();
    int point;

    printf("You rolled: %d\n", dice);

    // Player wins if rolls 7 or 11 on first roll
    if (dice == 7 || dice == 11)
    {
        printf("You win!\n\n");
        return true;
    }

    // Player loses if rolls 2, 3, or 12 on first roll
    if (dice == 2 || dice == 3 || dice == 12)
    {
        printf("You lose!\n\n");
        return false;
    }

    printf("Your point is %d\n", dice);

    // Continue rolling
    while (dice = roll_dice())
    {
        printf("You rolled: %d\n", dice);

        // Win if roll point value
        if (dice == point)
        {
            printf("YOu win!\n\n");
            return true;
        }

        // Lose if roll 7
        if (dice == 7)
        {
            printf("You lose!\n\n");
            return false;
        }
    }
}