#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"

// Private Inheritance from Person
class Engineer : private Person
{
    friend std::ostream &operator<<(std::ostream &out, const Engineer &engineer);

    public:
        Engineer();
        ~Engineer();

        void build_something()
        {
            m_full_name = "John Doe";
            m_age = 23;
            //m_address = "ABCD"; // Does not work, private to Person
        }
    
    // Even though we are using private inheritance, "using" allows it to be passed to further classes
    public:
        using Person::add;

    protected:
        using Person::get_full_name;
        using Person::get_age;
        using Person::get_address;
        //using Person::m_address; // not ok, as it is private to Person so cannot be "resurrected"

        int get_contract_count() const
        {
            return contract_count;
        }

    private:
        int contract_count {0};
};

#endif