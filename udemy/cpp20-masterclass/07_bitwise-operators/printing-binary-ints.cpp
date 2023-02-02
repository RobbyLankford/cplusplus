#include <iostream>
#include <bitset>

int main()
{
    // Want a way to print out integers in binary
    
    // Use unsigned short int so we have 16 bits
    unsigned short int data { 15 };

    // Use std::showbase to clearly show what number system we are using
    std::cout << "data (dec): " << std::showbase << std::dec << data << std::endl;
    std::cout << "data (oct): " << std::showbase << std::oct << data << std::endl;
    std::cout << "data (hex): " << std::showbase << std::hex << data << std::endl;

    // Now print out binary (do not need std::showbase)
    // Need to supply how many bits; use 16 since we declared an unsigned short int 
    std::cout << "data (bin): " << std::bitset<16>(data) << std::endl;

    return 0;
}