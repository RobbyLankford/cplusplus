#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"

// Public inheritance from Engineer
class CivilEngineer : public Engineer
{
    friend std::ostream &operator<<(std::ostream &out, const CivilEngineer &civilengineer);

    public:
        CivilEngineer();
        ~CivilEngineer();

        void build_road()
        {
            get_full_name(); // Ok, was "resurrected" non-privately in Engineer
            
            //m_full_name = "John Doe"; // Not ok, not "resurrected" in Engineer
            //m_age = 45; // Not ok, not "resurrected" in Engineer

            add(10, 2); // Ok, was "resurrected" non-privately in Engineer
            add(10, 2, 4); // Ok, was "resurrected" non-privately in Engineer
        }

    public:
        // Not ok, was not "resurrected" in Engineer, which privately inherited it from Person
        //using Person::do_something;

    private:
        std::string m_speciality {"None"};
};

#endif