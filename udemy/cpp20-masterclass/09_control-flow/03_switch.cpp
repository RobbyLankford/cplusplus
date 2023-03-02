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

    // switch statement: an alternative to if, else if, else if, ...
    switch(tool)
    {
        case Pen:
        {
            std::cout << "Active tool is Pen" << std::endl;
        }
        break;

        case Marker:
        {
            std::cout << "Active tool is Marker" << std::endl;
        }
        break;

        case Eraser:
        {
            std::cout << "Active tool is Eraser" << std::endl;
        }
        break;

        // Can group several cases into a single block if the output is the same
        case Recatangle:
        case Circle:
        case Ellipse:
        {
            std::cout << "Active tool is Ellipse" << std::endl;
        }
        break;

        default:
        {
            std::cout << "No match found" << std::endl;
        }
        break;
    }

    std::cout << "Moving on" << std::endl;

    return 0;
}