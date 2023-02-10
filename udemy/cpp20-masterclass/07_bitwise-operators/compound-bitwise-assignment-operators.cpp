#include <iostream>
#include <iomanip>
#include <bitset>

int main()
{
    // Do something with a variable and assign the result back to the same variable

    const int COLUMN_WIDTH {20};
    unsigned char sandbox {0b00110100}; // 8 bits, positive numbers only

    std::cout << std::setw(COLUMN_WIDTH) << "Initial value: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox) << std::endl;
    std::cout << "\n-------\n" << std::endl;

    // Compound Left Shift
    sandbox <<= 2;

    std::cout << std::setw(COLUMN_WIDTH) << "Shift left 2 bits in place: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox) << std::endl;
    std::cout << "\n-------\n" << std::endl;

    // Compound Right Shift
    sandbox >>= 4;

    std::cout << std::setw(COLUMN_WIDTH) << "Shift right 4 bits in place: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox) << std::endl;
    std::cout << "\n-------\n" << std::endl;

    // Compound OR
    sandbox |= 0b00001111;

    std::cout << std::setw(COLUMN_WIDTH) << "Compound OR with 0000 1111: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox) << std::endl;
    std::cout << "\n-------\n" << std::endl;

    // Compound AND
    sandbox &= 0b00000000;

    std::cout << std::setw(COLUMN_WIDTH) << "Compound AND with 0000 0000: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox) << std::endl;
    std::cout << "\n-------\n" << std::endl;

    // Compound XOR
    sandbox ^= 0b00000011;

    std::cout << std::setw(COLUMN_WIDTH) << "Compound XOR with 0000 0011: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox) << std::endl;
    std::cout << std::endl;

    return 0;
}