// Program to implement atoi (string to integer) using recursion

#include ".vscode/cs50.h"
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    int length = strlen(input);

    // Base Case: a one-digit number
    if (length == 1)
    {
        return input[0] - 48;
    }

    // Convert character to integer using ASCII
    int last_digit_int = input[length - 1] - 48;

    // Shorten string by one digit
    input[length - 1] = '\0';

    //  Recursively call function, multply by 10 for correct digits place
    return last_digit_int + (10 * convert(input));
}