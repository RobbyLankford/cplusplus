#include <iostream>
#include <string>

int main()
{
    // Recall: a std::string is just a character array

    // Various ways to initialize a std::string
    std::string str1 {"Hello World"};
    std::string str2;
    std::string str3 {};

    // Check if a string is empty  using .empty()
    std::cout << "str1 is empty: " << std::boolalpha << str1.empty() << std::endl;
    std::cout << "str2 is empty: " << std::boolalpha << str2.empty() << std::endl;
    std::cout << "str3 is empty: " << std::boolalpha << str3.empty() << std::endl;
    
    std::cout << std::endl;

    // Check the size of a string using .size()
    std::cout << "str1 characters: " << str1.size() << std::endl;
    std::cout << "str2 characters: " << str2.size() << std::endl;
    std::cout << "str3 characters: " << str3.size() << std::endl;

    std::cout << std::endl;

    // Check the size of a string using .length()
    std::cout << "str1 characters: " << str1.length() << std::endl;
    std::cout << "str2 characters: " << str2.length() << std::endl;
    std::cout << "str3 characters: " << str3.length() << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Can use the .max_size() method to determine the maximum number of characters allowed
    std::cout << "str1 has a max number of characters of: " << str1.max_size() << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Can use the .capacity() method to determine the current max number of characters allocated to the string
    std::cout << "str1 capacity: " << str1.capacity() << std::endl;
    std::cout << "str2 capacity: " << str2.capacity() << std::endl;
    std::cout << "str3 capacity: " << str3.capacity() << std::endl;

    str1 = "The sky is blue, the grass is green. Kids are running all over the place";

    std::cout << "str1 new capacity: " << str1.capacity() << std::endl;

    std::cout << std::endl;

    // Can increase the allocated number of characters using .reserve()
    str2 = "Hello World";

    std::cout << "str2 current capacity: " << str2.capacity() << std::endl;
    std::cout << "str2 current size: " << str2.size() << std::endl;

    str2.reserve(100);

    std::cout << "str1 updated capacity: " << str2.capacity() << std::endl;
    std::cout << "str1 updated size: " << str2.size() << std::endl;

    // Can shrink the number of allocated characters to what a string currently is holding using .shrink_to_fit()
    std::cout << std::endl;

    str3 = "Hello World";
    str3.reserve(100);

    std::cout << "str3 capacity: " << str3.capacity() << std::endl;
    std::cout << "str3 size: " << str3.size() << std::endl;

    str3.shrink_to_fit();

    std::cout << "str3 capacity: " << str3.capacity() << std::endl;
    std::cout << "str3 size: " << str3.size() << std::endl;

    return 0;
}