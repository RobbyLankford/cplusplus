#include <iostream>

int main()
{
    // Similar to a for loop, just different syntax and used in different scenarios
    // The iterator is declared on the outside of the loop

    /*
        Anatomy of a while loop:
        1. Iterator
        2. Starting Point
        3. Test
        4. Increment/Decrement
        5. Loop Body
    */

    const size_t COUNT {10};

    // Iterator and starting point
    size_t i {0};

    // Test
    while (i < COUNT)
    {
        // Loop body
        std::cout << i << ": I Love C++" << std::endl;

        // Increment
        i++;
    }

    return 0;
}