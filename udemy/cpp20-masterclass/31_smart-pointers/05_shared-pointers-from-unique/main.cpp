#include <iostream>
#include <memory>

#include "dog.h"

std::unique_ptr<Dog> get_unique_ptr()
{
    std::unique_ptr<Dog> dog_ptr_internal = std::make_unique<Dog>("Phil");

    return dog_ptr_internal;
}

int main()
{
    /* Create shared pointers from unique pointers */

    // Heap objects
    std::unique_ptr<int> unique_ptr_int_1 = std::make_unique<int>(22);
    std::unique_ptr<Dog> unique_ptr_dog_1 = std::make_unique<Dog>("Halz");

    // Ownership moves from unique_ptr to shared_ptr from now on
    std::shared_ptr<int> shared_ptr_int_1 = std::move(unique_ptr_int_1);
    std::shared_ptr<Dog> shared_ptr_dog_1 = std::move(unique_ptr_dog_1);

    // Direct assignment does NOT work
    //std::shared_ptr<Dog> shared_ptr_dog_2 = unique_ptr_dog_1;

    std::cout << std::endl;

    std::cout << "shared_ptr_int_1 use count: " << shared_ptr_int_1.use_count() << std::endl;
	std::cout << "shared_ptr_dog_1 use count: " << shared_ptr_dog_1.use_count() << std::endl;
	
    std::cout << std::boolalpha;
	
    std::cout << "unique_ptr_int_1: " << static_cast<bool>(unique_ptr_int_1) << std::endl;
	std::cout << "unique_ptr_dog_1: " << static_cast<bool>(unique_ptr_dog_1) << std::endl;

    std::cout << std::endl;

    // Can create copies because it is now shared pointers
    std::shared_ptr<int> shared_ptr_int_3 {shared_ptr_int_1};
    std::shared_ptr<Dog> shared_ptr_dog_3 {shared_ptr_dog_1};

    std::cout << std::endl;

    std::cout << "shared_ptr_int_1 use count: " << shared_ptr_int_1.use_count() << std::endl;
	std::cout << "shared_ptr_dog_1 use count: " << shared_ptr_dog_1.use_count() << std::endl;
	std::cout << "shared_ptr_int_3 use count: " << shared_ptr_int_3.use_count() << std::endl;
	std::cout << "shared_ptr_dog_3 use count: " << shared_ptr_dog_3.use_count() << std::endl;

    std::cout << std::endl;

    /* 
    Cannot transform from std::shared_ptr to std::unique_ptr...
    Makes sense, what would happen to the other copies if one suddently became unique?
    */

    // Returning unique_ptr to unique_ptr
    std::unique_ptr<Dog> unique_ptr_dog_2 = get_unique_ptr();

    if (unique_ptr_dog_2)
    {
        std::cout << "unique_ptr_dog_2 dog name: " << unique_ptr_dog_2->get_name() << std::endl;
    }

    std::cout << std::endl;

    // Returning unique_ptr to shared_ptr
    std::shared_ptr<Dog> shared_ptr_dog_4 = get_unique_ptr();

    if (shared_ptr_dog_4)
    {
        std::cout << "shared_ptr_dog_4 name: " << shared_ptr_dog_4->get_name() << std::endl;
        std::cout << "shared_ptr_dog_4 use count: " << shared_ptr_dog_4.use_count() << std::endl;
    }

    std::cout << std::endl;

    return 0;
}