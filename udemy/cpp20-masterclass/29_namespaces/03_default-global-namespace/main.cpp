#include <iostream>

/* Global Namespace: any function defined outside of a custom namespace */

// Global Namespace
double add(double a, double b)
{
    return a + b;
}

// Custom Namespace
namespace My_Thing
{
    double add(double a, double b)
    {
        return a + b - 1;
    }

    void do_something()
    {
        // Can call a function from the global namespace using `::`
        double result = ::add(5, 6);

        std::cout << "result: " << result << std::endl;
    }
}


int main()
{
    My_Thing::do_something();

    return 0;
}