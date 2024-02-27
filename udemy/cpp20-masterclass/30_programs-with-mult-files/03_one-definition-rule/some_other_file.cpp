#include "person.h"

// Once defined, cannot define anywhere else
double add(double a, double b)
{
    return a + b;
}

// Already declared in person.h, but value is defined here
int Person::person_count = 8;

// Declared in person.h, but initiated here
Person::Person(const std::string &names_param, int age_param)
    : full_name {names_param}, age {age_param}
{
    ++person_count;
}