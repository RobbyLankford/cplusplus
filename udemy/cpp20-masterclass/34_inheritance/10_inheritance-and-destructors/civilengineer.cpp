#include <iostream>

#include "civilengineer.h"
#include "engineer.h"
#include "person.h"

CivilEngineer::CivilEngineer()
{
    std::cout << "Default constructor called for CivilEngineer..." << std::endl;
}

CivilEngineer::CivilEngineer(std::string_view full_name, int age, std::string_view address, int contract_count, std::string_view speciality)
    : Engineer(full_name, age, address, contract_count), m_speciality(speciality)
{
    std::cout << "Custom constructor called for CivilEngineer..." << std::endl;
}

CivilEngineer::CivilEngineer(const CivilEngineer &source)
    : Engineer(source), m_speciality(source.m_speciality)
{
    std::cout << "Custom copy constructor called for CivilEngineer..." << std::endl;
}

std::ostream &operator<<(std::ostream &out, const CivilEngineer &civilengineer)
{
    out << "CivilEngineer [Full Name: " << civilengineer.get_full_name()
        << ", Age: " << civilengineer.get_age()
        << ", Address: " << civilengineer.get_address()
        << ", Contract Count: " << civilengineer.get_contract_count()
        << ", Speciality: " << civilengineer.m_speciality << "]";

    return out;
}

CivilEngineer::~CivilEngineer()
{
    std::cout << "Destructor called for CivilEngineer..." << std::endl;
}