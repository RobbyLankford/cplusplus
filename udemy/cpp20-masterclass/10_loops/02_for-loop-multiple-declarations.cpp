#include <iostream>

int main()
{
    // Can declare multiple variables in a for loop initializer
    for (size_t i {0}, x {5}, y {22}; y > 15; i++, x += 5, y -= 1)
    {
        /*
            Three variables, i, x, and y, are declared and initialized
            Variable y is chosen as the test condition
            The three variables are updated on each iteration of the loop
        */
        
        // All three variables i, x, and y are sizeof(size_t) = 8 (they must be the same type)
        if (i == 0)
        {
            std::cout << "sizeof(i): " << sizeof(i) << std::endl;
            std::cout << "sizeof(x): " << sizeof(x) << std::endl;
            std::cout << "sizeof(y): " << sizeof(y) << std::endl;

            std::cout << std::endl;
        }

        std::cout << "i: " << i << ", x: " << x << ", y: " << y << std::endl;
    }

    return 0;
}