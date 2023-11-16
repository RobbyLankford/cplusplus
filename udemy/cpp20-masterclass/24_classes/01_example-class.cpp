#include <iostream>

const double PI {3.14159};

// Create custom data objects

class Cylinder
{
    // Member variables
    public:
        double base_radius {1.0};
        double height {1.0};
    
    // Functions (methods)
    public:
        double volume()
        {
            return PI * base_radius * base_radius * height;
        }
};

int main()
{
    // Default member values
    Cylinder cylinder1; 
    std::cout << "Volume: " << cylinder1.volume() << std::endl;

    // Change the member values
    cylinder1.base_radius = 10;
    cylinder1.height = 3;
    std::cout << "Volume: " << cylinder1.volume() << std::endl;

    return 0;
}