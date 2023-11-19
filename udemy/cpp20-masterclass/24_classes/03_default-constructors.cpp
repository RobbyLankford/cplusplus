#include <iostream>

const double PI {3.14159};

// If unspecified, can let the compiler set the default values of a constructor

class Cylinder
{
    private:
        // Member variables
        double base_radius {1.0};
        double height {1.0};
    
    public:
        // Constructors
        Cylinder() = default;

        Cylinder(double radius_param, double height_param)
        {
            base_radius = radius_param;
            height = height_param;
        }

        double volume()
        {
            return PI * base_radius * base_radius * height;
        }
};

int main()
{
    // Uses default constructor, which has radius = 1 and height = 1 (member variables)
    Cylinder cylinder1;
    std::cout << "volume: " << cylinder1.volume() << std::endl;

    return 0;
}