#include <iostream>

// Use std::optional to declare a variable that has a value or is empty

int main()
{
    // Declare and initialize to a value
    std::optional<int> items {3};
    std::optional<std::string> name {"William"};
    std::optional<double> weight {77.2};
    std::optional<char> character {'s'};

    // Declare and initialize to empty
    std::optional<std::string> dog_name {}; // Initializes to std::nullopt
    std::optional<int> age {std::nullopt}; // The null or zero equivalent for std::optional
    std::optional<char> letter = std::nullopt; // May trigger unused warning
    std::optional<double> height = {}; // May trigger unused warning

    // Can read values using .value() or dereference
    std::cout << "items: " << items.value() << std::endl;
    std::cout << "items: " << *items << std::endl; // Could get confused with a pointer, which this is not

    std::cout << std::endl;

    // Use .has_value() to check if an optional variable has a value
    if (letter.has_value())
    {
        std::cout << "letter contains a useful value." << std::endl;
    }
    else
    {
        std::cout << "letter contains std::nullopt." << std::endl;
    }

    std::cout << std::endl;

    // Can also check if it contains nullopt
    if (height != std::nullopt)
    {
        std::cout << "height contains a useful value." << std::endl;
    }
    else
    {
        std::cout << "height contains std::nullopt." << std::endl;
    }

    return 0;
}