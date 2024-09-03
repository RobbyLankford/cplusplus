/* Generate a Random Walk */

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);


int main(void)
{
    char grid[10][10] = {0};

    srand((unsigned) time(NULL));

    generate_random_walk(grid);
    print_array(grid);

    return 0;
}


void generate_random_walk(char grid[10][10])
{
    char letter = 'A';
    int i = 0, j = 0;
    int move;

    // Start A at (0, 0)
    grid[i][j] = letter;
    letter++;

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
            if (grid[i-1][j] != 0)
                continue;
            
            i--;
        }

        // Move down
        if (move == 1)
        {
            // Cannot move down if at the bottom
            if (i == 9)
                continue;
            
            // Cannot backtrack
            if (grid[i+1][j] != 0)
                continue;
            
            i++;
        }

        // Move right
        if (move == 2)
        {
            // Cannot move right if at the edge
            if (j == 9)
                continue;
            
            // Cannot backtrack
            if (grid[i][j+1] != 0)
                continue;
            
            j++;
        }

        // Move left
        if (move == 3)
        {
            // Cannot move left if at the edge
            if (j == 0)
                continue;
            
            if (grid[i][j-1] != 0)
                continue;
            
            j--;
        }

        grid[i][j] = letter;
        letter++;
    }
}

void print_array(char walk[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (walk[i][j] == 0)
                walk[i][j] = '.';
            
            printf("%c ", walk[i][j]);
        }

        printf("\n");
    }
}