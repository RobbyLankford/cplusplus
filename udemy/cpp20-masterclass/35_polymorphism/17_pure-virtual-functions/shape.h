#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape
{
    protected:
        Shape() = default;
        Shape(std::string_view description);
    
    public:
        // If destructor is not public, will not be able to delete base pointers
        virtual ~Shape() = default;

        // Pure virtual functions
        virtual double perimeter() const = 0;
        virtual double surface() const = 0;
    
    private:
        std::string m_description;
};

#endif