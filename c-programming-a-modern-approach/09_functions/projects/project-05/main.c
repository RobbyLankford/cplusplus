/* Prints an n x n magic square */

#include <stdio.h>


void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);


int main(void)
{
    int n;
    
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    char square[n][n];

    create_magic_square(n, square);
    print_magic_square(n, square);

    return 0;
}


void create_magic_square(int n, char magic_square[n][n])
{
    int count, i, j, i_prev, j_prev;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            magic_square[i][j] = 0;
        }
    }

    i = n / 2;
    j = 0;
    
    magic_square[i][j] = 1;

    count = 2;
    while (count <= n * n)
    {
        i_prev = i;
        j_prev = j;

        if (i_prev + 1 >= n)
            i = 0;
        else
            i = i_prev + 1;
        
        if (j_prev - 1 < 0)
            j = n - 1;
        else
            j = j_prev - 1;
        
        if (magic_square[i][j] == 0)
            magic_square[i][j] = count++;
        else
        {
            if (j_prev + 1 >= n)
            {
                i = i_prev;
                j = 0;
                
                magic_square[i][j] = count++;
            }
            else
            {
                if (j_prev + 1 >= n)
                {
                    i = i_prev;
                    j= 0;
                    
                    magic_square[i][j] = count++;
                }
                else
                {
                    i = i_prev;
                    j = j_prev + 1;

                    magic_square[i][j] = count++;
                }
            }
        }
    }
}

void print_magic_square(int n, char magic_square[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%4d", magic_square[i][j]);
        
        printf("\n");
    }
}