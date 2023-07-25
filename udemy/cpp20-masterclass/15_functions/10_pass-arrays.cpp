#include <iostream>
#include <array>

/*
    When passing an array, it will decay into a pointer.
    Also can be a good idea to pass the size of the array as a separate parameter.
*/

double sum(double array[], size_t count)
{
    double sum {0};

    // Can affect the real argument array, if we wanted to
    // array[0] = 70.0;

    // The array will decay into a pointer
    std::cout << "size of array: " << sizeof(array) << std::endl; // causes a warning, but on purpose... want to show that array is a pointer
    std::cout << "size of int*: " << sizeof(int *) << std::endl;
    std::cout << "size of long int*: " << sizeof(long int*) << std::endl;

    std::cout << std::endl;

    // size_t {std::size(array)}; // No longer an array, so will cause a compiler error

    for (size_t i {0}; i < count; i++)
    {
        // Three ways to calculate sum using arrays (since it is a pointer)
        //sum += *(array + i);
        //sum += array[i];
        sum += *(array++);
    }

    return sum;
}


int main()
{
    double my_scores[] {10.5, 34.3, 4.8, 6.5};

    std::cout << "sizeof(myscores): " << sizeof(my_scores) << std::endl;
    std::cout << std::endl;

    double result = sum(my_scores, std::size(my_scores));

    std::cout << "result: " << result << std::endl;

    return 0;
}