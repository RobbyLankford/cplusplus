#include <iostream>
#include <string>

/*
    Functors:
        Objects of a class that overloads the () operator
*/

class Print
{
    public:
        void operator()(const std::string &name) const
        {
            std::cout << "The name is: " << name << std::endl;
        }

        std::string operator()(const std::string &last, const std::string &first) const
        {
            return (last + " " + first);
        }
};

void do_something(const Print &printer)
{
    printer("Johnson");
}

int main(int argc, char **argv)
{
    Print print;
    print("John");

    do_something(print);

    std::cout << print("Daniel", "Gray") << std::endl;

    return 0;
}