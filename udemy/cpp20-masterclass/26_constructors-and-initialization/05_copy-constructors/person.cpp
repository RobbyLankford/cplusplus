#include "person.h"

Person::~Person()
{
    // Make sure that memory is not leaking
    delete age;
}

// Use Person constructor to construct other Person objects
Person::Person(const std::string &last_name_param)
    : Person(last_name, "")
{

}

Person::Person(const std::string &last_name_param, const std::string &first_name_param)
    : Person(last_name_param, first_name_param, 0)
{

}

Person::Person(const std::string &last_name_param, const std::string &first_name_param, int age_param)
    : last_name(last_name_param), first_name(first_name_param), age(new int(age_param))
{

}

// Do NOT use copies and create a Person object like this
/*
Person::Person(const Person source_p)
    : last_name(source_p.get_last_name()), first_name(source_p.get_last_name()), age(source_p.get_age())
{

}
*/

// Memberwise copy is also bad, do not do this
/*
Person::Person(const Person &source_p)
    : last_name(source_p.get_last_name()), first_name(source_p.get_last_name()), age(source_p.get_age())
{
    std::cout << "Copy constructor called" << std::endl;
}
*/

// Also, do not just blindly copy pointer member variables
/*
Person::Person(const Person &source_p)
    : last_name(source_p.get_last_name()), first_name(source_p.get_last_name()), age(new int(*(source_p.get_age())))
{
    std::cout << "Copy constructor called" << std::endl;
}
*/

// Delegate from the copy constructor
Person::Person(const Person &source_p)
    : Person(source_p.get_last_name(), source_p.get_first_name(), *(source_p.get_age()))
{
    std::cout << "Copy constructor called" << std::endl;
}