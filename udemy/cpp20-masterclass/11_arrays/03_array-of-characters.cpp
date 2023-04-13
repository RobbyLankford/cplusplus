#include <iostream>

int main()
{
    // An array of characters will print out as a string
    char message1[5] {'H', 'e', 'l', 'l', 'o'};

    std::cout << "message1: ";
    for (auto c : message1)
    {
        std::cout << c;
    }
    std::cout << std::endl;

    std::cout << "Size: " << std::size(message1) << std::endl;

    // Can edit the elements of the char array
    message1[1] = 'a';

    std::cout << "message1: ";
    for (auto c : message1)
    {
        std::cout << c;
    }
    std::cout << std::endl;

    std::cout << "Size: " << std::size(message1) << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Can print them directly to the console without looping, but need a null terminator
    char message2[] {'H', 'e', 'l', 'l', 'o', '\0'};

    std::cout << "message2: " << message2 << std::endl;
    std::cout << "Size: " << std::size(message2) << std::endl;

    // The complier will auto-fill the null terminator if we leave a space for it
    char message3[6] {'H', 'e', 'l', 'l', 'o'};
    std::cout << "message3: " << message3 << std::endl;
    std::cout << "Size: " << std::size(message3) << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Can also just initialize the character array to a valid C string
    char message4[] {"Hello"};
    std::cout << "message4: " << message4 << std::endl;
    std::cout << "Size: " << std::size(message4) << std::endl;

    // Can even put spaces between characters
    char message5[] {"Hello World!"};
    std::cout << "message5: " << message5 << std::endl;
    std::cout << "Size: " << std::size(message5) << std::endl;

    return 0;
}