#include <iostream>

/*
    Implicit conversion from std::string_view to std::string is now allowed.
    Therefore, be explicit in your conversion as shown below.
*/

void say_my_name(const std::string &name);
void process_name(std::string_view name_sv);

int main()
{
    process_name("Robert");

    return 0;
}

void say_my_name(const std::string &name)
{
    std::cout << "Your name is: " << name << std::endl;
}

void process_name(std::string_view name_sv)
{
    // Compiler error, implicit conversion is not allowed
    // say_my_name(name_sv);
    
    // Explicitly convert std::string_view to std::string
    say_my_name(std::string(name_sv));
}