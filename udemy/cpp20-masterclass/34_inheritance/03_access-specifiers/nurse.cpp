#include <iostream>

#include "nurse.h"
#include "person.h"

Nurse::Nurse() {}

std::ostream &operator<<(std::ostream &out, const Nurse &nurse)
{
    out << "Nurse [Full Name: " << nurse.get_full_name()
        << ", Age: " << nurse.get_age()
        << ", Address: " << nurse.get_address()
        << ", Practice Certificate ID: " << nurse.practice_certificate_id << "]";

    return out;
}

Nurse::~Nurse() {}