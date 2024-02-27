#include <iostream>
#include "person.h"

/*
    Definitions cannot show up more than once in an entire program (or translation unit)
    - Free standing variables
    - Functions
    - Classes
    - Class member functions
    - Class static member variables
*/

// Declaration here, but defined in a different file
double add(double a, double b);

struct Point
{
    double m_x {};
    double m_y {};
};

int main()
{
    Person p1 {"John Snow", 35};
    
    p1.print_info();

    return 0;
}

// Since defined in another file, defining here again will violate One Definition Rule
/*
double add(double a, double b)
{
    return a + b;
}
*/