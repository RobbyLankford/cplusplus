#include <iostream>

int main()
{
    // Literals: data that is directly represented in code

    // 2 bytes
    short short_var {-32768};
    short int short_int {455};
    signed short signed_short {122};
    signed short int signed_short_int {-456};

    // Use U suffix for unsigned literal
    unsigned short int unsigned_short_int {5678U}; 

    // 4 Bytes
    int int_var {55};
    signed signed_var {66};
    signed int signed_int {77};
    unsigned int unsigned_int {555U};

    // 4 or 8 Bytes

    // Use L suffix for long literal
    long long_var {88L};
    long int long_int {33L};
    signed long signed_long {44L};
    signed long int signed_long_int {44L};
    unsigned long int unsigned_long_int {555UL};

    long long long_long {888LL};
    long long int long_long_int {999LL};
    signed long long signed_long_long {444LL};
    signed long long int signed_long_long_int {1234LL};

    // Grouping Number: C++14 and onwards
    unsigned int prize {1'500'00'0u};
    std::cout << "The prize is: " << prize << std::endl;

    // Narrowing Errors
    // Possible narrowing errors are caught by the braced initializer method
    // Assignment and cuntional do not catch that
    // unsigned char distance {555U}; // Error, 0 ~ 255
    // unsigned int game_score {-20}; // Error, cannot be negative

    // For hexidecimal number system, prefix literals with 0x
    unsigned int hex_num1 {0x22BU}; // Decimal 555
    int hex_num2 {0x400}; // Decimal 1024

    std::cout << std::hex << "The hex number is: " << hex_num1 << std::endl;
    std::cout << std::hex << "The hex number is: " << hex_num2 << std::endl;

    // Colors can also be represented hith hexidecimal
    int black_color {0xffffff};
    std::cout << "The color black is: " << std::hex << black_color << std::endl;
    std::cout << "The color black is: " << std::dec << black_color << std::endl;

    // For octal literals, prefix literals with 0
    int oct_num {0777U}; // Decimal 511
    std::cout << std::oct << "The octal number is: " << oct_num << std::endl;
    std::cout << std::dec << "The octal number is: " << oct_num << std::endl;

    // For binary literals, prefix with 0b
    unsigned int bin_num {0b11111111U}; // Decimal 255
    std::cout << "The binary number is: " << std::dec << bin_num << std::endl;

    // Other literals
    char char_literal {'c'};
    int num_literal {15};
    float frac_literal {1.5f};
    std::string string_literal {"Hit the road"};

    std::cout << "The char literal is: " << char_literal << std::endl;
    std::cout << "The number literal is: " << num_literal << std::endl;
    std::cout << "The fractional iteral is: " << frac_literal << std::endl;
    std::cout << "The string literal is: " << string_literal << std::endl;

    return 0;
}