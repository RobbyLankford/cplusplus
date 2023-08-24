#include <iostream>
#include <cstdlib>
#include <cstring>

/*
    V2 of a basic four-function calculator using arguments to main
    See V1 for the base code off of which this is built
*/

int main(int argc, char **argv)
{
    // Check the number of parameters, it should be four
    if (argc != 4)
    {
        std::cerr << "Program can only be called with 3 arguments" << std::endl;
        std::cerr << "You called it with: " << argc - 1 << " arguments: ";

        for (int i {1}; i < argc; i++)
        {
            std::cout << " " << argv[i];
        }

        std::cout << std::endl;

        return 1;
    }

    // Grab the operands
    double first_number {atof(argv[1])};
    double second_number {atof(argv[3])};

    if (first_number == 0.0 || second_number == 0.0)
    {
        std::cerr << "Please use valid numbers (not zero) for first and second parameters" << std::endl;
        
        return 2;
    }

    // Grab the operation
    const char *operation {argv[2]};
    bool is_length_1 = std::strlen(operation) == 1;
    bool is_valid_op = (operation[0] == '+') || (operation[0] == '-') || (operation[0] == 'x') || (operation[0] == '/');
    char c;

    if (is_length_1 && is_valid_op)
    {
        c = operation[0];
    }
    else
    {
        std::cerr << "Operation " << operation << " is not valid." << std::endl;

        return 3;
    }

    // If all inputs are valid, run the calculator
    switch (c)
    {
        case '+':
            std::cout << first_number << " + " << second_number << " = " << first_number + second_number << std::endl;
            break;
        
        case '-':
            std::cout << first_number << " - " << second_number << " = " << first_number - second_number << std::endl;
            break;
        
        case 'x':
            std::cout << first_number << " x " << second_number << " = " << first_number * second_number << std::endl;
            break;
        
        case '/':
            std::cout << first_number << " / " << second_number << " = " << first_number / second_number << std::endl;
            break;
    }

    return 0;
}