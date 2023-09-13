#include <iostream>
#include <optional>

// Can make the output of a function optional

// If nothing is found, just return nullopt
std::optional<int> find_character_v2(const std::string &str, char c)
{
    for (size_t i {0}; i < str.size(); i++)
    {
        if (str.c_str()[i] == c)
        {
            return i;
        }
    }

    return std::nullopt;
}

// Can specify an optional default parameter
std::optional<int> find_character_v3(const std::string &str,
                                     std::optional<char> c = std::nullopt)
{
   // Ugly method (not recommended)
   
   /*
   char char_to_find;

   
   if (c.has_value())
   {
        char_to_find = c.value();
   }
   else
   {
        char_to_find = 'z'; // will find z by default
   }
   */

   // Better method (recommended)
   char char_to_find = c.value_or('z');

   for (size_t i {0}; i < str.size(); i++)
   {
        if (str.c_str()[i] == char_to_find)
        {
            return i;
        }
   }

   return std::nullopt;
}

int main()
{
    std::string str1 {"Hello World in C++20!"};
    char c {'C'};

    std::optional<size_t> result1 = find_character_v2(str1, c);

    if (result1.has_value())
    {
        std::cout << "Found character at index " <<  result1.value() << std::endl;
    }
    else
    {
        std::cout << "Did not find character" << std::endl;
    }

    std::cout << std::endl;

    auto result2 = find_character_v3(str1, 'o'); // Search for z if not specified

    if (result2.has_value())
    {
        std::cout << "Found character at index " <<  result2.value() << std::endl;
    }
    else
    {
        std::cout << "Did not find character" << std::endl;
    }
    
    return 0;
}