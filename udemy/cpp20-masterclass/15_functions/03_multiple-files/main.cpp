#include <iostream>

/* 
  Can define functions in different files and #include their header files in the main.cpp file
  Within the header (.h), define the function prototype (all that is needed to #include in main.cpp)
  Within the actual .cpp file, define the function bodies (.cpp file name does not have to be the same as .h file)

  One Definition Rule: the same function implementation cannot show up in global namespace more than once
*/

#include "compare.h"
#include "operations.h"

// To compile: g++ main.cpp compare.cpp operation.cpp -o build/main

int main()
{
    int x {5};
    int y {12};

    std::cout << "max(" << x << ", " << y << "): " << max(x, y) << std::endl;
    std::cout << std::endl;
    std::cout << "min(" << x << ", " << y << "): " << min(x, y) << std::endl;
    std::cout << std::endl;
    std::cout << "inc_mult(" << x << ", " << y << "): " << inc_mult(x, y) << std::endl;

    return 0;
}