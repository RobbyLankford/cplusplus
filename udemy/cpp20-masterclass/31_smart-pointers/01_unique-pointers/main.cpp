#include <iostream>
#include <memory>

#include "dog.h"

int main()
{
    /* Using stack variables */
    Dog dog1("Dog1");
    dog1.print_dog();

    std::cout << std::endl;

    /* Using raw pointers: have to manually release memory */
    Dog *p_dog2 = new Dog("dog2");
    int *p_int1 = new int(100);

    p_dog2->print_dog();

    std::cout << "Integer is: " << *p_int1 << std::endl;
    std::cout << "Integer lives at address: " << p_int1 << std::endl;

    // Have to release memory
    delete p_dog2;
    delete p_int1;

    std::cout << std::endl;

    /* Using unique_ptr: managed memory is owned by a single pointer at any moment */

    // Manage a previously allocated space managed by a raw pointer (do not use the raw pointer)
    Dog *p_dog3 = new Dog("Dog3");
    std::unique_ptr<Dog> up_dog_4 {p_dog3};

    // Manage a pointer created at the same time as the unique_ptr
    std::unique_ptr<Dog> up_dog_5 {new Dog("Dog5")};
    std::unique_ptr<int> up_int2 {new int(200)};

    // Can also initialize with nullptr and give it memory to manage later (shown later)
    std::unique_ptr<Dog> up_dog_6 {nullptr};

    // Can use a unique_ptr just like a raw pointer
    up_dog_5->print_dog();

    // Can assign
    *up_int2 = 500;

    // Use `.get()` method to get memory address
    std::cout << "Integer is: " << *up_int2 << std::endl;
    std::cout << "Integer lives at address: " << up_int2.get() << std::endl;

    std::cout << std::endl;

    /* Can use std::make_unique for cleaner syntax */

    std::unique_ptr<Dog> up_dog_7 = std::make_unique<Dog>("Dog7");
    up_dog_7->print_dog();

    std::unique_ptr<int> p_int3 = std::make_unique<int>(30);
    *p_int3 = 67;

    std::cout << "Value pointed to by p_int3 is: " << *p_int3 << std::endl;
    std::cout << "p_int3 pointing at address: " << p_int3.get() << std::endl;

    std::cout << std::endl;

    /* Copies are not allowed... only one unique_ptr can point at an object */
    std::unique_ptr<Dog> up_dog_8 = std::make_unique<Dog>("Dog8");
    up_dog_8->print_dog();

    std::cout << "Dog8 memory address: " << up_dog_8.get() << std::endl;

    // std::unique_ptr<Dog> up_dog_9 = up_dog_8; // Error
    // std::unique_ptr<Dog> up_dog_10 {up_dog_8}; // Error

    std::cout << std::endl;

    /* CAN move the unique_ptr to point at something else */
    std::unique_ptr<Dog> up_dog_11 = std::make_unique<Dog>("Dog11");

    // Now up_dog_12 manages Dog11 and up_dog_11 is nullptr
    std::unique_ptr<Dog> up_dog_12 = std::move(up_dog_11);

    up_dog_12->print_dog();

    std::cout << "Dog12 memory address: " << up_dog_12.get() << std::endl;
    std::cout << "up_dog_11 is now nullptr: " << up_dog_11.get() << std::endl;

    if (up_dog_11) 
    {
        std::cout << "Pointer11 pointing to something valid." << std::endl;
    }
    else
    {
        std::cout << "Pointer11 point to nullptr." << std::endl;
    }

    std::cout << std::endl;

    /* Can reset unique_ptr: releases memory and sets the pointer to nullptr */
    std::unique_ptr<Dog> up_dog_13 = std::make_unique<Dog>("Dog13");

    // Releases memory and sets pointer to nullptr
    up_dog_13.reset();

    if (up_dog_13)
    {
        std::cout << "up_dog_13 points somewhere valid: " << up_dog_13.get() << std::endl;
    }
    else
    {
        std::cout << "up_dog_13 points to nullptr: " << up_dog_13.get() << std::endl;
    }

    std::cout << std::endl;

    return 0;
}