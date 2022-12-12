#include <iostream>

int main()
{
    // Integers are signed by default, indicating they can be positive or negative
    int value1 {10};
    int value2 {-300};
    signed int value3 {10};
    signed int value4 {-300};
    unsigned int value5 {10};
    // unsigned int value6 {-300}; // Would cause an error

    std::cout << "value1: " << value1 << std::endl;
    std::cout << "value2: " << value2 << std::endl;
    std::cout << "value3: " << value3 << std::endl;
    std::cout << "value4: " << value4 << std::endl;
    std::cout << "value5: " << value5 << std::endl;
    std::cout << "\n#=======#\n" << std::endl;

    // Can also flag integers as short or long
    short short_var {-32768}; // 2 Bytes
    short int short_int {455}; // 2 Bytes
    signed short signed_short {122}; // 2 Bytes
    signed short int signed_short_int {-456}; // 2 Bytes
    unsigned short int unsigned_short_int {456}; // 2 Bytes

    int int_var {55}; // 4 Bytes
    signed signed_var {66}; // 4 Bytes
    signed int signed_int {77}; // 4 Bytes
    unsigned int unsigned_int {77}; // 4 Bytes

    long long_var {88}; // 4 *OR* 8 Bytes
    long int long_int {33}; // 4 *OR* 8 Bytes
    signed long signed_long {44}; // 4 *OR* 8 Bytes
    signed long int signed_long_int {44}; // 4 *OR* 8 Bytes
    unsigned long int unsigned_long_int {44}; // 4 *OR* 8 Bytes

    long long long_long_var {888}; // 8 Bytes
    long long int long_long_int {999}; // 8 Bytes
    signed long long signed_long_long {444}; // 8 Bytes
    signed long long int signed_long_long_int {1234}; // 8 Bytes
    unsigned long long int unsigned_long_long_int {1234}; // 8 Bytes

    std::cout << "short: " << sizeof(short_var) << std::endl;
    std::cout << "short int: " << sizeof(short_int) << std::endl;
    std::cout << "signed short: " << sizeof(signed_short) << std::endl;
    std::cout << "signed short int: " << sizeof(signed_short_int) << std::endl;
    std::cout << "unsigned short int: " << sizeof(unsigned_short_int) << std::endl;

    std::cout << "\n" << std::endl;

    std::cout << "int: " << sizeof(int_var) << std::endl;
    std::cout << "signed: " << sizeof(signed_var) << std::endl;
    std::cout << "signed int: " << sizeof(signed_int) << std::endl;
    std::cout << "unsigned int: " << sizeof(unsigned_int) << std::endl;

    std::cout << "\n" << std::endl;

    std::cout << "long: " << sizeof(long_var) << std::endl;
    std::cout << "long int: " << sizeof(long_int) << std::endl;
    std::cout << "signed long: " << sizeof(signed_long) << std::endl;
    std::cout << "signed long int: " << sizeof(signed_long_int) << std::endl;
    std::cout << "unsigned long int: " << sizeof(unsigned_long_int) << std::endl;

    std::cout << "\n" << std::endl;

    std::cout << "long long: " << sizeof(long_long_var) << std::endl;
    std::cout << "long long int: " << sizeof(long_long_int) << std::endl;
    std::cout << "long signed long: " << sizeof(signed_long_long) << std::endl;
    std::cout << "long signed long int: " << sizeof(signed_long_long_int) << std::endl;
    std::cout << "long unsigned long int: " << sizeof(unsigned_long_long_int) << std::endl;

    std::cout << "\n#=======#\n" << std::endl;

    return 0;
}