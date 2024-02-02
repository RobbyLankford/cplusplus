#ifndef CYLINDER_H
#define CYLINDER_H

#include <string>

class Cylinder
{
    public:
    
        // Before C++ 17, only the following could be declared inline
        static const int INT_CONSTANT {5};
        enum Color {Red = 0, Green, Blue};
        static const Color COLOR_CONSTANT {Color::Green};
    
        // Anything else would have to be declared in a different cpp file
        static const std::string default_color;
	    static const char *CHAR_PTR_CONSTANT;
        static const int INT_ARRAY_CONSTANT[5];
        static const float FLOAT_CONSTANT;
        static const std::string STRING_ARRAY_CONSTANT[2];
    
        // These are not static, so they can be declared here
        const float WEIRD_FLOAT;
	    const char *WEIRD_C_STRING;
	    const int WEIRD_INT_ARRAY_CONSTANT[5];

        //Constructors
        Cylinder(double radius_param , double height_param );
    
        //Getters
        double get_base_radius();
        double get_height();

        //Setters
        void set_base_radius(double radius_param);
        void set_height(double height_param);

        //Other operations on the class object
        double volume();
    
    private:
        double base_radius {1.0};
        double height {1.0};
        static const double PI;
};

#endif