#include <iostream>

int main()
{
    // Goal is to swap the elements in two arrays

    int arr0[5] {1, 2, 3, 4, 5};
    int arr1[5] {6, 7, 8, 9, 10};

    std::cout << "arr0: ";
    for (size_t i {}; i < std::size(arr0); i++)
    {
        std::cout << arr0[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "arr1: ";
    for (size_t i {}; i < std::size(arr1); i++)
    {
        std::cout << arr1[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // The hard way: creating a temporary array (requires three full loops)

    int temp[5];

    for (size_t i {}; i < std::size(arr1); i++)
    {
        temp[i] = arr1[i];
    }

    for (size_t i {}; i < std::size(arr1); i++)
    {
        arr1[i] = arr0[i];
    }

    for (size_t i {}; i < std::size(arr0); i++)
    {
        arr0[i] = temp[i];
    }

    std::cout << "arr0: ";
    for (size_t i {}; i < std::size(arr0); i++)
    {
        std::cout << arr0[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "arr1: ";
    for (size_t i {}; i < std::size(arr1); i++)
    {
        std::cout << arr1[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Better method: use pointers

    int arr00[5] {1, 2, 3, 4, 5};
    int arr11[5] {6, 7, 8, 9, 10};

    int *p_temp {nullptr};
    int *p_arr00 {arr00};
    int *p_arr11 {arr11};

    p_temp = p_arr11; // Pointer p_temp now points to arr11
    p_arr11 = p_arr00; // pointer p_arr00 now points to arr00
    p_arr00 = temp; // Pointer p_arr00 now points to arr11

    std::cout << "arr0: ";
    for (size_t i {}; i < std::size(arr0); i++)
    {
        // Print out using the pointer
        std::cout << p_arr00[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "arr1: ";
    for (size_t i {}; i < std::size(arr1); i++)
    {
        // Print out using the pointer
        std::cout << p_arr11[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}