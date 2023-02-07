#include <iostream>
#include <iomanip>
#include <bitset>

int main()
{
    // Like the logical operators we have seen before, but operated on bits

    const int COLUMN_WIDTH {20};
    unsigned char value1 {0x3}; // 0000 0011
    unsigned char value2 {0x5}; // 0000 0101

    std::cout << "Original Values: " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "value1: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "value2: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(value2) << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Bitwise AND (only when both bits are 1 will it equal 1)
    std::cout << "Bitwise AND: " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "value1 & value2: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 & value2) << std::endl;
    
    std::cout << "\n-------\n" << std::endl;

    // Bitwise OR (when at least one of the bits is 1 it will equal 1)
    std::cout << "Bitwise OR: " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "value1 | value2: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 | value2) << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Bitwise NOT (will make all 1 bits 0 and all 0 bits 1)
    std::cout << "bitwise NOT:" << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "~value1: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(~value1) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "~value2: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(~value2) << std::endl;

    std::cout << std::endl;

    std::cout << std::setw(COLUMN_WIDTH) << "~01011001 (binary literal): " << std::setw(COLUMN_WIDTH) << std::bitset<8>(~0b01011001) << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "~0x59 (hex literal): " << std::setw(COLUMN_WIDTH) << std::bitset<8>(~0x59) << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Bitwise XOR (when one and only one of the bits is 1, it will equal 1)
    std::cout << "Bitwise XOR: " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "value1 ^ value2: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 ^ value2) << std::endl;

    return 0;
}