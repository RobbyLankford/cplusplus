module;

// Global Module Fragment
#include <cstring>
#include <string>

// Module Declaration
export module math_stuff;

// Module Preamble
import <iostream>;

// Module Purview
export
{
    double add(double a, double b)
    {
        return a + b;
    }

    void greet(const std::string &name)
    {
        std::string dest;

        dest = "Hello ";
        dest.append(name);

        std::cout << dest << std::endl;
    }
}

export void print_name_length(const char *c_str_name)
{
    std::cout << "Length: " << std::strlen(c_str_name) << std::endl;
}