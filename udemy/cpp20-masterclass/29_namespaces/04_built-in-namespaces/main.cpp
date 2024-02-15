// Built-in namespaces can be accessed with #include <namespace>

#include <iostream>     // Functions for dealing with inputs and outputs
#include <string>       // Functions for dealing with strings

int main()
{
    // Can access functions from build-in namespaces using std:: prefix
    std::cout << "Hello World" << std::endl;

    std::string message {"Hello World"};
    std::cout << message << std::endl;

    return 0;
}