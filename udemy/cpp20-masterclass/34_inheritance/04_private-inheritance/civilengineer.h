#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"

// All non-private attributes of Engineer will be public in Civil Engineer
class CivilEngineer : public Engineer
{   
    friend std::ostream &operator<<(std::ostream &out, const CivilEngineer &civilengineer);

    public:
        CivilEngineer();
        ~CivilEngineer();

        void build_road()
        {
            //get_full_name(); // Not OK, name is private to Engineer
            //m_full_name = "John Doe"; // Not ok, name is private to Engineer
            //m_age = 45; // Not ok, age is private to Engineer
        }

    private:
        std::string m_speciality {"None"};
};

#endif