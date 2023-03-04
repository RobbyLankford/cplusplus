#include <iostream>

// Constants
const int Pen {10};
const int Marker {20};
const int Eraser {30};
const int Recatangle {40};
const int Circle {50};
const int Ellipse {60};

int main()
{
    int tool {Eraser};

    // Can initialize a variable in the switch statement
    // This variable will only be available in the switch statement
    switch(double strength {3}; tool)
    {
        case Pen:
        {
            std::cout << "Active tool is Pen. Strength = " << strength << std::endl;
        }
        break;

        case Marker:
        {
            std::cout << "Active tool is Marker. Strength = " << strength << std::endl;
        }
        break;

        case Eraser:
        {
            std::cout << "Active tool is Eraser. Strength = " << strength << std::endl;
        }
        break;

        // Can group several cases into a single block if the output is the same
        case Recatangle:
        case Circle:
        case Ellipse:
        {
            std::cout << "Active tool is Ellipse. Strength = " << strength << std::endl;
        }
        break;

        default:
        {
            std::cout << "No match found. Strength = " << strength << std::endl;
        }
        break;
    }

    std::cout << "Moving on" << std::endl;

    // Cannot use the variable outside of the switch statement
    // Will cause a compiler error
    //strength++;

    return 0;
}