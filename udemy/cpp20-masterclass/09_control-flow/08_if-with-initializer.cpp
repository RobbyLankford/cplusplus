#include <iostream>

int main()
{
    // Allows variables to be defined inside the if statement
    
    bool go {false};

    // Variable speed only exists within the if block
    // Declare variable, semi-colon, then the condition for if to evaluate
    if (int speed {10}; go)
    {
        std::cout << "speed (in if statement) = " << speed << std::endl;

        if (speed > 5)
        {
            std::cout << "Slow down!" << std::endl;
        }
        else
        {
            std::cout << "All good!" << std::endl;
        }
    }
    else
    {
        std::cout << "speed (in else statement) = " << speed << std::endl;
        std::cout << "Stop!" << std::endl;
    }

    // Outside of the block, speed does not exist (will give a compile error)
    // std::cout << "Outside of the block, speed = " << speed << std::endl;
    
    return 0;
}