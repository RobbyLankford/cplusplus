#include <iostream>

// Global variables are available in all scopes
int global_var {44};

int main()
{
    bool green {true};

    global_var++; // Increment to 45

    // If statements are their own scope
    // Variables defined in if statements are only available there
    if (green)
    {
        global_var++; // Increment to 46

        // Variable car_count only available in this block
        int car_count {23};

        std::cout << "Light is green. There are " << car_count << " cars on the move." << std::endl;
    }
    else
    {
        // Variable car_count not in this scope, so will cause a compiler error
        // car_count++;

        global_var++; // Increment to 47

        std::cout << "Light is not green. Stop!" << std::endl;
    }

    // Variable car_count also not in this scope, will cause a compiler error
    //car_count++;

    return 0;
}