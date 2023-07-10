#include <iostream>
#include <string>

int main()
{
    // The following copies the string, but exists in two different memory locations
    std::string message {"Hello World"};
    std::string message_copy {message};

    std::cout << message << std::endl;
    std::cout << message_copy << std::endl;
    std::cout << std::endl;

    // Grab the pointer to each variable and use (void*) so that the pointer prints correctly
    char *p1 = message.data();
    char *p2 = message_copy.data();

    // Two different pointers so different memory locations
    std::cout << "&message[0]: " << (void*)p1 << std::endl;
    std::cout << "&message_copy[0]: " << (void*)p2 << std::endl;
    std::cout << std::endl;

    // One way to make them the same memory location is to use references
    std::string message2 {"Hello World"};
    std::string &message2_copy {message2};

    char *p3 = message2.data();
    char *p4 = message2_copy.data();

    std::cout << "&message2[0]: " << (void*)p3 << std::endl;
    std::cout << "&message2_copy[0]: " << (void*)p4 << std::endl;

    return 0;
}