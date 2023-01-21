// Averages three numbers using an array, a constant, and a helper function

#include ".vscode/cs50.h"
#include <stdio.h>

// Constant
const int TOTAL = 3;

// Prototype
float average(int length, int array[]);

int main(void)
{
    // Get scores
    int scores[TOTAL];
    for (int i = 0; i < TOTAL; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print average
    printf("Average: %f\n", average(TOTAL, scores));
}

float average(int length, int array[])
{
    // Calculate average
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + array[i];
    }

    return sum / (float) length;
}