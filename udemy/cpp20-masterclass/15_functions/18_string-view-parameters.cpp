#include <iostream>
#include <string_view>

/*
    To avoid passing copies of strings, string literals, etc. to functions...
    use std::string_view as the function argument type.
*/

void say_my_name(std::string_view name);

int main()
{
    std::string name {"John"};

    // Using std::string_view can handle many cases
    say_my_name(name);
    say_my_name("Paul");
    say_my_name(std::string_view("George"));
    say_my_name(std::string("Ringo"));

    return 0;
}

void say_my_name(std::string_view name)
{
    std::cout << "Hello, your name is: " << name << std::endl;
}