#include <iostream>

// Can optionally return information from functions, if desired

// Can return directly from function, but will need an output type
int find_character_v0(const std::string &str, char c)
{
    // If character is found, return the index, else return -1
    int not_found {-1};

    for (size_t i {0}; i < str.size(); i++)
    {
        if (str.c_str()[i] == c)
        {
            return i;
        }
    }

    return not_found;
}

// If no output is desired, can make function return to an already existing variable
void find_character_v1(const std::string &str, char c, bool &success)
{
    // If character is found, set success to true, else set to false
    for (size_t i {0}; i < str.size(); i++)
    {
        if (str.c_str()[i] == c)
        {
            success = true;
            return;
        }
    }

    success = false;
}

int main()
{
    std::string str1 {"Hello World in C++20!"};
    char c {'r'};

    int index = find_character_v0(str1, c);

    if (index != -1)
    {
        std::cout << "Found character " << c << " at index: " << index << std::endl;
    }
    else
    {
        std::cout << "Did not find character" << std::endl;
    }

    std::cout << std::endl;

    bool success {false};

    find_character_v1(str1, c, success);

    if (success)
    {
        std::cout << "Found character " << c << " in the string" << std::endl;
    }
    else
    {
        std::cout << "Did not find character" << std::endl;
    }

    return 0;
}