#include <iostream>

/*
    A function is just a block of code that lives somewhere in memory
    Can grab the address of the function and store it in a function pointer
*/

double add(double a, double b)
{
    return a + b;
}

int main()
{
    // Different ways of specifying a function pointer
    
    // Have to comment out because redeclaring function will throw error
    /*
    double (*f_ptr) (double, double) = &add;
    double (*f_ptr) (double, double) = add;
    
    double (*f_ptr) (double, double) {&add};
    double (*f_ptr) (double, double) {add};

    auto f_ptr = &add;
    auto f_ptr = add;

    auto *f_ptr = &add;
    auto *f_ptr = add;

    std::cout << "add(10, 20): " << f_ptr(10, 20) << std::endl;
    */

    // Can also set the pointer to null_ptr
    double (*f_ptr) (double, double) = nullptr;

    // std::cout << "add(10, 20): " << f_ptr(10, 20) << std::endl; // Segmentation fault

    return 0;
}
