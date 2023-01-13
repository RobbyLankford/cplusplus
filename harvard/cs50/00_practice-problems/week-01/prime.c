// Determine the prime numbers in a series of numbers

#include ".vscode/cs50.h"
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    // 1 (and negatives) are not prime
    if (number <= 1)
    {
        return false;
    }

    // 2 and 3 are prime
    else if (number == 2 || number == 3)
    {
        return true;
    }

    // Even numbers (except for 2) are not prime
    else if (number % 2 == 0)
    {
        return false;
    }

    // For all other numbers, if any number divides evenly into it, it is not prime
    else
    {
        for (int i = 3; i < number; i++)
        {
            if (number % i == 0)
            {
                return false;
            }
        }
    }

    return true;
}
