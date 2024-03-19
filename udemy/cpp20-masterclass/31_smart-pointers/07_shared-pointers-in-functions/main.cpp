#include <iostream>
#include <memory>

#include "dog.h"

/* Passing By Value */
void use_dog_v1(std::shared_ptr<Dog> dog)
{
    std::cout << "shared_ptr passed by value, dog_name: " << dog->get_name() << std::endl;
    std::cout << "use count in use_dog_v1: " << dog.use_count() << std::endl;
}

/* Passing By Non-Const Reference */
void use_dog_v2(std::shared_ptr<Dog> &dog)
{
    // Since no copy is made, we will not see the reference count increment
    dog->set_dog_name("Riol");

    std::cout << "shared_ptr passed by non const reference, dog_name: " << dog->get_name() << std::endl;
    std::cout << "use count in use_dog_v2: " << dog.use_count() << std::endl;
}

/* Passing By Const Reference */
void use_dog_v3(const std::shared_ptr<Dog> &dog)
{
    // Since no copy is made, we will not see the reference count increment

    // We can change the dog object even though passed by reference, the const protects
    // The object itself, not the pointed to object
    dog->set_dog_name("Simy");

    std::cout << "shared_ptr passed by const reference (dog name changed in function), dog name: " << dog->get_name() << std::endl;
    std::cout << "use count in use_dog_v3: " << dog.use_count() << std::endl;
}

/* Returning By Value */
std::shared_ptr<Dog> get_shared_ptr_v1()
{
    // Returning a shared_ptr by value goes through return value optimization and at the end no copy is made
    // Have a single shared_ptr with a reference count of 1
    std::shared_ptr<Dog> dog_ptr = std::make_shared<Dog>("internal Dog_v1");
    std::cout << "Managed dog address(in): " << dog_ptr.get() << std::endl;

    return dog_ptr;
}

/* Returning By Reference (Const or Non Const) Is A Recipe For Disaster... DO NOT DO IT */
std::shared_ptr<Dog> &get_shared_ptr_v2()
{
    std::shared_ptr<Dog> dog_ptr = std::make_shared<Dog>("Internal Dog_v2");

    return dog_ptr;
}


int main()
{
    /* Passing By Value */
    // A copy will be made, increment the reference count in function body
    // After the function is finished, reference count is decremented back down
    std::cout << std::endl;

    std::shared_ptr<Dog> shared_ptr_dog_1 = std::make_shared<Dog>("Fille");
    
    std::cout << "shared_ptr_dog_1 use count (before): " << shared_ptr_dog_1.use_count() << std::endl;

    use_dog_v1(shared_ptr_dog_1);

    std::cout << "shared_ptr_dog_1 use count (after): " << shared_ptr_dog_1.use_count() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    /* Passing By Non Const Reference */
    // No copy is made, reference count does not increment

    std::shared_ptr<Dog> shared_ptr_dog_2 = std::make_shared<Dog>("Flizy");

    std::cout << "shared_ptr_dog_2 use count (before): " << shared_ptr_dog_2.use_count() << std::endl;

    use_dog_v2(shared_ptr_dog_2);

    std::cout << "shared_ptr_dog_2 use count (after): " << shared_ptr_dog_2.use_count() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    /* Passing By Const Reference */
    // The const just protects the shared pointer object itself, it does not protect the pointed to value
    std::shared_ptr<Dog> shared_ptr_dog_3 = std::make_shared<Dog>("Kitzo");

    std::cout << "shared_ptr_dog_3 use count (before): " << shared_ptr_dog_3.use_count() << std::endl;

    use_dog_v3(shared_ptr_dog_3);

    std::cout << "shared_ptr_dog_3 use count (after): " << shared_ptr_dog_3.use_count() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    /* Returning By Value */
    // Returning a shared pointer by value goes through return value optimization and no copy is made
    std::shared_ptr<Dog> shared_ptr_dog_4 = get_shared_ptr_v1();

    std::cout << "Managed dog address (out): " << shared_ptr_dog_4.get() << std::endl;
    std::cout << "shared_ptr_dog_4 use count: " << shared_ptr_dog_4.use_count() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    /* Returning By Reference */
    // NOt recommended... do not do this
    std::shared_ptr<Dog> &shared_ptr_dog_5 = get_shared_ptr_v2();

    std::cout << "shared_pointer_dog_5 use count: " << shared_ptr_dog_5.use_count() << std::endl;

    std::cout << std::endl;

    return 0;
}