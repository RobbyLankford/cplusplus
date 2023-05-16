#include <iostream>

int main()
{
    // Non const reference
    int age {27};
    int& ref_age {age};

    std::cout << "age:" << age << std::endl;
    std::cout << "ref_age: " << ref_age << std::endl;

    std::cout << std::endl;

    // Can modify the original variable through the reference
    ref_age++;

    std::cout << "age:" << age << std::endl;
    std::cout << "ref_age: " << ref_age << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // const reference
    int age2 {30};
    const int& const_ref_age2 {age2};

    std::cout << "age: " << age2 << std::endl;
    std::cout << "const_ref_age2: " << const_ref_age2 << std::endl;

    // const_ref_age2 = 31; // error, cannot update a variable through a constant reference

    // Can achieve the same thing with const pointer to const data
    const int* const const_ptr_to_const_age2 {&age2};

    // *const_ptr_to_const_age2 = 32; // error

    return 0;
}