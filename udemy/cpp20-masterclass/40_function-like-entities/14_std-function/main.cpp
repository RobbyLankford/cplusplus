#include <iostream>
#include <functional>

#include "boxcontainer.h"

// Function pointer
char encrypt(const char &param)
{
    return static_cast<char>(param + 3);
}

// Functor
class Decrypt
{
    public:
        char operator() (const char &param)
        {
            return static_cast<char>(param - 3);
        }
};

// Modifying a BoxContainer of strings
BoxContainer<std::string> &modify(BoxContainer<std::string> &sentence, std::function<char(const char &)> modifier)
{
    for (size_t i {}; i < sentence.size(); i++)
    {
        for (size_t j {}; j < sentence.get_item(i).size(); j++)
            sentence.get_item(i)[j] = modifier(sentence.get_item(i)[j]);
    }

    return sentence;
}

std::string get_best(const BoxContainer<std::string> &sentence, std::function<bool(const std::string &str1, const std::string &str2)> comparator)
{
    std::string best = sentence.get_item(0);
    for (size_t i {}; i < sentence.size(); i++)
    {
        if (comparator(sentence.get_item(i), best))
            best = sentence.get_item(i);
    }

    return best;
}

// Function pointer
bool larger_in_size(const std::string &str1, const std::string &str2)
{
    if (str1.size() > str2.size())
        return true;
    else
        return false;
}


int main()
{
    // Basic usage of std::function - storing function-like entities in a unified way
    std::function<char(const char &)> my_modifier;

    // Function pointer
    my_modifier = encrypt;
    
    std::cout << "'A' encrypted becomes: " << my_modifier('A') << std::endl;

    // Functor
    Decrypt decrypt;
    my_modifier = decrypt;

    std::cout << "'D' decrypted becomes: " << my_modifier('D') << std::endl;

    // Lambda function
    my_modifier = [](const char &param)
    {
        return static_cast<char>(param + 3);
    };

    std::cout << "'A' encrypted becomes: " << my_modifier('A') << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Storing function-like entities in a collection
    BoxContainer<std::function<char(const char &)>> func_entities;

    func_entities.add(encrypt);
    func_entities.add(decrypt);
    func_entities.add([](const char &param) {
        return static_cast<char>(param + 3);
    });

    for (size_t i {}; i < func_entities.size(); i++)
    {
        std::cout << "Result " << i << ": D transformed becomes: " << func_entities.get_item(i)('D') << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;

    // std::function as callback
    BoxContainer<std::string> quote;

    quote.add("The");
    quote.add("sky");
    quote.add("is");
    quote.add("blue");

    std::cout << "Initial: " << quote << std::endl;
    std::cout << "Encrypt: " << modify(quote, encrypt) << std::endl;
    std::cout << "Decrypt: " << modify(quote, decrypt) << std::endl;

    std::cout << "\n-------\n" << std::endl;

    auto greater_lexicographically = [](const std::string &str1, const std::string &str2)
    {
        return (str1 > str2);
    };

    std::cout << "Larger in size: " << get_best(quote, larger_in_size) << std::endl;
    std::cout << "Greater lexicographically: " << get_best(quote, greater_lexicographically) << std::endl;

    return 0;
}
