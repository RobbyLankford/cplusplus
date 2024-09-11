#include <iostream>
#include <array>


template <typename T, size_t Size>
void print_array(const std::array<T, Size> &arr)
{
    for (size_t i {}; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

template <typename T>
void print_raw_array(const T *p, std::size_t size)
{
    std::cout << "data = ";
    for (std::size_t i = 0; i < size; i++)
        std::cout << p[i] << ' ';
    std::cout << std::endl;
}


int main()
{
    std::array<int, 3> int_array1; // Contains junk by default
    std::array<int, 3> int_array2 {1, 2}; // Will contain 1, 2, 0
    std::array<int, 3> int_array3 {}; // Will contain 0, 0, 0
    std::array int_array4 {1, 2}; // Compiler will deduce std::array<int, 2>
    // std::array<int, 3> int_array5 {1, 2, 3, 4, 5}; // Compiler error: too many elements

    std::cout << "int_array1: ";
    print_array(int_array1);

    std::cout << "int_array2: ";
    print_array(int_array2);

    std::cout << "int_array3: ";
    print_array(int_array3);

    std::cout << "int_array4: ";
    print_array(int_array4);

    std::cout << std::endl;

    /* Adding and removing elements */

    // Cannot really add elements after initialization, but can overwrite
    int_array1.fill(321);
    int_array4.fill(500);

    std::cout << "int_array1: ";
    print_array(int_array1);

    std::cout << "int_array4: ";
    print_array(int_array4);

    std::cout << std::endl;

    /* Accessing elements */
    std::cout << "int_array2[0]: " << int_array2[0] << std::endl;
    std::cout << "int_array2.at(1): " << int_array2.at(1) << std::endl;
    std::cout << "int_array2.front(): " << int_array2.front() << std::endl;
    std::cout << "int_array2.back(): " << int_array2.back() << std::endl;

    return 0;
}
