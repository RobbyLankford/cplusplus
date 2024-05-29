#ifndef CHILD_H
#define CHILD_H

#include "parent.h"

class Child : public Parent
{
    public:
        Child();
        Child(int member_var) : m_member_var(member_var) {}

        ~Child() = default;

        void print_var() const
        {
            std::cout << "The value in Child is: " << m_member_var << std::endl;
        }

        void show_values() const
        {
            // The same variable names can be used, but Parent's must be accessed with ::
            std::cout << "The value in Child is: " << m_member_var << std::endl;
            std::cout << "The value in Parent is: " << Parent::m_member_var << std::endl;
        }
    
    private:
        int m_member_var {1000};
};

#endif