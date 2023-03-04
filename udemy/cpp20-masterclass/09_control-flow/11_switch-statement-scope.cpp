#include <iostream>

int main()
{
    int condition {0};
    int my_var {4};

    switch (condition)
    {
        // Do not initialize variables here b/c code will never run
        // int x {9}; // Will cause a compiler error

        // However, can declare a variable here to be assigned a value later
        int x;

        // Do not need to use { } for case blocks
        // Not using { } allows for the entire switch statement to be one giant scope
        case 0:
            // Also do not initialize variables in case blocks b/c code *might* not run
            // int y {4}; // Will cause a complier error

            // However, can declare a variable here to be assigned a value later
            int y;

            // Can assign values to any variable previously declared
            x = 6;
            x++;

            // Cannot assign values to any variables that are declared *later* in switch
            // z = 6 // Will cause a compiler error

            std::cout << "x = " << x << std::endl;
            std::cout << "Statement 1" << std::endl;
            std::cout << "Statement 2" << std::endl;

            // Using break is optional, but a good practice
            break;
        
        case 1:
            int z;

            // Variables declared outside switch can also be used
            my_var++;
            y = 5;

            std::cout << "my_var = " << my_var << std::endl;
            std::cout << "y = " << y << std::endl;
            std::cout << "Statement 3" << std::endl;
            std::cout << "Statement 4" << std::endl;

            break;
        
        default:
            // Initializing a variable in default is ok
            // This code will always run last, if it runs
            // A variable initialized in the default block cannot be used before the default block
            // There are not more blocks to use it after, so it can *only* be used in the default block
            int u {8};
            z = 10;

            std::cout << "z = " << z << std::endl;
            std::cout << "Statement 5" << std::endl;
            std::cout << "Statement 6" << std::endl;

            break;
    }

    // Recommendation: do NOT initialize variables inside the switch block

    std::cout << "Moving on..." << std::endl;
    
    return 0;
}