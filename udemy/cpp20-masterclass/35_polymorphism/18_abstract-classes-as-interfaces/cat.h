#ifndef CAT_H
#define CAT_H

#include "feline.h"

class Cat : public Feline
{
    public:
        Cat() = default;
        Cat(const std::string &fur_style, const std::string &description);

        ~Cat();

        virtual void meow() const
        {
            std::cout << "Cat::meow() called for cat " << m_description << std::endl;
        }

        virtual void stream_insert(std::ostream &out) const override
        {
            out << "Cat [description: " << m_description << ", fur_style: " << m_fur_style << "]";
        }
};

#endif