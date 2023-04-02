#include <iostream>

int main()
{
    // Like a while loop, except that the test is checked after the loop body runs
    // A do while loop will ALWAYS run at least once

    /*
        Anatomy of a do while loop:
        1. Iterator
        2. Starting Point
        3. Test
        4. Increment/Decrement
        5. Loop Body
    */
    
    const int COUNT {10};

    // Iterator and starting point
    size_t i {0};

    do
    {
        // Loop body
        std::cout << i << ": I Love C++" << std::endl;

        // Increment
        i++;
    } while (i < COUNT);
    // Test

    return 0;
}