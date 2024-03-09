#include <iostream>
#include <memory>

#include "dog.h"

int main()
{
    /* Array allocated on the stack */
    Dog dog_array[3] {Dog("Dog1"), Dog("Dog2"), Dog("Dog3")};

    for (size_t i {0}; i < 3; i++)
    {
        dog_array[i].print_info();
    }

    std::cout << "\n-------\n" << std::endl;

    /* Array allocated on the heap */
    Dog *p_dog_array_raw = new Dog[3] {Dog("Dog4"), Dog("Dog5"), Dog("Dog6")};

    for (size_t i {0}; i < 3; i++)
    {
        p_dog_array_raw[i].print_info();
    }

    // Remember to release the memory
    delete[] p_dog_array_raw;

    std::cout << "\n-------\n" << std::endl;

    /* Array allocated on the heap with unique_ptr */

    // Cannot initialize individual elements this way
    auto arr_ptr = std::make_unique<Dog[]>(3); 

    // CAN initialize individual elements this way
    // auto arr_ptr = std::unique_ptr<Dog[]>(new Dog[3] {Dog("Dog7"), Dog("Dog8"), Dog("Dog9")});

    for (size_t i {0}; i < 3; i++)
    {
        arr_ptr[i].print_info();
    }

    return 0;
}