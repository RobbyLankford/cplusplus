#include <iostream>

int main()
{
    // A better version of the terminal calclator defined in 07_infinite-loops.cpp

    char operation;
    double operand1;
    double operand2;
    bool end {false};
    char go_on;

    std::cout << "Welcome to the Terminal Calculator" << std::endl;

    while (!end)
    {
        std::cout << "----------" << std::endl;
        std::cout << "What operation do you want to use?" << std::endl;
        std::cout << "Operations '+', '-', '*', and '/' are supported. Please choose one:" << std::endl;
        std::cin >> operation;

        if ( (operation != '+') && (operation != '-') && (operation != '*') && (operation != '/'))
        {
            std::cout << "Operation " << operation << " NOT SUPPORTED!" << std::endl;
            continue;
        }

        std::cout << std::endl;
        std::cout << "Please type in your two operands separated by a space and hit enter: ";
        std::cin >> operand1 >> operand2;
        std::cout << std::endl;

        switch (operation)
        {
            case '+':
                std::cout << operand1 << " + " << operand2 << " = " << (operand1 + operand2) << std::endl;
                break;
            
            case '-':
                std::cout << operand1 << " - " << operand2 << " = " << (operand1 - operand2) << std::endl;
                break;
            
            case '*':
                std::cout << operand1 << " * " << operand2 << " = " << (operand1 * operand2) << std::endl;
                break;
            
            case '/':
                std::cout << operand1 << " / " << operand2 << " = " << (operand1 / operand2) << std::endl;
                break;
            
            default:
                std::cout << operation << " operation not supported." << std::endl;
                break;
        }

        std::cout << "Continue? (Y | N): ";
        std::cin >> go_on;

        end = ((go_on == 'Y') || (go_on == 'y') ? false : true);
    }
    
    return 0;
}