#include <iostream>

int main()
{
    // Starting with an array of pointer to const char
    const char * names [] {
        "Jerry Seinfeld",
        "George Costanza",
        "Elaine Benes",
        "Cosmo Kramer"
    };

    for (const char * name : names)
    {
        std::cout << name << std::endl;
    }

    std::cout << std::endl;

    // Cannot change data through the pointer, such as changing the first letter
    // *names[0] = 'K'; // compiler error

    // However, you CAN create a new pointer to const char and swap it
    const char * new_name {"Newman"};

    names[0] = new_name;

    for (const char * name : names)
    {
        std::cout << name << std::endl;
    }

    std::cout << "\n----------\n" << std::endl;

    // This may be undesirable behavior, so use a const pointer to const char
    const char * const names2 [] {
        "Jess Day",
        "Nick Miller",
        "Schmidt",
        "Winston Bishop",
        "Cece",
        "Coach"
    };

    for (const char * name : names2)
    {
        std::cout << name << std::endl;
    }

    // Can no longer swap in a new pointer to const char
    const char * new_name2 {"Reagan Lucas"};

    // names2[0] = new_name2; // compiler error

    return 0;
}