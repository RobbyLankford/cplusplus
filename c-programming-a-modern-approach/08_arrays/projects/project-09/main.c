/* Random walk across an array */

#include <stdio.h>
#include <stdlib.h> // for srand() and rand()
#include <time.h> // for time()

#define ROWS 10
#define COLS 10

int main(void)
{
    char letter = 'A';
    char grid[ROWS][COLS] = {0};
    int i = 0, j = 0;
    int move;

    srand((unsigned) time(NULL));

    // Start A at 0,0
    grid[i][j] = letter;
    letter++; // Increments A to B

    while (letter <= 'Z')
    {
        move = rand() % 4;

        // Move up
        if (move == 0)
        {
            // Cannot move up if at the top
            if (i == 0)
                continue;
            
            // Cannot backtrack
            if (grid[i - 1][j] != 0)
                continue;
            
            i--;
        }

        // Move down
        if (move == 1)
        {
            // Cannot move down if at the bottom
            if (i == ROWS - 1)
                continue;
            
            // Cannot backtrack
            if (grid[i + 1][j] != 0)
                continue;
            
            i++;
        }

        // Move right
        if (move == 2)
        {
            // Cannot move right if at the edge
            if (j == COLS - 1)
                continue;
            
            // Cannot backtrack
            if (grid[i][j + 1] != 0)
                continue;
            
            j++;
        }

        // Move left
        if (move == 3)
        {
            // Cannot move left if at the edge
            if (j == 0)
                continue;
            
            if (grid[i][j - 1] != 0)
                continue;
            
            j--;
        }

        grid[i][j] = letter;
        letter++;
    }

    // Print out grid
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (grid[i][j] == 0)
                grid[i][j] = '.';
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}
