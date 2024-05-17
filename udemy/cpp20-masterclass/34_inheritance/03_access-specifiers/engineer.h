#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"

// Nurse will do private inheritance from Person
class Engineer : private Person
{
    friend std::ostream &operator<<(std::ostream &out, const Engineer &engineer);

    public:
        Engineer();
        ~Engineer();

        void build_something()
        {
            m_full_name = "John Doe"; // Ok because public
            m_age = 55; // Ok because protected
            //m_address = "ABCD"; // Not ok because private
        }

    private:
        int contract_count {0};
};

#endif