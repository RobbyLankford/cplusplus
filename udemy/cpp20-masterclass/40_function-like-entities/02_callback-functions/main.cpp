#include <iostream>

#include "boxcontainer.h"

/*
    Callback Functions: a function passed to another function (by function pointer)
*/

char encrpyt(const char &param)
{
    return static_cast<char> (param + 3);
}

char decrypt(const char &param)
{
    return static_cast<char> (param - 3);
}

std::string &modify(std::string &str_param, char(*modifier)(const char &))
{
    for (size_t i{}; i < str_param.size(); i++)
        str_param[i] = modifier(str_param[i]);
    
    return str_param;
}

BoxContainer<std::string> &modify(BoxContainer<std::string> &sentence, char(*modifier)(const char &))
{
    for (size_t i{}; i < sentence.size(); i++)
    {
        // Code below relies on get_item() to return a reference
        for (size_t j{}; j < sentence.get_item(i).size(); j++)
            sentence.get_item(i)[j] = modifier(sentence.get_item(i)[j]);
    }

    return sentence;
}

std::string get_best(const BoxContainer<std::string> &sentence, bool(*comparator)(const std::string &str1, const std::string &str2))
{
    std::string best = sentence.get_item(0);
    for (size_t i{}; i < sentence.size(); i++)
    {
        if (comparator(sentence.get_item(i), best))
            best = sentence.get_item(i);
    }

    return best;
}

bool larger_in_size(const std::string &str1, const std::string &str2)
{
    if (str1.size() > str2.size())
        return true;
    else
        return false;
}

bool greater_lexicographically(const std::string &str1, const std::string &str2)
{
    return (str1 > str2);
}


int main()
{
    std::string msg{"Hello"};

    modify(msg, encrpyt);

    std::cout << "Outcome: " << msg << std::endl;

    std::cout << "\n-------\n" << std::endl;

    BoxContainer<std::string> quote;

    quote.add("The");
    quote.add("sky");
    quote.add("is");
    quote.add("blue");

    std::cout << std::endl;

    std::cout << "Initial: " << quote << std::endl;
    std::cout << "Encrypted: " << modify(quote, encrpyt) << std::endl;
    std::cout << "Decrypted: " << modify(quote, decrypt) << std::endl;

    std::cout << "\n-------\n" << std::endl;

    std::cout << "Larger in size: " << get_best(quote, larger_in_size) << std::endl;
    std::cout << "Greater lexicographically: " << get_best(quote, greater_lexicographically) << std::endl;

    std::cout << std::endl;

    return 0;
}
