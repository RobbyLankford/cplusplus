// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Number of buckets in hash table
const unsigned int N = 17576;

// Hash table
node *table[N];

// Word counter
int word_count = 0;

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // Run word through hash function
    int hash_idx = hash(word);

    // Create cursor to navigate linked list, point to first element
    node *cursor = table[hash_idx];

    // Search for word in linked list until word is found or end of list (NULL) is hit
    while (cursor != NULL)
    {
        if (strcasecmp(cursor->word, word) == 0)
        {
            return true;
        }
        else
        {
            cursor = cursor->next;
        }
    }

    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // Hash using the first three letters of a word

    // If word is only one letter long, use the first letter for the second and third letters
    char c1 = toupper(word[0]);
    char c2 = c1;
    char c3 = c1;

    // If word is only two letters long, use the second letter for the third letter
    if (strlen(word) == 2)
    {
        c2 = toupper(word[1]);
        c3 = c2;
    }

    // If word is greater than two letters long, can use the first three letters with no issue
    if (strlen(word) > 2)
    {
        c2 = toupper(word[1]);
        c3 = toupper(word[2]);
    }

    // Convert character into A = 0, B = 1, etc.
    int idx1 = c1 - 'A';
    int idx2 = c2 - 'A';
    int idx3 = c3 - 'A';

    // Implement hash to where AAA = 0, AAB = 1, ..., BAA = 676, ..., ZZA = 17,550, ..., ZZZ = 17,575
    return (26 * 26 * idx1) + (26 * idx2) + idx3;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // Open File
    FILE *infile = fopen(dictionary, "r");

    if (infile == NULL)
    {
        return false;
    }

    // Read words from file
    char temp_str[LENGTH + 1];

    while(fscanf(infile, "%s", temp_str) != EOF)
    {
        // Create a node to hold each word
        node *temp_node = malloc(sizeof(node));

        if (temp_node == NULL)
        {
            return false;
        }

        strcpy(temp_node->word, temp_str);

        // Pass word to hash function at correct linked list location
        int hash_idx = hash(temp_str);

        // Insert word into hash table
        if (table[hash_idx] == NULL)
        {
            // If head of linked list is pointing to NULL, temp_node should point to NULL
            temp_node->next = NULL;
        }
        else
        {
            // Otherwise, temp_node should point to the current first item in linked list
            temp_node->next = table[hash_idx];
        }

        // Point head of linked list to newly inserted item
        table[hash_idx] = temp_node;

        // Keep count of words loaded
        word_count++;
    }

    // Close file
    fclose(infile);

    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // Already calculated globally in load()
    return word_count;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // Check each item in hash table for a linked list
    for (int i = 0; i < N; i++)
    {
        if (table[i] != NULL)
        {
            // Need two temporary nodes
            node *cursor = table[i];

            if (cursor == NULL)
            {
                return false;
            }

            node *temp = cursor;

            if (temp == NULL)
            {
                return false;
            }

            // Move along nodes in the linked list, freeing one at a time
            while (temp != NULL)
            {
                cursor = cursor->next;
                free(temp);
                temp = cursor;
            }
        }
    }

    return true;
}
