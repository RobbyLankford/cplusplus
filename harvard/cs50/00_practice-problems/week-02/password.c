// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include ".vscode/cs50.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

bool valid(string password)
{
    bool lowercase = false;
    bool uppercase = false;
    bool num_digit = false;
    bool spec_char = false;

    for (int i = 0; i < strlen(password); i++)
    {
        if (isalpha(password[i]))
        {
            if (islower(password[i]))
            {
                lowercase = true;
            }
            else
            {
                uppercase = true;
            }
        }
        else if (isdigit(password[i]))
        {
            num_digit = true;
        }
        else
        {
            spec_char = true;
        }
    }

    if (lowercase && uppercase && num_digit && spec_char)
    {
        return true;
    }
    else
    {
        return false;
    }
}