#include <iostream>

const double PI {3.14159};

// Methods for accessing and changing private member variables

class Cylinder
{
    private:
        // Member variables
        double base_radius;
        double height;
    
    public:
        // Constructors
        Cylinder() = default;

        Cylinder(double radius_param, double height_param)
        {
            base_radius = radius_param;
            height = height_param;
        }

        // Functions (methods)
        double volume()
        {
            return PI * base_radius * base_radius * height;
        }

        // Setter methods
        void set_base_radius(double radius_param)
        {
            base_radius = radius_param;
        }

        void set_height(double height_param)
        {
            height = height_param;
        }

        // Getter methods
        double get_base_radius()
        {
            return base_radius;
        }

        double get_height()
        {
            return height;
        }
};

int main()
{
    Cylinder cylinder1(10, 10);
    
    std::cout << "volume: " << cylinder1.volume() << std::endl;

    // Check parameters
    std::cout << "base radius: " << cylinder1.get_base_radius() << std::endl;
    std::cout << "height: " << cylinder1.get_height() << std::endl;

    // Modify the cylinder
    cylinder1.set_base_radius(100);
    cylinder1.set_height(10);

    std::cout << "volume: " << cylinder1.volume() << std::endl;

    return 0;
}