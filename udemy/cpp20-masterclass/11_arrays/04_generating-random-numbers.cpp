#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    // Method of generating random numbers
    
    // Set a seed (std::rand() gives same sequence each time unless new seed)
    std::srand(std::time(0));

    // Use std::rand(), generates a random number between 0 and RAND_MAX
    int random_num = std::rand();
    std::cout << "number: " << random_num << std::endl;

    random_num = std::rand();
    std::cout << "number: " << random_num << std::endl;

    // What is RAND_MAX?
    std::cout << "RAND_MAX: " << RAND_MAX << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Use % to constrain the bounds of the random numbers

    // Will be between [0-10]
    random_num = std::rand() % 11;
    std::cout << "number: " << random_num << std::endl;

    // To further prove the point
    for (size_t i {0}; i < 30; i++)
    {
        random_num = std::rand() % 11;
        std::cout << "number: " << random_num << std::endl;
    }

    std::cout << std::endl;

    // To set starting range at 1, add 1 to the result and change the % value
    for (size_t i {0}; i < 30; i++)
    {
        // Will be between [1-15]
        random_num = (std::rand() % 15) + 1;
        std::cout << "number: " << random_num << std::endl;
    }

    return 0;
}