#include <iostream>

int main()
{
    int scores [10] {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int *p_score {scores};

    /* Similarities between arrays and pointers */

    // The array name can be treated as a pointer to the first element in the array
    std::cout << "scores: " << scores << std::endl;
    std::cout << "p_score: " << p_score << std::endl;

    std::cout << std::endl;

    // De-reference to get the value of the first element in the array
    std::cout << "*scores: " << *scores << std::endl;
    std::cout << "scores[0]: " << scores[0] << std::endl;
    std::cout << "*p_score: " << *p_score << std::endl;
    std::cout << "p_score[0]: " << p_score[0] << std::endl;

    std::cout << "\n----------\n" << std::endl;

    /* Differences between arrays and pointers */

    // You cannot assign to an array name (cannot make the array name point to something else)
    int number {21};

    p_score = &number; // works, because p_score is a *real* pointer
    // scores = &number; // compiler error, the array name is a pointer that identifies the entire array

    std::cout << "p_score: " << p_score << std::endl;
    std::cout << "*p_score: " << *p_score << std::endl;
    std::cout << "&number: " << &number << std::endl;
    std::cout << "number: " << number << std::endl;
    std::cout << "scores: " << scores << std::endl;
    std::cout << "*scores: " << *scores << std::endl;

    std::cout << std::endl;

    // Cannot use a pointer to deduce the size of an array
    std::cout << "size(scores): " << std::size(scores) << std::endl;
    // std::cout << "size(p_score): " << std::size(p_score) << std::endl; // compiler error, pointer decay, we have lost information about the array

    return 0;
}