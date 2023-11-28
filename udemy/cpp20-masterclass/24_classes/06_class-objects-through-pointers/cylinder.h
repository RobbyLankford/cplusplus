#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"

class Cylinder
{   
    public:
        // Constructors
        Cylinder() = default;
        Cylinder(double radius_param, double height_param);

        // Methods
        double volume();

        // Getter and Setter Methods
        double get_base_radius();
        double get_height();

        void set_base_radius(double radius_param);
        void set_height(double height_param);
    
    private:
        // Member variables
        double base_radius {1};
        double height {1};
};

#endif