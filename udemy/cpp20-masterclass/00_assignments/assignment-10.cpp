#include <iostream>

void unique_numbers(int numbers[], unsigned int collection_size)
{
    // Eliminate duplicates from an array of integers

    // Assume that there will not be any arrays larger than 20 items
    int unique [20];
    unsigned int unique_counter {0};

    for (size_t i {0}; i < collection_size; i++)
    {
        bool seen {false};

        for (size_t j {0}; j < unique_counter; j++)
        {
            if (numbers[i] == unique[j])
            {
                seen = true;
                break;
            }
        }

        if (!seen)
        {
            unique[unique_counter] = numbers[i];
            unique_counter++;
        }
    }

    std::cout << "The collection contains " << unique_counter << " unique numbers, which are: ";

    for (size_t i {0}; i < unique_counter; i++)
    {
        std::cout << unique[i] << " ";
    }
}