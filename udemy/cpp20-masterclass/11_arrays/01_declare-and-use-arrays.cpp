#include <iostream>

int main()
{   
    // Declare an array of integers (will have junk data at first)
    int scores [10];

    // Can read items in an array one at a time
    std::cout << "scores[0]: " << scores[0] << std::endl;
    std::cout << "scores[1]: " << scores[1] << std::endl;

    std::cout << std::endl;

    // Can also read items in an array using a loop
    for (size_t i {0}; i < 10; i++)
    {
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }

    std::cout << "\n-----------\n";

    // Can write items to an array one at a time
    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;

    for (size_t i {0}; i < 10; i++)
    {
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }

    std::cout << std::endl;

    // Can also write items to an array using a loop
    for (size_t i {0}; i < 10; i++)
    {
        scores[i] = i * 10;
    }

    for (size_t i {0}; i < 10; i++)
    {
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }

    std::cout << "\n-----------\n";

    // Declare and initialize an array at the same time
    double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};

    for (size_t i {0}; i < 5; i++)
    {
        std::cout << "salaries[" << i << "]: " << salaries[i] << std::endl;
    }

    std::cout << std::endl;

    // If all elements are not initialized, they are initialized to zero
    int families[5] {12, 7, 5};

    for (size_t i {0}; i < 5; i++)
    {
        std::cout << "families[" << i << "]: " << families[i] << std::endl;
    }

    std::cout << std::endl;

    // Can omit the size of an array and will be assumed to be the number of items
    int class_sizes[] {10, 12, 15, 11, 18, 17, 23, 56};

    for (auto value : class_sizes)
    {
        std::cout << "value: " << value << std::endl;
    }

    std::cout << "\n-----------\n";

    // Create read-only arrays using const
    const int birds[] {10, 12, 15, 11, 18, 17, 23, 56};

    // Will cause an error
    // birds[2] = 8;

    // Example of use: sum of game_scores array
    int game_scores [] {2, 5, 8, 2, 5, 6, 9};
    int sum {0};

    for (int element : game_scores)
    {
        sum += element;
    }

    std::cout << "Score sum: " << sum << std::endl;

    return 0;
}