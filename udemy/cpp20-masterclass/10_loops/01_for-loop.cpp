#include <iostream>

int main()
{
    // Print "I Love C++" 10 times: the bad way
    std::cout << "I Love C++" << std::endl;
    std::cout << "I Love C++" << std::endl;
    std::cout << "I Love C++" << std::endl;
    std::cout << "I Love C++" << std::endl;
    std::cout << "I Love C++" << std::endl;
    std::cout << "I Love C++" << std::endl;
    std::cout << "I Love C++" << std::endl;
    std::cout << "I Love C++" << std::endl;
    std::cout << "I Love C++" << std::endl;
    std::cout << "I Love C++" << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Print "I Love C++" 10 times: the good way

    /*
        Anatomy of a for loop:
        1. Iterator: unsigned int i
        2. Starting Point: {0}
        3. Test (for when the loop should stop): i < 10
        4. Increment/Decrement (to update the test): ++i
        5. Loop Body
    */
    for (unsigned int i {0}; i < 10; i++)
    {
        std::cout << "I Love C++" << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;

    // size_t: a representation of some unsigned int for positive numbers, a common shorthand
    std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl;
    std::cout << std::endl;

    for (size_t i {0}; i < 10; i++)
    {
        std::cout << "I Love C++" << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;

    // If for loop is only one line, can leave out {} and just indent, though some consider it bad form
    for (size_t i {0}; i < 5; i++)
        std::cout << "Single statement in body, can leave out {}" << std::endl;
    
    std::cout << "\n-------\n" << std::endl;

    // Iterator is only in scope within the for loop, cannot use it outside of it
    for (size_t i {0}; i < 10; i++)
    {
        // Variable i is valid within the boundaries of {}
        std::cout << "Variable i is usable inside the loop: " << i << std::endl;
    }

    // If you try to access i here, you will get an error as it does not exist in main scope
    std::cout << std::endl;
    
    // If you want iterator available outside the for loop, it needs to be declared there
    size_t j {0};

    for ( ; j < 10; j++)
    {
        std::cout << "Variable j is usable inside the loop: " << j << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Loop is done, variable j is still available: " << j << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Lastly, do not hard code values, use variables instead
    const size_t COUNT {10};

    for (size_t j {0}; j < COUNT; j++)
    {
        std::cout << "The value of j is: " << j << std::endl;
    }

    std::cout << std::endl;

    return 0;
}