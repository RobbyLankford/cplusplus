#include <iostream>

int main()
{
    // A convenient way to declare more variables limited to the scope of the for loop
    
    std::cout << "Range based for loop without initializer:" << std::endl;

    auto multiplier1 {4};

    for (int value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
    {
        std::cout << "result: " << (value * multiplier1) << std::endl;
    }

    std::cout << std::endl;

    std::cout << "Range based for loop with initializer:" << std::endl;

    for (auto multiplier2 {4}; int value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
    {
        std::cout << "result: " << (value * multiplier2) << std::endl;
    }
    
    return 0;
}