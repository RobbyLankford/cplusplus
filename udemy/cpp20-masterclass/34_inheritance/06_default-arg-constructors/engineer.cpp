#include <iostream>

#include "engineer.h"
#include "person.h"

Engineer::Engineer()
{
    std::cout << "Default constructor for Engineer called..." << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Engineer &engineer)
{
    out << "Engineer [Full Name: " << engineer.get_full_name()
        << ", Age: " << engineer.get_age()
        << ", Address: " << engineer.get_address()
        << ", Contract Count: " << engineer.get_contract_count() << "]";
    
    return out;
}

Engineer::~Engineer() {}