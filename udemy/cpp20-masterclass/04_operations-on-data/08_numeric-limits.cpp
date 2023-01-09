#include <iostream>
#include <limits>

int main()
{
    // Minimum: minimum finite value (for floating-points, this is positive)
    // Maximum: maximum finite value
    // Lowest: (only for floating-points) lowest representable finite value 
    
    // Short
    std::cout << "The minimum value for short is " << std::numeric_limits<short>::min() << std::endl;
    std::cout << "The maximum value for short is " << std::numeric_limits<short>::max() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Unsigned Short
    std::cout << "The minimum value for unsigned short is " << std::numeric_limits<unsigned short>::min() << std::endl;
    std::cout << "The maximum value for unsigned short is " << std::numeric_limits<unsigned short>::max() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Integer
    std::cout << "The minimum value for integer is " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "The maximum value for integer is " << std::numeric_limits<int>::max() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Unsigned Integer
    std::cout << "The minimum value for unsigned integer is " << std::numeric_limits<unsigned int>::min() << std::endl;
    std::cout << "The maximum value for unsigned integer is " << std::numeric_limits<unsigned int>::max() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Long
    std::cout << "The minimum value for long is " << std::numeric_limits<long>::min() << std::endl;
    std::cout << "The maximum value for long is " << std::numeric_limits<long>::max() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Float
    std::cout << "The minimum value for float is " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "The maximum value for float is " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "The lowest value for float is " << std::numeric_limits<float>::lowest() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Double
    std::cout << "The minimum value for double is " << std::numeric_limits<double>::min() << std::endl;
    std::cout << "The maximum value for double is " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "The lowest value for double is " << std::numeric_limits<double>::lowest() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Long Double
    std::cout << "The minimum value for long double is " << std::numeric_limits<long double>::min() << std::endl;
    std::cout << "The maximum value for long double is " << std::numeric_limits<long double>::max() << std::endl;
    std::cout << "The lowest value for long double is " << std::numeric_limits<long double>::lowest() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Check if an integer is signed
    std::cout << "int is signed: " << std::numeric_limits<int>::is_signed << std::endl;

    // Check the number of digits
    std::cout << "number of digits: " << std::numeric_limits<int>::digits << std::endl;

    std::cout << std::endl;
    
    return 0;
}