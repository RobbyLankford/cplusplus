#include <iostream>

// Patient must be at least 21 years old to receive treatment
const int age_lower {21};

// Patient can only be at most 39 years old to receive treatment
const int age_upper {39};

int main()
{
    int age;

    std::cout << "Please type in your age: " << std::endl;
    std::cin >> age;

    if (age >= age_lower && age <= age_upper)
    {
        std::cout << "You are eligible for the treatment" << std::endl;
    }
    else if (age < 21)
    {
        std::cout << "Sorry, you are too young for the treatment" << std::endl;
    }
    else
    {
        std::cout << "Sorry, you are too old for the treatment" << std::endl;
    }
    
    return 0;
}