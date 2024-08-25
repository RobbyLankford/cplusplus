/* Evaluates a chess position */

#include <stdio.h>

#define rows 8
#define cols 8

int evaluate_position(char board[rows][cols])
{
    int white = 0, black = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            switch(board[i][j])
            {
                case 'Q':
                    white += 9;
                    break;
                
                case 'q':
                    black += 9;
                    break;
                
                case 'R':
                    white += 5;
                    break;
                
                case 'r':
                    black += 5;
                    break;
                
                case 'B': case 'N':
                    white += 3;
                    break;
                
                case 'b': case 'n':
                    black += 3;
                    break;
                
                case 'P':
                    white++;
                    break;
                
                case 'p':
                    black++;
                    break;
                
                default:
                    break;
            }
        }
    }

    return (white - black);
}

int main(void)
{
    char chess_board[rows][cols] = {
        {'Q', NULL, 'R', NULL, NULL, NULL, 'B', NULL},
        {NULL, NULL, NULL, NULL, 'P', NULL, 'k', NULL},
        {'p', NULL, 'P', NULL, NULL, NULL, NULL, NULL},
        {'P', NULL, 'P', NULL, NULL, 'p', NULL, NULL},
        {NULL, NULL, NULL, NULL, 'p', 'K', NULL, 'p'},
        {'r', NULL, NULL, NULL, NULL, NULL, NULL, NULL},
        {'p', 'b', 'p', 'B', NULL, NULL, NULL, NULL},
        {NULL, NULL, NULL, NULL, NULL, 'b', NULL, NULL}
    };

    printf("Score: %d\n", evaluate_position(chess_board));

    return 0;
}
