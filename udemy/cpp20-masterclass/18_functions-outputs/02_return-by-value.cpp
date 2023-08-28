#include <iostream>

/*
    Returning by value is the default behavior.
    The local variable in the function is destroyed and a copy of the value is made in main.
*/
int sum(int a, int b)
{
    int result_int = a + b;
    
    // Show memory address of local variable before it is destroyed
    std::cout << "Inside function (&result_int): " << &result_int << std::endl;

    return result_int;
}

/*
    Sometimes, the compiler will not return by value, it will return by reference.
    If the compiler thinks it can optimize, the same local variable will be returned to main.
*/
std::string add_strings(std::string str1, std::string str2)
{
    std::string result_str = str1 + str2;

    // Show memory address of local variable, which should be the same address in main
    std::cout << "Inside function (&result_str): " << &result_str << std::endl;

    return result_str;
}

int main()
{
    int x {15};
    int y {9};
    int result_int = sum(x, y);

    // Should be different addressed
    std::cout << "Outside function (&result_int): " << &result_int << std::endl;
    std::cout << "result_int: " << result_int << std::endl;

    std::cout << std::endl;

    std::string str1 {"Hello"};
    std::string str2 {" World"};
    std::string result_str = add_strings(str1, str2);

    // Should be the same address
    std::cout << "Outside function (&result_str): " << &result_str << std::endl;
    std::cout << "result_str: " << result_str << std::endl;
}