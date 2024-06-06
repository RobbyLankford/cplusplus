#ifndef CAT_H
#define CAT_H

#include "feline.h"

class Cat : public Feline
{
    public:
        Cat() = default;
        Cat(std::string_view fur_style, std::string_view description);

        virtual ~Cat();

        virtual void meow() const
        {
            std::cout << "Cat::meow() called for cat " << m_description << std::endl;
        }

        virtual void breathe() const
        {
            std::cout << "Cat::breathe() called for: " << m_description << std::endl;
        }

        virtual void run() const override
        {
            std::cout << "Cat " << m_description << " is running." << std::endl;
        }
};

#endif