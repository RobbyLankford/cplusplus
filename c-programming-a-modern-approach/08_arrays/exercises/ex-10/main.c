/* Initialize a chess board */

#include <stdio.h>

#define ROWS 8
#define COLS 8

int main(void)
{
    char chess_board[ROWS][COLS] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                                    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                                    {0, '.', 0, '.', 0, '.', 0, '.'},
                                    {'.', 0, '.', 0, '.', 0, '.'},
                                    {0, '.', 0, '.', 0, '.', 0, '.'},
                                    {'.', 0, '.', 0, '.', 0, '.'},
                                    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                                    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

    return 0;
}
