#include <iostream>

/*
    An enumeration is a type whose value is restricted to a range of values.
    Each enumeration is representated by an integral value.
    The default type associated with enums is int.
*/

// Starts at 0: Jan = 0, Feb = 1, so on...
enum class Month1 {
    Jan, Feb, Mar, Apr,
    May, Jun, Jul, Aug,
    Sep, Oct, Nov, Dec
};

// Might want January to start at 1
enum class Month2 {
    Jan = 1, Feb, Mar, Apr,
    May, Jun, Jul, Aug, 
    Sep, Oct, Nov, Dec
};

// Might also want multiple enumerators for the same value
enum class Month3 {
    Jan = 1, January = Jan, Feb = 2, February = Feb, Mar = 3, March = Mar, Apr,
    May, Jun, Jul, Aug,
    Sep, Oct, Nov, Dec
};

// Can change the default type (unsigned char is 0 - 255)
enum class Month4: unsigned char {
    Jan = 0, January = Jan, Feb, February = Feb, Mar = 3, March = Mar, Apr,
    May, Jun, Jul, Aug,
    Sep, Oct, Nov, Dec
};

int main()
{
    Month1 month1 {Month1::Jan};
    
    // std::cout << "Month: " << month << std::endl; // Compiler error, cannot print this way
    std::cout << "Jan: " << static_cast<int>(month1) << std::endl;
    std::cout << "sizeof(month1): " << sizeof(month1) << std::endl;
    std::cout << std::endl;

    Month2 month2 {Month2::Dec};
    
    std::cout << "Dec: " << static_cast<int>(month2) << std::endl;
    std::cout << "sizeof(month2): " << sizeof(month2) << std::endl;
    std::cout << std::endl;

    Month3 month3 {Month3::February};
    
    std::cout << "February: " << static_cast<int>(month3) << std::endl;
    std::cout << "sizeof(month3): " << sizeof(month3) << std::endl;
    std::cout << std::endl;

    Month4 month4 {Month4::March};

    std::cout << "March: " << static_cast<int>(month4) << std::endl;
    std::cout << "sizeof(month4): " << sizeof(month4) << std::endl;

    return 0;
}