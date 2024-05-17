#ifndef NURSE_H
#define NURSE_H

#include "person.h"

// Nurse will do protected inheritance from Person
class Nurse : protected Person
{
    friend std::ostream &operator<<(std::ostream &out, const Nurse &nurse);

    public:
        Nurse();
        ~Nurse();

        // See the access we have to inherited members from Person
        void treat_unwell_person()
        {
            m_full_name = "John Doe"; // Ok because public
            m_age = 55; // Ok because protected
            //m_address = "ABCD"; // Not ok because private
        }

    private:
        int practice_certificate_id {0};
};

#endif