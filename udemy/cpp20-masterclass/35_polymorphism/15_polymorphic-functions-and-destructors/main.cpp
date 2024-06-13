#include <iostream>

/* Big Idea: do NOT call virtual (polymorphic) functions from constructors & destructors */

class Base
{
    public:
        Base()
        {
            std::cout << "Base constructor called." << std::endl;
        }

        virtual ~Base()
        {
            std::cout << "Base desctructor called." << std::endl;
        }

        virtual void setup()
        {
            std::cout << "Base::setup() called." << std::endl;
            m_value = 10;
        }

        virtual void clean_up()
        {
            std::cout << "Base::clean_up() called." << std::endl;
        }

        int get_value()
        {
            return m_value;
        }
    
    protected:
        int m_value;
};

class Derived : public Base
{
    public:
        Derived() : Base()
        {
            std::cout << "Derived constructor called." << std::endl;
        }

        virtual ~Derived()
        {
            std::cout << "Derived destructor called." << std::endl;
        }

        virtual void setup() override
        {
            std::cout << "Derived::setup() called." << std::endl;
            m_value = 100;
        }

        virtual void clean_up() override
        {
            std::cout << "Derived::clean_up() called." << std::endl;
        }
};

/*
    Notes:
    - Calling a virtual functions from a constructor/destructor will not give you polymorphic results
    - The call will never go to a more derived class (will get static bindings)
*/

int main()
{
    Base *p_base = new Derived;

    p_base->setup();

    std::cout << "\n-------\n" << std::endl;

    auto value = p_base->get_value();

    std::cout << "Value: " << value << std::endl;

    std::cout << "\n-------\n" << std::endl;

    p_base->clean_up();

    delete p_base;

    return 0;
}