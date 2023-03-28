#include <iostream>

int main()
{
    // Avoids the overhead of using an iterator, use the values themselves
    int bag_of_values [] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Could use an interator
    for (size_t i {0}; i < 10; i++)
    {
        std::cout << "value: " << bag_of_values[i] << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;

    // Much easier to use the values themselves
    for (int value : bag_of_values)
    {
        std::cout << "value: " << value << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;

    // Specify the collection in place
    for (int value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
    {
        std::cout << "value: " << value << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;

    // Can also use auto type detection
    for (auto value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
    {
        std::cout << "value: " << value << std::endl;
    }

    return 0;
}