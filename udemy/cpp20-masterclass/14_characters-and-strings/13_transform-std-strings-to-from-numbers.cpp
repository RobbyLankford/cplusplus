#include <iostream>
#include <string>

int main()
{
    // Transforming to string: std::to_string
    float float_var {22.3f};
    double double_var {1.344847e5};
    int int_var {223};

    std::string float_str {std::to_string(float_var)};
    std::string double_str {std::to_string(double_var)};
    std::string int_str {std::to_string(int_var)};

    std::cout << "sizeof(float_str): " << float_str.size() << std::endl;
    std::cout << "float_var: " << float_var << std::endl;
    std::cout << "float_str: " << float_str << std::endl;

    std::cout << std::endl;

    std::cout << "sizeof(double_str): " << double_str.size() << std::endl;
    std::cout << "double_var: " << double_var << std::endl;
    std::cout << "double_str: " << double_str << std::endl;
    
    std::cout << std::endl;

    std::cout << "sizeof(int_str): " << int_str.size() << std::endl;
    std::cout << "int_var: " << int_var << std::endl;
    std::cout << "int_str: " << int_str << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Transforming to signed integral types: std::stoi, std::stol, std::stoll
    std::string number_str {"-34.567"}; // Could even be negative.

    int_var = std::stoi(number_str);
    long long_var = std::stol(number_str);
    long long long_long_var = std::stoll(number_str);

    std::cout << "number_str: " << number_str << std::endl;

    std::cout << std::endl;

    std::cout << "sizeof(int_var): " << sizeof(int_var) << std::endl;
    std::cout << "int_var: " << int_var << std::endl;

    std::cout << std::endl;

    std::cout << "sizeof(long_var): " << sizeof(long_var) << std::endl;
    std::cout << "long_var: " << long_var << std::endl;

    std::cout << std::endl;

    std::cout << "sizeof(long_long_var): " << sizeof(long_long_var) << std::endl;
    std::cout << "long_long_var: " << long_long_var << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Transforming to unsigned integral types: std::stoul, std::stoull
    number_str = "34.567";

    unsigned long ulong_var = std::stoul(number_str);
    unsigned long long ulong_long_var = std::stoull(number_str);

    std::cout << "number_str: " << number_str << std::endl;

    std::cout << std::endl;

    std::cout << "sizeof(ulong_var): " << sizeof(ulong_var) << std::endl;
    std::cout << "ulong_var: " << ulong_var << std::endl;

    std::cout << std::endl;

    std::cout << "sizeof(ulong_long_var): " << sizeof(ulong_long_var) << std::endl;
    std::cout << "ulong_long_var: " << ulong_long_var << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Transforming to floating types: std::stof, std::stod, std::stold
    number_str = "1.2345";

    float_var = std::stof(number_str);
    double_var = std::stod(number_str);
    long double long_double_var = std::stold(number_str);

    std::cout << "number_str: " << number_str << std::endl;

    std::cout << std::endl;

    std::cout << "sizeof(float_var): " << sizeof(float_var) << std::endl;
    std::cout << "float_var: " << float_var << std::endl;

    std::cout << std::endl;

    std::cout << "sizeof(double_var): " << sizeof(double_var) << std::endl;
    std::cout << "double_var: " << double_var << std::endl;

    std::cout << std::endl;

    std::cout << "sizeof(long_double_var): " << sizeof(long_double_var) << std::endl;
    std::cout << "long_double_var: " << long_double_var << std::endl;

    return 0;
}