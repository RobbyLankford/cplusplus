#include <iostream>
#include <string>

int main()
{
    // Avoid ugly escaped characters and let the compiler handle it

    // Using escaped characters
    std::string todo_list {"\tClean the house\n\tWalk the dog\n\tDo the laundry\n\tGet groceries"};
    std::string windows_path {"C:\\documents\\files\\hello.txt"};
    std::string linux_path {"/home/username/files/hello.txt"};
    std::string hint {"\"\\\\\" escapes a backslash character."};

    std::cout << "To Do List:" << std::endl;
    std::cout << todo_list << std::endl;
    std::cout << std::endl;

    std::cout << "Windows Path: " << windows_path << std::endl;
    std::cout << std::endl;

    std::cout << "Linux Path: " << linux_path << std::endl;
    std::cout << std::endl;

    std::cout << "Hint: " << hint << std::endl;
    std::cout << "\n----------\n" << std::endl;

    // Use string literals
    std::string todo_list2 {R"(
    Clean the house
    Walk the dog
    Do the laundry
    Get groceries)"};

    std::cout << "To Do List: " << todo_list2 << std::endl;
    std::cout << std::endl;

    std::string windows_path2 = R"(C:\documents\files\hello.txt)";

    std::cout << "Windows Path: " << windows_path2 << std::endl;
    std::cout << std::endl;

    std::string linux_path2 = R"(/home/username/files/hello.txt)";

    std::cout << "Linux Path: " << linux_path2 << std::endl;
    std::cout << std::endl;

    const char* hint2 {R"("\\" escapes a backslash character.)"};

    std::cout << "Hint: " << hint2 << std::endl;

    return 0;
}