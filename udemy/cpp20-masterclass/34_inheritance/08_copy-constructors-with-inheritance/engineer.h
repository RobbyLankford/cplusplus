#ifndef ENGINEER_H
#define ENGINEER_H

#include "person.h"

class Engineer : public Person
{
    friend std::ostream &operator<<(std::ostream &out, const Engineer &eingineer);

    public:
        Engineer();
        Engineer(std::string_view full_name, int age, std::string_view address, int contract_count);

        // Copy Constructor
        Engineer(const Engineer &source);

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