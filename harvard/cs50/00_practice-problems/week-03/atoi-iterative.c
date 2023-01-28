// Program to implement atoi (string to integer) using loops

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
    // Need original length of string for loop
    int original_length = strlen(input);

    int result = 0;
    for (int i = 0; i < original_length; i++)
    {
        int length = strlen(input);

        // Convert character to integer using ASCII
        int last_digit = input[length - 1] - 48;

        // Shorten string by one digit
        input[length - 1] = '\0';

        // Multiply by enough 10's to put in corret digits place
        for (int j = 0; j < i; j++)
        {
            last_digit *= 10;
        }

        // Keep running total of converted number
        result += last_digit;
    }

    return result;
}