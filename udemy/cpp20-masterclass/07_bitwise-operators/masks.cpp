#include <iostream>
#include <iomanip>
#include <bitset>

int main()
{
    // Highlight position of bits in a byte, mask other positions with 0 (shadowed)

    const int COLUMN_WIDTH {20};
    const unsigned char mask_bit_0 {0b00000001};
    const unsigned char mask_bit_1 {0b00000010};
    const unsigned char mask_bit_2 {0b00000100};
    const unsigned char mask_bit_3 {0b00001000};
    const unsigned char mask_bit_4 {0b00010000};
    const unsigned char mask_bit_5 {0b00100000};
    const unsigned char mask_bit_6 {0b01000000};
    const unsigned char mask_bit_7 {0b10000000};

    unsigned char var {0b00000000}; // Start with all bits off

    std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    std::cout << "\n-------\n" << std::endl;

    // Setting Bits: make them 1 regardless of what is in there (bitwise OR)
    
    // Set Bit 1
    var |= mask_bit_1;

    std::cout << std::setw(COLUMN_WIDTH) << "Setting bit in position 1: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // Set Bit 5
    var |= mask_bit_5;

    std::cout << std::setw(COLUMN_WIDTH) << "Setting bit in position 5: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    std::cout << "\n-------\n" << std::endl;

    // Resetting Bits: change them back to 0 (bitwise AND and bitwise NOT)

    // Reset Bit 1
    var &= (~mask_bit_1);

    std::cout << std::setw(COLUMN_WIDTH) << "Resetting bit in position 1: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // Reset Bit 5 
    var &= (~mask_bit_5);

    std::cout << std::setw(COLUMN_WIDTH) << "Resetting bit in position 5: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    std::cout << "\n-------\n" << std::endl;

    // Set Multiple Bits (bitwise OR)
    var |= (mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);

    std::cout << std::setw(COLUMN_WIDTH) << "Setting all bits: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    std::cout << "\n-------\n" << std::endl;

    // Resetting Multiple Bits (bitwise AND)
    var &= ~(mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6);
    std::cout << std::setw(COLUMN_WIDTH) << "Resetting bits at even positions: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    std::cout << "\n-------\n" << std::endl;

    // Check Bit State (logical and shifting)
    std::cout << "Checking the state of each bit position (on/off): " << std::endl;
    std::cout << "Position 0: " << ((var & mask_bit_0) >> 0) << std::endl;
    std::cout << "Position 1: " << ((var & mask_bit_1) >> 1) << std::endl;
    std::cout << "Position 2: " << ((var & mask_bit_2) >> 2) << std::endl;
    std::cout << "Position 3: " << ((var & mask_bit_3) >> 3) << std::endl;
    std::cout << "Position 4: " << ((var & mask_bit_4) >> 4) << std::endl;
    std::cout << "Position 5: " << ((var & mask_bit_5) >> 5) << std::endl;
    std::cout << "Position 6: " << ((var & mask_bit_6) >> 6) << std::endl;
    std::cout << "Position 7: " << ((var & mask_bit_7) >> 7) << std::endl;

    std::cout << std::endl;

    std::cout << "Position 6: " << static_cast<bool>(var & mask_bit_6) << std::endl;
    std::cout << "Position 7: " << static_cast<bool>(var & mask_bit_7) << std::endl;
    std::cout << "\n-------\n" << std::endl;

    // Toggle Bits (bitwise XOR)

    // Toggle Bit 0
    var ^= mask_bit_0;

    std::cout << std::setw(COLUMN_WIDTH) << "Toggle Bit 0: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // Toggle Bit 7
    var ^= mask_bit_7;

    std::cout << std::setw(COLUMN_WIDTH) << "Toggle Bit 7: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    std::cout << std::endl;

    // Toggle Multiple Bits
    var ^= (mask_bit_7 | mask_bit_6 | mask_bit_5 | mask_bit_4);

    std::cout << std::setw(COLUMN_WIDTH) << "Toggle Multiple Bits (7, 6, 5, 4): " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;
    std::cout << std::endl;

    return 0;
}