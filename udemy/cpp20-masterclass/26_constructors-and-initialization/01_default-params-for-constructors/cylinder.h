#ifndef CYLINDER_H
#define CYLINDER_H

const double PI {3.14159};

class Cylinder
{
    public:
        // Constructors
        Cylinder() = default;
        Cylinder(double radius_param, double height_param = 10);

        // Methods
        double volume();

        // Getters
        double get_base_radius();
        double get_height();

        // Setters
        void set_base_radius(double radius_param);
        void set_height(double height_param);
    
    private:
        double base_radius {1};
        double height {2};
};

#endif