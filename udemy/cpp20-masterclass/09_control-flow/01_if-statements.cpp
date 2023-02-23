#include <iostream>

int main()
{
    int number1 {55};
    int number2 {60};
    bool result = (number1 < number2);
    
    std::cout << std::endl;
    std::cout << std::boolalpha << "result: " << result << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Free-Standing if Statement
    std::cout << "Free-Standing if Statement" << std::endl;

    if (result)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }

    if (!result)
    {
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;

    // Using Else
    std::cout << "Using The else Clause" << std::endl;

    if (result)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    else
    {
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;

    // Use Expression as Condition
    std::cout << "Using Expression as Condition" << std::endl;

    if (number1 < number2)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    else
    {
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;

    // Nesting if Statements
    std::cout << "Nesting if Statements" << std::endl;

    bool red {false};
    bool green {true};
    bool yellow {false};
    bool police_stop {true};

    if (red)
    {
        std::cout << "Stop" << std::endl;
    }
    if (yellow)
    {
        std::cout << "Slow Down" << std::endl;
    }
    if (green)
    {
        std::cout << "Go" << std::endl;
    }

    if (green)
    {
        if (police_stop)
        {
            std::cout << "Stop" << std::endl;
        }
        else 
        {
            std::cout << "Go" << std::endl;
        }
    }

    std::cout << std::endl;
    std::cout << "Less Verbose Way" << std::endl;

    if (green && !police_stop)
    {
        std::cout << "Go" << std::endl;
    }
    else
    {
        std::cout << "Stop" << std::endl;
    }

    return 0;
}