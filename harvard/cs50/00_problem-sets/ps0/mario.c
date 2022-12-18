// Print adjacent pyramids of blocks from Mario

#include ".vscode/cs50.h"
#include <stdio.h>

int get_height(void);
void print_space(int n);
void print_hash(int n);

int main(void) 
{
    int height = get_height();

    for (int i = 1; i <= height; i++)
    {
        print_space(height - i);
        print_hash(i);
        print_space(2);
        print_hash(i);
        printf("\n");
    }
    
    return 0;
}

// Get a height value from user between 1 and 8
int get_height(void) 
{
    int n;
    
    do 
    {
        n = get_int("Height: ");
    }
    while(n < 1 || n > 8);
    
    return n;
}

// Print a certain number of spaces
void print_space(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" ");
    }
}

// Print a certain number of hashes
void print_hash(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
}