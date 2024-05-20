#include <iostream>

#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

CivilEngineer::CivilEngineer() {}

std::ostream &operator<<(std::ostream &out, const CivilEngineer &civilengineer)
{
    // None of this will work (except specialty) because we cannot access private members

    /*
    out << "CivilEngineer [Full Name: " << civilengineer.get_full_name()
        << ", Age: " << civilengineer.get_age()
        << ", Contract Count: " << civilengineer.contract_count
        << ", Speciality: " << civilengineer.m_speciality << "]";
    */
    
    return out;
}

CivilEngineer::~CivilEngineer() {}