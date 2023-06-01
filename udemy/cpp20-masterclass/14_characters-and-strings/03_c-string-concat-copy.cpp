#include <iostream>
#include <cstring>

int main()
{
    // cstring library in C++ was originally string.h library in C

    // 1. Concatenation of strings: std::strcat
    char dest[50] = "Hello ";
    char src[50] = "World!";

    std::cout << "dest: " << dest << std::endl;
    std::cout << "src: " << src << std::endl;

    std::strcat(dest, src); // will overwrite dest to include src appended to the end
    std::strcat(dest, " Goodbye World!"); // Will append 'Goodbye World!' to the end... this is why we made dest larger than needed

    std::cout << "dest: " << dest << std::endl;

    std::cout << std::endl;

    char *dest1 = new char[30] {'F', 'i', 'r', 'e', 'l', 'o', 'r', 'd', '\0'};
    char *src1 = new char[30] {',', 'T', 'h', 'e', ' ', 'P', 'h', 'e', 'n', 'i', 'x', ' ', 'K', 'i', 'n', 'g', '!', '\0'};

    // Need to make sure dest1 will have enough memory to hold the concatenation
    std::cout << "std::strlen(dest1): " << std::strlen(dest1) << std::endl;
    std::cout << "std::strlen(src1): " << std::strlen(src1) << std::endl; // 8 + 17 = 25 < 30, so we are good!

    std::strcat(dest1, src1); // Will add src1 to the end of dest1 overwriting the last null character

    std::cout << std::endl;

    std::cout << "std::strlen(dest1): " << std::strlen(dest1) << std::endl;
    std::cout << "dest1: " << dest1 << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // 2. Concatenate strings, but only a few of the characters ... std::strncat
    char dest2[50] {"Hello "};
    char src2[30] {"There is a bird on my window."};

    std::cout << "dest2: " << dest2 << std::endl;
    std::cout << "src2: " << src2 << std::endl;

    std::cout << std::endl;

    // Just want 'there' from src2, which is 5 characters long
    std::cout << "std::strncat(dest2, src2, 5): " << std::strncat(dest2, src2, 5) << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // 3. Copy strings ... std::strcpy
    const char *src3 = "C++ is a multipurpose programming language.";
    char *dest3 = new char[std::strlen(src3) + 1]; // +1 for the null character

    std::cout << "dest3: " << dest3 << std::endl;
    std::cout << "src3: " << src3 << std::endl;

    std::strcpy(dest3, src3);

    std::cout << std::endl;

    std::cout << "sizeof(dest3): " << sizeof(dest3) << std::endl;
    std::cout << "std::strlen(dest3): " << std::strlen(dest3) << std::endl;
    std::cout << "std::strcpy(dest3, src3): " << dest3 << std::endl; // dest3 now contains src3

    std::cout << "\n----------\n" << std::endl;

    // 4. Copy strings, but only a specific number of characters ... std::strncpy
    const char *src4 = "Hello";
    char dest4[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};

    std::cout << "dest4: " << dest4 << std::endl;
    std::cout << "src4: " << src4 << std::endl;

    std::cout << std::endl;

    // Want to copy over 'abcde' with 'Hello', which is five characters
    std::cout << "std::strncpy(dest4, src4, 5): " << std::strncpy(dest4, src4, 5) << std::endl;
    
    return 0;
}