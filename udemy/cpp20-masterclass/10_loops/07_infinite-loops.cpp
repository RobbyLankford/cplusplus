#include <iostream>

int main()
{
    // A loop that never ends (the stopping condition is not met)
    // Sometimes you might want to do this on purpose

    // Terminal-Based Simple Calculator

    char operation;
    double operand1;
    double operand2;
    bool end {false};
    char go_on;

    while (end == false)
    {
        std::cout << "----------" << std::endl;
        std::cout << "What operation do you want help with?" << std::endl;
        std::cout << "'+', '-', '*', and '/' are supported. Please choose one." << std::endl;
        std::cout << "Operation: ";
        std::cin >> operation;

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