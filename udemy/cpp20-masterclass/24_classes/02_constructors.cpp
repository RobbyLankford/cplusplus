#include <iostream>

const double PI {3.14159};

/*
    A special kind of method that is called when an instance of a class is created:
    - No return type
    - Same name as the class
    - Can have parameters or can have an empty parameter list
    - Usually used to initialize member variables of a class
*/

class Cylinder
{   
    private:
        // Member variables
        double base_radius {1.0};
        double height {1.0};

    public:
        // Constructors
        Cylinder()
        {
            // Default values if none are provided
            base_radius = 2.0;
            height = 2.0;
        }

        Cylinder(double radius_param, double height_param)
        {
            // Override defaults if values are provided
            base_radius = radius_param;
            height = height_param;
        }

        // Functions
        double volume()
        {
            return PI * base_radius * base_radius * height;
        }
};

int main()
{
    Cylinder cylinder1;
    Cylinder cylinder2(10, 4);

    std::cout << "Volume1: " << cylinder1.volume() << std::endl;
    std::cout << "Volume2: " << cylinder2.volume() << std::endl;

    return 0;
}