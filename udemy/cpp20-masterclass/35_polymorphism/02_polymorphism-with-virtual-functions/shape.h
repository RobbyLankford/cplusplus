#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
#include <string_view>

class Shape
{
    public:
        Shape() = default;
        Shape(std::string_view description);

        ~Shape();

        // Use polymorphism by using virtual keyword
        virtual void draw() const
        {
            std::cout << "Shape::draw() called. Drawing " << m_description << std::endl;
        }
    
    protected:
        std::string m_description {""};
};

#endif