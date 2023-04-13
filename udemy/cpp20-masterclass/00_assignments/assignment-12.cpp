#include <iostream>

void hunt_for_vowels(char message[], unsigned int size) {
    // Count how many vowels are in a string

    // There are many better ways to do this...
    // Below uses only what is available so far in the course

    unsigned int vowel_count {0};

    for (size_t i {0}; i < size; i++)
    {
        char c = message[i];

        if (c == 'A' || c == 'a' ||
            c == 'E' || c == 'e' ||
            c == 'I' || c == 'i' ||
            c == 'O' || c == 'o' ||
            c == 'U' || c == 'u')
            {
                vowel_count++;
            }
    }

    std::cout << "The string: " << message << " has " << vowel_count << " vowels" << std::endl;
}
