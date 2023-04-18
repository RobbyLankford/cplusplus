#include <iostream>
#include <ctime>

int main()
{
    // Set random seed for different functionality
    std::srand(std::time(0));

    const unsigned int MAX_NUMBER {200};

    bool end {false};

    std::cout << "Welcome to the greatest calculator!" << std::endl;
    
    std::cout << std::endl;

    while (!end)
    {
        int num1 = static_cast<size_t>((std::rand() % MAX_NUMBER));
        int num2 = static_cast<size_t>((std::rand() % MAX_NUMBER));
        int operation = static_cast<size_t>((std::rand() % 3));
        int result;
        int submission;
        char go_on;

        std::cout << "What is the result of " << num1;
        
        switch (operation)
        {
            case 0:
                std::cout << " + ";
                break;
            case 1:
                std::cout << " - ";
                break;
            default:
                std::cout << " * ";
                break;
        }

        std::cout << num2 << ": ";
        std::cin >> submission;

        switch (operation)
        {
            case 0:
                result = num1 + num2;
                break;
            case 1:
                result = num1 - num2;
                break;
            default:
                result = num1 * num2;
                break;
        }

        if (submission == result)
        {
            std::cout << "Congratulations! You got the correct result!" << std::endl;
        }
        else
        {
            std::cout << "Nah, the correct result is " << result << std::endl;
        }

        std::cout << std::endl;

        std::cout << "Do you want to try again? (Y | N): ";
        std::cin >> go_on;
        
        std::cout << std::endl;

        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
    }

    std::cout << "See you later!" << std::endl;

    return 0;
}