#include <iostream>

#include "civilengineer.h"
#include "engineer.h"
#include "person.h"

CivilEngineer::CivilEngineer()
{
    std::cout << "Default constructor called for CivilEngineer..." << std::endl;
}

std::ostream &operator<<(std::ostream &out, const CivilEngineer &civilengineer)
{
    out << "CivilEngineer [Full Name: " << civilengineer.get_full_name()
        << ", Age: " << civilengineer.get_age()
        << ", Address: " << civilengineer.get_address()
        << ", Contract Count: " << civilengineer.get_contract_count()
        << ", Speciality: " << civilengineer.get_speciality() << "]";
    
    return out;
}

CivilEngineer::~CivilEngineer() {}