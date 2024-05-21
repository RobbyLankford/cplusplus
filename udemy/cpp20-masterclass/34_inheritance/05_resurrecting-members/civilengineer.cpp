#include <iostream>

#include "civilengineer.h"
#include "engineer.h"
#include "person.h"

CivilEngineer::CivilEngineer() {}

CivilEngineer::~CivilEngineer() {}

std::ostream &operator<<(std::ostream &out, const CivilEngineer &civilengineer){
    out << "CivilEngineer [Full Name: " << civilengineer.get_full_name() 
        << ", Age: " << civilengineer.get_age() 
        << ", Address: " << civilengineer.get_address() 
        << ", Contract Count: " << civilengineer.get_contract_count() 
        << ", Speciality: " << civilengineer.m_speciality << "]";
                    		
    return out;  
}