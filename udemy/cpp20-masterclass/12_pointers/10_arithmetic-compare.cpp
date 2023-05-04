#include <iostream>

int main()
{
    // Can compare the addresses of pointers
    int scores[10] {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int *pointer1 {&scores[0]};
    int *pointer2 {&scores[8]};

    // The further you go into the array, the bigger the address
    // We are comparing the addresses, not the values
    std::cout << std::boolalpha;

    std::cout << "pointer1 > pointer2: " << (pointer1 > pointer2) << std::endl;
    std::cout << "pointer1 < pointer2: " << (pointer1 < pointer2) << std::endl;
    std::cout << "pointer1 >= pointer2: " << (pointer1 >= pointer2) << std::endl;
    std::cout << "pointer1 <= pointer2: " << (pointer1 <= pointer2) << std::endl;
    std::cout << "pointer1 == pointer2: " << (pointer1 == pointer2) << std::endl;
    std::cout << "pointer1 != pointer2: " << (pointer1 != pointer2) << std::endl;

    return 0;
}