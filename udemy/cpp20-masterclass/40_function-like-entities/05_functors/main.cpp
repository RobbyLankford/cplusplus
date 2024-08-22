#include <iostream>

#include "encrypt.h"
#include "decrypt.h"


// Callback functions
char encrypt(const char &param)
{
    return static_cast<char>(param + 3);
}

char decrypt(const char &param)
{
    return static_cast<char>(param - 3);
}

template <typename Modifier>
std::string &modify(std::string &str_param, Modifier modifier)
{
    for (size_t i{}; i < str_param.size(); i++)
        str_param[i] = modifier(str_param[i]);
    
    return str_param;
}


int main()
{
    std::string str {"Hello"};

    std::cout << "Modifying string through function pointers:" << std::endl;
    std::cout << "Initial: " << str << std::endl;
    std::cout << "Encrypt: " << modify(str, encrypt) << std::endl;
    std::cout << "Decrypt: " << modify(str, decrypt) << std::endl;

    std::cout << "\n-------\n" << std::endl;

    Encrypt encrypt_functor;
    Decrypt decrypt_functor;

    std::cout << "encrypt_functor('A'): " << encrypt_functor('A') << std::endl;
    std::cout << "decrypt_functor('D'): " << decrypt_functor('D') << std::endl;

    std::cout << "\n-------\n" << std::endl;

    std::cout << "Modifying string through functors:" << std::endl;
    std::cout << "Initial: " << str << std::endl;
    std::cout << "Encrypt: " << modify(str, encrypt_functor) << std::endl;
    std::cout << "Decrypt: " << modify(str, decrypt_functor) << std::endl;

    return 0;
}
