#include <iostream>

int main()
{
    // Instead of incrementing the counter, decrement it
    const size_t COUNT {5};

    // For Loop
    // Note: range-based for loops cannot run in reverse order
    std::cout << "Incrementing For Loop" << std::endl;
    
    for (size_t i {}; i < COUNT; i++)
    {
        std::cout << "i: " << i << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Decrementing For Loop" << std::endl;
    
    for (size_t i {COUNT}; i > 0; i--)
    {
        std::cout << "i: " << i << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;

    // While Loop
    std::cout << "Incrementing While Loop" << std::endl;

    size_t i {0};

    while (i < COUNT)
    {
        std::cout << "i: " << i << std::endl;
        i++;
    }

    std::cout << std::endl;

    std::cout << "Decrementing While Loop" << std::endl;

    i = COUNT;

    while (i > 0)
    {
        std::cout << "i: " << i << std::endl;
        i--;
    }

    std::cout << "\n-------\n" << std::endl;

    // Do While Loop
    std::cout << "Incrementing Do While Loop" << std::endl;

    i = 0;
    
    do
    {
        std::cout << "i: " << i << std::endl;
        i++;
    } while (i < COUNT);

    std::cout << std::endl;

    std::cout << "Decrementing Do While Loop" << std::endl;

    i = COUNT;

    do
    {
        std::cout << "i: " << i << std::endl;
        i--;
    } while (i > 0);

    // Be careful with zero, it can cause an infinite loop
    // If an iterator cannot be negative, decrementing 0 will underflow
    // The following loop will run forever because of this

    /*
    unsigned int i = COUNT;

    do
    {
        std::cout << "i: " << i << std::endl;
        i--;
    } while (i >= 0);
    */

    return 0;
}