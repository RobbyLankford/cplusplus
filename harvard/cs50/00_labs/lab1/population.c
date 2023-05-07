#include ".vscode/cs50.h"
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);

    // Prompt for end size
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);

    // Calculate number of years until we reach threshold
    int population = start;
    int years = 0;

    while (population < end)
    {
        int born = population / 3;
        int pass = population / 4;

        population += (born - pass);
        years++;
    }

    // Print number of years
    printf("Years: %i", years);

    return 0;
}
