#include <iostream>

int main()
{
    // New line - std::endl vs '\n': both move to the next line but std::endl flushes the buffer
    std::cout << "Hello World" << std::endl;
    std::cout << "Hello World\n";

    std::cout << std::endl;

    // Use "" in strings by escaping with '\"'
    std::cout << "He said \"Get out of here immediately!\"" << std::endl;

    std::cout << std::endl;

    // Use '\t' to insert a tab
    std::string todo_list {"\tClean the house\n\tWalk the dog\n\tDo the laundry\n\tPick groceries"};
    
    std::cout << "To Do List:" << std::endl;
    std::cout << todo_list << std::endl;

    std::cout << std::endl;

    // Use '\\' to insert a back slash (note that a forward slash does not need to be escaped)
    std::string windows_path {"C:\\user\\testProject\\hello.txt"};
    std::string linux_path {"/home/username/files/hello.txt"};

    std::cout << "Windows path: " << windows_path << std::endl;
    std::cout << "Linux path: " << linux_path << std::endl;

    std::cout << std::endl;

    // Combine '\"' and '\\'
    std::cout << "hint: " << std::string {"\"\\\\\" escapes a back slash character like \\."} << std::endl;

    return 0;
}