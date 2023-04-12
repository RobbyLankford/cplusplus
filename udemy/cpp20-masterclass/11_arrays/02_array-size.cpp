#include <iostream>

int main()
{
    // Before C++17
    int scores [] {10, 12, 15, 11, 18, 17, 22, 23, 24};

    std::cout << "size of scores: " << sizeof(scores) << std::endl;
    std::cout << "size of scores[0]: " << sizeof(scores[0]) << std::endl;
    std::cout << "Items in scores: " << (sizeof(scores) / sizeof(scores[0])) << std::endl;
    
    std::cout << std::endl;

    size_t count { sizeof(scores) / sizeof(scores[0]) };

    for (size_t i {0}; i < count; i++)
    {
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }

    std::cout << "\n----------\n" << std::endl;

    // After C++17
    std::cout << "Items in scores: " << std::size(scores) << std::endl;

    std::cout << std::endl;

    for (size_t i {0}; i < std::size(scores); i++)
    {
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }

    std::cout << "\n----------\n" << std::endl;

    // Could also just use a range-based for loop
    for (auto score : scores)
    {
        std::cout << "score: " << score << std::endl;
    }

    return 0;
}