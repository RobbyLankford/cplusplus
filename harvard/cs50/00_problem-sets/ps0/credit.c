// Check if a credit card number is potentially valid

#include ".vscode/cs50.h"
#include <stdio.h>

long get_positive_long(void);
int get_length(long n);
int luhn_algorithm(long n);
int get_leading_digits(long n, int digits);

int main(void)
{
    long number = get_positive_long();
    int length = get_length(number);

    // Lengths: VISA = 13 or 16, MASTERCARD = 16, AMEX = 15
    if (length != 13 && length != 15 && length != 16)
    {
        printf("INVALID\n");
    }
    else
    {
        int checksum = luhn_algorithm(number);

        // The checksum MUST end in 0 to be a valid credit card number
        if (checksum % 10 != 0)
        {
            printf("INVALID\n");
        }
        else
        {
            int first_digit = get_leading_digits(number, 1);
            int first_two_digits = get_leading_digits(number, 2);

            if ((length == 13) && (first_digit % 10 == 4))
            {
                // VISA numbers start with a 4 and are 13 digits long
                printf("VISA\n");
            }
            else if ((length == 15) && (first_two_digits == 34 || first_two_digits == 37))
            {
                // AMEX numbers start with 34 or 27 and are 15 digits long
                printf("AMEX\n");
            }
            else if (length == 16)
            {
                if (first_digit % 10 == 4)
                {
                    // VISA numbers can also be 16 digits long
                    printf("VISA\n");
                }
                else if (first_two_digits >= 51 && first_two_digits <= 55)
                {
                    // MASTERCARD numbers start with 51, 52, 53, 54, or 55
                    printf("MASTERCARD\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }
            else
            {
                printf("INVALID\n");
            }
        }
    }

    return 0;
}

// Get a positive long from user, handling incorrect formats
long get_positive_long(void)
{
    double n;
    do
    {
        n = get_long("Number: ");
    }
    while (n < 1);

    return n;
}

// Get the number of digits in a long
int get_length(long n)
{
    int i = 0;
    while (n > 0)
    {
        n /= 10;
        i++;
    }

    return i;
}

// Run Luhn's Algorithm for credit card digits
int luhn_algorithm(long n)
{
    int sum_odd = 0;
    int sum_even = 0;

    do
    {
        // Process first last digit
        int mod_odd = n % 10;
        n /= 10;
        sum_odd += mod_odd;

        // Process second last digit
        int mod_even = n % 10;
        n /= 10;

        // Double second digit and add resulting digits
        mod_even *= 2;
        int digit1 = mod_even % 10;
        int digit2 = mod_even / 10;
        sum_even = sum_even + digit1 + digit2;
    }
    while (n > 0);

    return sum_odd + sum_even;
}

// Get the first n digits from a long, from left to right
int get_leading_digits(long n, int digits)
{
    int length = get_length(n);

    for (int i = 0; i < length - digits; i++)
    {
        n /= 10;
    }

    return n;
}