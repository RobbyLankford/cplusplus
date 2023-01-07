#include ".vscode/cs50.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool check_key_length(string key);
bool check_key_alphabetic(string key);
bool check_key_repeat(string key);

int main(int argc, string argv[])
{
    // Must supply a key to continue
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    // Key must be valid to continue
    string cipher = argv[1];

    if (!check_key_length(cipher))
    {
        printf("Invalid key: it must be 26 characters.\n");
        return 1;
    }

    if (!check_key_alphabetic(cipher))
    {
        printf("Invalid key: it most only be alphabetic characters.\n");
        return 1;
    }

    if (!check_key_repeat(cipher))
    {
        printf("Invalid key: it must not repeat characters.\n");
        return 1;
    }

    // Make key all uppercase for simplicity
    for (int i = 0; i < strlen(cipher); i++)
    {
        if (islower(cipher[i]))
        {
            cipher[i] = toupper(cipher[i]);
        }
    }

    // Get plaintext from user
    string text = get_string("plaintext: ");

    // Encrypt user's plaintext
    for (int i = 0; i < strlen(text); i++)
    {
        if (isupper(text[i]))
        {
            text[i] = cipher[text[i] - 65];
        }

        if (islower(text[i]))
        {
            text[i] = tolower(cipher[text[i] - 97]);
        }
    }

    // Print encrypted text
    printf("ciphertext: %s\n", text);

    return 0;
}

// Key must be 26 characters
bool check_key_length(string key)
{
    if (strlen(key) != 26)
    {
        return false;
    }

    return true;
}

// Key must only have alphabetic characters
bool check_key_alphabetic(string key)
{
    int alpha_chars = 0;
    for (int i = 0; i < strlen(key); i++)
    {
        if (isalpha(key[i]))
        {
            alpha_chars++;
        }
    }

    if (alpha_chars != 26)
    {
        return false;
    }

    return true;
}

// Key  must not repeat alphabetic characters
bool check_key_repeat(string key)
{
    int letters[26];

    for (int i = 0; i < 26; i++)
    {
        letters[i] = 0;
    }

    for (int i = 0; i < strlen(key); i++)
    {
        // Check uppercase characters
        if (isupper(key[i]))
        {
            letters[key[i] - 65]++;
        }

        // Check lowercase characters
        if (islower(key[i]))
        {
            letters[key[i] - 97]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (letters[i] != 1)
        {
            return false;
        }
    }

    return true;
}