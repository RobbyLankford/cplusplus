#include <iostream>

int main()
{
    // Integral Logic Conditions
    // Use integers in place of booleans
    // Any number different than 0 is `true`

    int item_count {-3};

    if (item_count)
    {
        std::cout << "We have items in the bag. " << item_count << " items to be exact." << std::endl;
    }
    else
    {
        std::cout << "Sorry! You have no item in the bag." << std::endl;
    }


    int condition {0};
    
    std::cout << std::boolalpha << std::endl;

    if (condition)
    {
        // Different from zero
        std::cout << "True! We have a " << condition << " in our variable." << std::endl;
    }
    else
    {
        // Zero
        std::cout << "False! We have " << condition << " in our variable." << std::endl;
    }

    return 0;
}