#include <iostream>

int main()
{
    // Incrementing/decrementing: move the pointer address by the sie of the type pointed to
    int scores[10] {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    std::cout << "scores: ";
    for (size_t i {0}; i < std::size(scores); i++)
    {
        std::cout << scores[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Using ++ will point to the next item in the array
    int *p_score {scores};

    std::cout << "Address of p_score: " << p_score << ", value: " << *p_score << std::endl;
    
    p_score++;
    std::cout << "Address of p_score: " << p_score << ", value: " << *p_score << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Can move forward by a specific number of spaces
    p_score = scores;

    std::cout << "Address of (p_score + 4): " << p_score + 4 << ", value: " << *(p_score + 4) << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Can also use arithmetic on the array name itself
    for (size_t i {0}; i < std::size(scores); i++)
    {
        std::cout << "value: " << *(scores + i) << std::endl;
    }

    std::cout << std::endl;

    // Print in reverse order
    for (size_t i {std::size(scores)}; i > 0; i--)
    {
        std::cout << "value: " << *(scores + i - 1) << std::endl;
    }

    std::cout << "\n----------\n" << std::endl;

    // Can also modify elements of the array
    p_score = scores;

    scores[0] = 31; // Array index notation
    *(scores + 1) = 32; // Equivalent to scores[1] = 32
    *(p_score + 2) = 33; // Equivalent to scores[2] = 33

    for (size_t i {0}; i < std::size(scores); i++)
    {
        std::cout << "value: " << scores[i] << std::endl;
    }

    return 0;
}