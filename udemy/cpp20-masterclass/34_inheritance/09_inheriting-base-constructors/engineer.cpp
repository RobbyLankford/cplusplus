#include <iostream>

#include "engineer.h"
#include "person.h"

// Do not need to define Engineer::Engineer() or Engineer::Engineer(const Engineer &source)

Engineer::Engineer(std::string_view full_name, int age, std::string_view address, int contract_count_param)
    : Person(full_name, age, address), contract_count(contract_count_param)
{
    std::cout << "Custom constructor for Engineer called..." << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Engineer &engineer)
{
    out << "Engineer [Full Name: " << engineer.get_full_name()
        << ", Age: " << engineer.get_age()
        << ", Address: " << engineer.get_address()
        << ", Contract Count: " << engineer.contract_count << "]";
    
    return out;
}

Engineer::~Engineer() {}