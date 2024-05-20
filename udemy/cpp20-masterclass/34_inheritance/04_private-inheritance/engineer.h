#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"

// All non-private attributes of Person will be private in Engineer
class Engineer : private Person
{   
    friend std::ostream &operator<<(std::ostream &out, const Engineer &engineer);

    public:
        Engineer();
        ~Engineer();

        void build_something()
        {
            m_full_name = "John Doe"; // Ok, public to Person
            m_age = 23; // Ok, protected to Person
            //m_address = "ABCD"; // Not ok, private to Person
        }

    private:
        int contract_count {0};
};

#endif