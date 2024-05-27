#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"

/*
    Notes on inheriting constructors
    - Copy constructors are NOT inherited (but, compiler will usually insert an automatic one)
    - Inherited constructors are base constructors (no knowledge of the derived class)
    - Any member derived from derived class will contain junk or the default value
    - Constructors are inherited with whatever access specifier they had in the base class
    - On top of derived constructors, can add additional ones that possibly properly initialize derived member variables
    - Inheriting constructors adds a level of confusion to code, so in general, avoid them
*/

class Engineer : public Person
{
    // Inhert constructors
    using Person::Person;

    friend std::ostream &operator<<(std::ostream &out, const Engineer &engineer);

    public:
        // Do not need to do the following since they are inherited from Person
        /*
        Engineer();
        Engineer(const Engineer &source);
        */

        Engineer(std::string_view full_name, int age, std::string_view address, int contract_count);

        ~Engineer();

        void build_something()
        {
            m_full_name = "John Doe";
            m_age = 23;
        }

        int get_contract_count() const
        {
            return contract_count;
        }
    
    private:
        int contract_count {0};
};

#endif