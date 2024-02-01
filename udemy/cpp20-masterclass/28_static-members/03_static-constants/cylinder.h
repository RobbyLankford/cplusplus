#ifndef CYLINDER_H
#define CYLINDER_H

#include <string>

class Cylinder
{
    public:
        // Static constants (public)
        static inline const std::string default_color {"Red"};

        // Constructors
        Cylinder() = default;
        Cylinder(double radius_param, double height_param);

        // Getters
        double get_base_radius() const;
        double get_height() const;

        // Setters
        void set_base_radius(double radius_param);
        void set_height(double height_param);

        // Other operations
        double volume() const;
    
    private:
        // Static constants (private) (C++17)
        static inline const double PI {3.14159};

        double base_radius {1.0};
        double height {1.0};
};

#endif