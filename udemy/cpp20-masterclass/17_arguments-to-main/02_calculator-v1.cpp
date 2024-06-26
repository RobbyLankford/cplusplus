#include <iostream>

/*
    V1 of a basic four-function calculator NOT using arguments to main
    Since the numbers and operation have to be changed in the source code, it is basically useless
*/

int main()
{
    double first_number {5.0};
    double second_number {33.1};
    char c {'-'};

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