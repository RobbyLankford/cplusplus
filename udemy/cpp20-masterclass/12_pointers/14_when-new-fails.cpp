#include <iostream>

int main()
{
    // In some rare cases, the new operator will fail to allocate dynamic memory from the heap
    // In those cases, will need a way to handle the failure

    // Method #1: The exception Mechanism
    for (size_t i {0}; i < 1000000000000; i++)
    {
        try
        {   
            // Make a bunch of large integer arrays to try to get new to fail
            int *lots_of_ints1 {new int [10000000]};
        }
        catch (std::exception& ex)
        {
            // When new fails, this code is run instead
            std::cout << "Exception caught: " << ex.what() << std::endl;
        }
    }

    // Method #2: std::nothrow
    for (size_t i {0}; i < 1000000000000; i++)
    {
        int *lots_of_ints2 {new(std::nothrow) int [10000000]};

        // Using std::nothrow will cause nullptr to be used rather than an exception being thrown
        if (lots_of_ints2 == nullptr)
        {
            std::cout << "Memory allocation failed!" << std::endl;
        }
        else
        {
            std::cout << "Memory allocation succeeded!" << std::endl;
        }
    }

    return 0;
}