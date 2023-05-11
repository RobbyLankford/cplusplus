#include <iostream>

int main()
{
    // Arrays that can be allocated dynamically on the heap
    const size_t size {10};

    double *p_salaries { new double[size] }; // will contain garbage values
    int *p_students {new(std::nothrow) int[size] {}}; // will contain all zeros
    double *p_scores {new(std::nothrow) double[size] {1, 2, 3, 4, 5}}; // First five will be 1-5, then zeros

    // nullptr check and use the allocated array
    if (p_scores)
    {
        for (size_t i {0}; i < size; i++)
        {
            std::cout << "value: " << p_scores[i] << ": " << *(p_scores + i) << std::endl;
        }
    }

    // Release memory back the system
    delete[] p_salaries;
    p_salaries = nullptr;

    delete[] p_students;
    p_students = nullptr;

    delete[] p_scores;
    p_scores = nullptr;

    std::cout << "\n----------\n" << std::endl;

    // Static array and dynamic arrays are different
    double temps[size] {10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0};
    double *temperatures = new double[size] {10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0};
    
    // std::size does not work on dynamic arrays and they do not support range-based for loops
    std::cout << "std::size(temps): " << std::size(temps) << std::endl;
    //std::cout << "std::size(temperatures): " << std::size(temperatures) << std::endl; // throws an error

    std::cout << std::endl;

    for (double temp: temps)
    {
        std::cout << "temperature: " << temp << std::endl;
    }

    /*
    for (double temp: temperatures) // throws an error
    {
        std::cout << "temperatures: " << temp << std::endl;
    }
    */

    // We say that the dynamically allocated array has decayed into a pointer

    return 0;
}