module;

#include <cstring>
#include <string>

module math_stuff;

import <iostream>;

void greet(const std::string &name)
{
    std::string dest;

    dest = "Hello ";
    dest.append(name);

    std::cout << dest << std::endl;
}

void print_name_length(const char *c_str_name)
{
    std::cout << "Length: " << std::strlen(c_str_name) << std::endl;
}