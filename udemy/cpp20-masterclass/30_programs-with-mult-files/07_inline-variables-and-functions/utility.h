#include <iostream>

// Definition
inline double threshold {11.1};

// Definition
inline double add(double a, double b)
{
    if ( (a > 11.1) && (b > 11.1) )
    {
        return a + b;
    }
    else
    {
        return threshold;
    }
}