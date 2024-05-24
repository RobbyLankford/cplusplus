#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"

class CivilEngineer : public Engineer
{
    friend std::ostream &operator<<(std::ostream &out, const CivilEngineer &civilengineer);

    public:
        CivilEngineer();
        CivilEngineer(std::string_view full_name, int age, std::string_view address, int contract_count, std::string_view speciality);

        // Copy Constructor
        CivilEngineer(const CivilEngineer &source);

        ~CivilEngineer();

        void build_road()
        {
            add(10, 2);
            add(10, 2, 4);
        }

    private:
        std::string m_speciality {"None"};
};

#endif