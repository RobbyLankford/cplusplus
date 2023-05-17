#include <iostream>

int main()
{
    // Can use references to modify data using range-based for loops
    int scores[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Scores: " ;
    for (auto score : scores)
    {
        std::cout << score << " ";
    }
    std::cout << std::endl;

    // Try modifying the data (this will not work)
    for (auto score : scores)
    {
        score *= 10;
    }

    std::cout << "Scores: " ;
    for (auto score : scores)
    {
        std::cout << score << " ";
    }
    std::cout << std::endl;

    // We need to use a reference to modify the data
    for (auto& score : scores)
    {
        score *= 10;
    }

    std::cout << "Scores: " ;
    for (auto score : scores)
    {
        std::cout << score << " ";
    }
    std::cout << std::endl;

    return 0;
}