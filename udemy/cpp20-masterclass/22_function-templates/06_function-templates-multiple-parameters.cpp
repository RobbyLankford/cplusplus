#include <iostream>

// Function templates can have multiple parameters of different types and return type

/*
    Problem: the return type depends on the order of the template arguments

    template <typename T, typename P> P maximum(T a, P b)
    {
        return ((a > b) ? a : b)
    }
*/

// Use a separate parameter for the return type
template <typename ReturnType, typename T, typename P>
ReturnType maximum(T a, P b)
{
    return (a > b) ? a : b;
}

int main()
{
    // Make explicit type arguments (must be AT LEAST the return type)
    int max1 = maximum<int, char, long>('c', 12L); // All three types are stated
    int max2 = maximum<int, char>('d', 13L); // The third argument, long, is deduced
    int max3 = maximum<int>('e', 14L); // The second and third arguments, char and long, are deduced
    // int max4 = maximum('f', 15L); // Compilter cannot deduce the return type so will cause an error

    return 0;
}

/*
    The order of arguments matters, as shown in the following:

    template <typename ReturnType, typename T, typename P>
        int max1 = maximum<int, char, long>('c', 12L); // OK
        int max2 = maximum<int, char>('d', 13L);       // OK
        int max3 = maximum<int>('e', 14L);             // OK
        int max4 = maximum('f', 15L);                  // Error: return type cannot be deduced
    
    template <typename T, typename ReturnType, typename P>
        int max1 = maximum<char, int, long>('c', 12L); // OK
        int max2 = maximum<char, int>('d', 13L);       // OK
        int max3 = maximum<char>('e', 14L);            // Error: return type cannot be deduced
        int max4 = maximum('f', 15L);                  // Error: return type cannot be deduced
    
    template <typename T, typename P, typename ReturnType>
        int max1 = maximum<char, long, int>('c', 12L); // OK
        int max2 = maximum<char, long>('d', 13L);      // Error: return type cannot be deduced
        int max3 = maximum<char>('e', 14L);            // Error: return type cannot be deduced
        int max4 = maximum('f', 15L);                  // Error: return type cannot be deduced
*/