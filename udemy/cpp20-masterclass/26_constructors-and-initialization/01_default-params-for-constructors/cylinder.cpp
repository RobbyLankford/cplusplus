#include "cylinder.h"
#include <iostream>

// Constructors
Cylinder::Cylinder(double radius_param, double height_param)
{
    base_radius = radius_param;
    height = height_param;

    std::cout << "Two parameter constructor called." << std::endl;
}

// Methods
double Cylinder::volume()
{
    return PI * base_radius * base_radius * height;
}

// Getters
double Cylinder::get_base_radius()
{
    return base_radius;
}

double Cylinder::get_height()
{
    return height;
}

// Setters
void Cylinder::set_base_radius(double radius_param)
{
    base_radius = radius_param;
}

void Cylinder::set_height(double height_param)
{
    height = height_param;
}