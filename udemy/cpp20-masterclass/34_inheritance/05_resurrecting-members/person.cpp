#include <iostream>

#include "person.h"

Person::Person(std::string_view full_name, int age, const std::string address)
    : m_full_name{full_name}, m_age{age}, m_address{address}
{

}

void Person::do_something() const
{
    std::cout << "Hello" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Person &person)
{
    out << "Person [Full Name: " << person.get_full_name()
        << ", Age: " << person.get_age()
        << ", Address: " << person.get_address() << "]";
    
    return out;
}

Person::~Person() {}