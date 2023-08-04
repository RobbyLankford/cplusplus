#include <iostream>

/*
    Passing references to functions that do not try to change them is fine.
    Passing referneces to functions that try to change them results in a compiler error.
    For implicit conversions, the compiler sets up a temporary variables that is converted.
    Therefore, when a reference to a temporary variable gets changed, the original reference cannot be updated.
*/

void increment(int &value);
void print_out(const int &value);

int main()
{
    int int_value {12};
    double double_value {52.7};

    // Pass in int var, the correct type
    std::cout << "Passing int variable:" << std::endl;
    print_out(int_value);
    increment(int_value);
    print_out(int_value);

    std::cout << std::endl;

    // Pass in double var, the incorrect type
    print_out(double_value); // works fine
    //increment(double_value); // compiler error!
    print_out(double_value); // works fine
    
    return 0;
}

void increment(int &value)
{
    value++;
    std::cout << "Value incremented to: " << value << std::endl;
}

void print_out(const int &value)
{
    std::cout << "Value: " << value << std::endl;
}