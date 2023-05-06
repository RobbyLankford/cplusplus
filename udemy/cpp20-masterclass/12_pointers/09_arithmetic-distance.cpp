#include <iostream>

int main()
{
    // Subtracting two pointers (same type) results in an integer, the number of elements between the two pointers
    int scores [10] {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int *pointer1 {&scores[0]}; // can also say int *pointer1 {scores + 0}
    int *pointer2 {&scores[8]}; // can also say int *pointer2 {scores + 8}

    // The difference will equal 8 (8 integers separate the two pointers)
    std::cout << "pointer2 - pointer1: " << pointer2 - pointer1 << std::endl;

    // The difference will be -8
    std::cout << "pointer1 - pointer2: " << pointer1 - pointer2 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // std::ptrdiff_t is a special type to store pointer differences
    std::ptrdiff_t pos_diff = pointer2 - pointer1;
    std::ptrdiff_t neg_diff = pointer1 - pointer2;

    std::cout << "pos_diff: " << pos_diff << std::endl;
    std::cout << "neg_diff: " << neg_diff << std::endl;
    
    std::cout << std::endl;

    // Check the size of the object
    std::cout << "Size of std::ptrdiff_t: " << sizeof(std::ptrdiff_t) << std::endl;

    return 0;
}