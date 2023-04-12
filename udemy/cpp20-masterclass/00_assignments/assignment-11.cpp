#include <iostream>

bool is_collection_sorted(int numbers[], unsigned int collection_size)
{
    // Given an array of integers, decide if they are sorted in ascending order
    bool sorted = true;
    int previous = numbers[0];

    // Assume that there is always at least one item in the array as the base case
    for (size_t i {1}; i < collection_size; i++)
    {
        if (numbers[i] < previous)
        {
            sorted = false;
        }

        previous = numbers[i];
    }

    return sorted;
}