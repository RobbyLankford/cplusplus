#include "person.h"

// Definition
int Person::person_count = 8;

// Definition of the constructor
Person::Person(const std::string &name_param, int age_param)
    : full_name {name_param}, age {age_param}
{
    ++person_count;
}

// Declaration and definition
double add(double a, double b)
{
    return a + b;
}