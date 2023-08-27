#include <iostream>
#include <string>

/*
    Output parameters should be passed in such a way that you can modify the arguments from inside the function
    Options are passing by reference or by pointers... references are preferred

    Input parameters should NOT be modifiable from inside a function
    Enforce modification restrictions with the const keyword
    Options are passing by const reference, pointer to const, or const pointer to const
*/

// First two parameters are inputs, third parameter is output (can be modified)
void max_str(const std::string &input1, const std::string input2, std::string &output)
{
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {
        output = input2;
    }
}

// Third parameter (output) is again a reference that can be modified
void max_int(int input1, int input2, int &output)
{
    if (input1 > input2)
    {
        output = input1;
    }
    else
    {
        output = input2;
    }
}

// Third parameter (output) is a pointer
void max_double(double input1, double input2, double *output)
{
    if (input1 > input2)
    {
        *output = input1;
    }
    else
    {
        *output = input2;
    }
}

int main()
{
    // Strings (out_str is passed by reference into the function)
    std::string out_str;
    std::string string1("Cassablanca");
    std::string string2("Bellevue");

    max_str(string1, string2, out_str);

    std::cout << "max_str: " << out_str << std::endl;

    // Integers (out_int is passed by reference into the function)
    int out_int;
    int int1 {45};
    int int2 {723};

    max_int(int1, int2, out_int);

    std::cout << "max_int: " << out_int << std::endl;

    // Doubles (out_double has its addressed passed)
    double out_double;
    double double1 {45.8};
    double double2 {76.9};

    max_double(double1, double2, &out_double);

    std::cout << "max_double: " << out_double << std::endl;

    return 0;
}