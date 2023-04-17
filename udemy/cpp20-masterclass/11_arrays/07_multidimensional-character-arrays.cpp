#include <iostream>

int main()
{
    const size_t name_length {15};

    char members [][name_length] {
        {'J', 'o', 'h', 'n'},
        {'S', 'a', 'm', 'u', 'e', 'l'},
        {'R', 'a', 's', 'h', 'i', 'd'},
        {'R', 'o', 'd', 'r', 'i', 'g', 'e', 'z'}
    };

    // Can print out with for loop, but we are not guaranteed a null character, so unsafe
    std::cout << "Unsafe printing method:" << std::endl;
    for (size_t i {0}; i < std::size(members); i++)
    {
        std::cout << members[i] << std::endl;
    }

    std::cout << std::endl;

    // Can also print out each character one at a time, but not practical
    std::cout << "Printing out character by character:" << std::endl;
    for (size_t i {0}; i < std::size(members); i++)
    {
        for (size_t j {0}; j < std::size(members[i]); j++)
        {
            std::cout << members[i][j];
        }

        std::cout << std::endl;
    }

    std::cout << "\n----------\n" << std::endl;

    // The better way is to use C-string literals
    char members1 [][name_length] {
        "John",
        "Samuel",
        "Rashid",
        "Rodriguez"
    };

    std::cout << "Printing out string literals:" << std::endl;
    for (size_t i {0}; i < std::size(members1); i++)
    {
        std::cout << members1[i] << std::endl;
    }

    return 0;
}