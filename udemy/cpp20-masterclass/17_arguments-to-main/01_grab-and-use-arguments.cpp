#include <iostream>

/*
    First parameter, argc, is the number of arguments, including the name of the program
    Second parameter, argv, is an array of the argument values
    Second parameter is actually a pointer to the array
*/

// Call: build/01_grab-and-use-arguments arg1 arg2 arg3 ...
int main(int argc, char *argv[])
{
    std::cout << "We have " << argc << " arguments passed to the program" << std::endl;

    // Remember indexing at zero, so there are argc arguments, but the array starts at 0
    for (size_t i {0}; i < argc; i++)
    {
        std::cout << "Argument [" << i << "]: " << argv[i] << std::endl;
    }

    return 0;
}