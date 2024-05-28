#include <iostream>

#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

/*
    Order of Constructor:
        - Base Class
        - Inherited Class(es)
        - Top Class
    
    Order of Destructor:
        - Top Class
        - Inherited Class(es)
        - Base Class
*/

int main()
{
    CivilEngineer ceng1("John Doe", 41, "123 Main Street", 12, "Concrete");

    return 0;
}