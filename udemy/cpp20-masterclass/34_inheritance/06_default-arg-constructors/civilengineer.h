#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"

class CivilEngineer : public Engineer
{
    public:
        CivilEngineer();
        ~CivilEngineer();
    
        void build_road()
        {
            add(10, 2);
            add(10, 2, 4);
        }
    
        std::string get_speciality() const
        {
            return m_speciality;
        }

    private:
        std::string m_speciality {"None"};
};

#endif