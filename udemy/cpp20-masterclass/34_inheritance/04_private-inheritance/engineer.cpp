#include <iostream>

#include "person.h"
#include "engineer.h"

Engineer::Engineer() {}

std::ostream &operator<<(std::ostream &out, const Engineer &engineer)
{
    out << "Engineer [Full Name: " << engineer.get_full_name()
        << ", Age: " << engineer.get_age()
        << ", Address: " << engineer.get_address()
        << ", Contract Count: " << engineer.contract_count << "]";
    
    return out;
}

Engineer::~Engineer() {}