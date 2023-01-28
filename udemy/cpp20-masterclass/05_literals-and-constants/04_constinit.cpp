#include <iostream>

// Introduced in C++20
// A variable should be initialized at compile time
// Applied to variables created outside of the main function
// Helps to avoid problems with order of initialization of global variables outside main
// Does not mean that the variable is const, just that it is initialized at compile time
// Can combine const and constinit but not const and and constexpr

const int val1 {33};
constexpr int val2 {34};
int val3 {35}; // A run time value

constinit int age1 = 88;
const constinit int age2 {val1};
constinit int age3 {age2};
// constinit int age4 {val3}; // Error because val3 is a run time value

const constinit double weight {33.33};
// constexpr constinit double scale_factor {3.11}; // Error because cannot combine constexpr and constinit

int main() 
{
    // constinit double height {1.72} // Error because inside of main

    std::cout << "age1: " << age1 << std::endl;
    std::cout << "age2: " << age2 << std::endl;
    std::cout << "age3: " << age3 << std::endl;
    std::cout << std::endl;

    // Can change a constinit variable
    age1 = 33;

    std::cout << "age1: " << age1 << std::endl;
    std::cout << std::endl;

    // Combining const and constinit
    std::cout << "weight: " << weight << std::endl;
    
    // weight = 44.44; // Error because weight is const and cannot be modified
    
    return 0;
}