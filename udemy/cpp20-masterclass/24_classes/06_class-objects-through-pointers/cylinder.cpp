#include "cylinder.h"

Cylinder::Cylinder(double radius_param, double height_param)
{
    base_radius = radius_param;
    height = height_param;
}

double Cylinder::volume()
{
    return PI * base_radius * base_radius * height;
}

// Getter and setter methods
double Cylinder::get_base_radius()
{
    return base_radius;
}

double Cylinder::get_height()
{
    return height;
}

void Cylinder::set_base_radius(double radius_param)
{
    base_radius = radius_param;
}

void Cylinder::set_height(double height_param)
{
    height = height_param;
}