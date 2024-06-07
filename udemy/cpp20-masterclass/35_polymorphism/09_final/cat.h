#ifndef CAT_H
#define CAT_H

#include "feline.h"

// Cat is final, so restricts how this class can be derived
class Cat final : public Feline
{
    public:
        Cat() = default;
        Cat(std::string_view fur_style, std::string_view description);

        virtual ~Cat();

        // This is a useless virtual method since Cat is final
        // No one deriving from it will have a chance to specialize it
        virtual void meow() const
        {
            std::cout << "Cat::meow() called for cat " << m_description << std::endl;
        }

        // This method, however, is useful
        virtual void run() const override
        {
            std::cout << "Cat " << m_description << " is running." << std::endl;
        }
};

#endif