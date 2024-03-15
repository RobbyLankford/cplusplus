#include <iostream>
#include <memory>

#include "dog.h"

/* Shared Pointer: allows multiple smart pointers to point to the same object */

int main()
{
    /* shared_ptr to fundamental types */
    std::shared_ptr<int> int_ptr_1 {new int {20}};

    std::cout << "The pointed to value is: " << *int_ptr_1 << std::endl;

    // Use pointer to assign a new value
    *int_ptr_1 = 40;

    std::cout << "The pointed to value is: " << *int_ptr_1 << std::endl;

    std::cout << std::endl;

    // shared_ptr has a count showing how many pointers are pointing to the object
    std::cout << "Use count: " << int_ptr_1.use_count() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    /* Can copy a shared_ptr directly to another shared_ptr */
    std::shared_ptr<int> int_ptr_2 = int_ptr_1;

    std::cout << "The pointed to value is (through int_ptr_1): " << *int_ptr_1 << std::endl;
    std::cout << "The pointed to value is (through int_ptr_2): " << *int_ptr_2 << std::endl;

    *int_ptr_2 = 70;

    std::cout << "The pointed to value is (through int_ptr_1): " << *int_ptr_1 << std::endl;
    std::cout << "The pointed to value is (through int_ptr_2): " << *int_ptr_2 << std::endl;

    std::cout << std::endl;

    // Both use counts are now 2 since they are both pointing to the same object
    std::cout << "Use count for int_ptr_1: " << int_ptr_1.use_count() << std::endl;
    std::cout << "Use count for int_ptr_2: " << int_ptr_2.use_count() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    /* Other methods of initializing shared_ptr */

    // Initialize to nullptr first
    std::shared_ptr<int> int_ptr_3;
    int_ptr_3 = int_ptr_1;

    std::shared_ptr<int> int_ptr_4 {nullptr};
    int_ptr_4 = int_ptr_1;

    std::shared_ptr<int> int_ptr_5 {int_ptr_1};

    std::cout << "The pointed to value is (through int_ptr_5): " << *int_ptr_5 << std::endl;

    *int_ptr_5 = 100;

    std::cout << "The pointed to value is (through int_ptr_5): " << *int_ptr_5 << std::endl;

    std::cout << "Use count for int_ptr_1: " << int_ptr_1.use_count() << std::endl;
    std::cout << "Use count for int_ptr_2: " << int_ptr_2.use_count() << std::endl;
    std::cout << "Use count for int_ptr_3: " << int_ptr_3.use_count() << std::endl;
    std::cout << "Use count for int_ptr_4: " << int_ptr_4.use_count() << std::endl;
    std::cout << "Use count for int_ptr_5: " << int_ptr_5.use_count() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Use a shared_ptr to manage an already existing piece of memory
    int *int_ptr_raw = new int(33);
    std::shared_ptr<int> int_ptr_6 {int_ptr_raw};
    int_ptr_raw = nullptr;

    std::cout << "The value pointed to by int_ptr_raw (through int_ptr_6): " << *int_ptr_6 << std::endl;
    std::cout << "Use count for int_ptr_6 is: " << int_ptr_6.use_count() << std::endl;
    std::cout << "Raw pointer: " << int_ptr_raw << std::endl;
    std::cout << "int_ptr_6: " << int_ptr_6.get() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    /* Reset: decrements the use count and sets the pointer to nullptr */

    // Decrements reference count and sets int_ptr_5 to nullptr
    int_ptr_5.reset();

    std::cout << "Use count for int_ptr_1: " << int_ptr_1.use_count() << std::endl;
    std::cout << "Use count for int_ptr_2: " << int_ptr_2.use_count() << std::endl;
    std::cout << "Use count for int_ptr_3: " << int_ptr_3.use_count() << std::endl;
    std::cout << "Use count for int_ptr_4: " << int_ptr_4.use_count() << std::endl;
    std::cout << "Use count for int_ptr_5: " << int_ptr_5.use_count() << std::endl;

    std::cout << "int_ptr_5.get(): " << int_ptr_5.get() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    /* Can get the raw pointer address and use the ptr in if statements */
    std::cout << "int_ptr_4: " << int_ptr_4 << std::endl;
    std::cout << "int_ptr_4.get(): " << int_ptr_4.get() << std::endl;

    std::cout << std::endl;

    // Can be casted to bool
    std::cout << std::boolalpha;
    std::cout << "int_ptr_4->bool: " << static_cast<bool>(int_ptr_4) << std::endl;
    std::cout << "int_ptr_4->bool: " << static_cast<bool>(int_ptr_5) << std::endl;

    if (int_ptr_4)
    {
        std::cout << "int_ptr_4 pointing to something valid." << std::endl;
    }
    else
    {
        std::cout << "int_ptr_4 pointing to nullptr." << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;

    /* Reset all pointers */
    int_ptr_4.reset();
    int_ptr_3.reset();
    int_ptr_2.reset();
    int_ptr_1.reset();

    std::cout << "Use count for int_ptr_1: " << int_ptr_1.use_count() << std::endl;
    std::cout << "Use count for int_ptr_2: " << int_ptr_2.use_count() << std::endl;
    std::cout << "Use count for int_ptr_3: " << int_ptr_3.use_count() << std::endl;
    std::cout << "Use count for int_ptr_4: " << int_ptr_4.use_count() << std::endl;
    std::cout << "Use count for int_ptr_5: " << int_ptr_5.use_count() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    /* shared pointers with custom types */

    // Ways to initialize
    std::shared_ptr<Dog> dog_ptr_1 {new Dog("Dog1")};
    std::shared_ptr<Dog> dog_ptr_2 = dog_ptr_1;

    dog_ptr_1->print_info();
    dog_ptr_2->print_info();

    std::cout << std::endl;

    std::cout << "Use count for dog_ptr_1: " << dog_ptr_1.use_count() << std::endl;
    std::cout << "Use count for dog_ptr_2: " << dog_ptr_2.use_count() << std::endl;

    std::shared_ptr<Dog> dog_ptr_3;
    dog_ptr_3 = dog_ptr_1;

    std::shared_ptr<Dog> dog_ptr_4 {nullptr};
    dog_ptr_4 = dog_ptr_1;

    std::shared_ptr<Dog> dog_ptr_5 {dog_ptr_1};

    std::cout << std::endl;

    std::cout << "Use count for dog_ptr_1: " << dog_ptr_1.use_count() << std::endl;
    std::cout << "Use count for dog_ptr_2: " << dog_ptr_2.use_count() << std::endl;
    std::cout << "Use count for dog_ptr_3: " << dog_ptr_3.use_count() << std::endl;
    std::cout << "Use count for dog_ptr_4: " << dog_ptr_4.use_count() << std::endl;
    std::cout << "Use count for dog_ptr_5: " << dog_ptr_5.use_count() << std::endl;

    // Initialize from an already existing raw pointer
    Dog * dog_ptr_raw = new Dog("Ralso");
    std::shared_ptr<Dog> dog_ptr_6 {dog_ptr_raw};
    dog_ptr_raw = nullptr;

    std::cout << std::endl;

    dog_ptr_6->print_info();

    std::cout << "Use count for dog_ptr_6 is: " << dog_ptr_6.use_count() << std::endl;
    std::cout << "dog_ptr_raw: " << dog_ptr_raw << std::endl;

    // Reset
    dog_ptr_5.reset();

    std::cout << std::endl;

    std::cout << "Use count for dog_ptr_1: " << dog_ptr_1.use_count() << std::endl;
    std::cout << "Use count for dog_ptr_2: " << dog_ptr_2.use_count() << std::endl;
    std::cout << "Use count for dog_ptr_3: " << dog_ptr_3.use_count() << std::endl;
    std::cout << "Use count for dog_ptr_4: " << dog_ptr_4.use_count() << std::endl;
    std::cout << "Use count for dog_ptr_5: " << dog_ptr_5.use_count() << std::endl;

    // Get raw pointer address and use in if statements
    std::cout << std::endl;

    std::cout << "dog_ptr_4: " << dog_ptr_4 << std::endl;
    std::cout << "dog_ptr_4.get(): " << dog_ptr_4.get() << std::endl;
    std::cout << "dog_ptr_4->bool: " << static_cast<bool>(dog_ptr_4) << std::endl;
    std::cout << "dog_ptr_5->bool: " << static_cast<bool>(dog_ptr_5) << std::endl;

    if (dog_ptr_5)
    {
        std::cout << "dog_ptr_5 pointing to something valid." << std::endl;
    }
    else
    {
        std::cout << "dog_ptr_5 pointing to nullptr." << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;

    /* Shared Pointers */
    std::shared_ptr<int> int_ptr_7 = std::make_shared<int>(55);

    std::cout << "The value pointed to by int_ptr_7 is: " << *int_ptr_6 << std::endl;

    std::cout << std::endl;

    std::shared_ptr<Dog> dog_ptr_7 = std::make_shared<Dog>("Salz");

    dog_ptr_7->print_info();

    std::cout << "int_ptr_7 use count: " << int_ptr_7.use_count() << std::endl;
    std::cout << "dog_ptr_7 use count: " << dog_ptr_7.use_count() << std::endl;

    std::shared_ptr<int> int_ptr_8 {nullptr};
    int_ptr_8 = int_ptr_7;

    std::shared_ptr<Dog> dog_ptr_8 {nullptr};
    dog_ptr_8 = dog_ptr_7;

    std::cout << std::endl;

    std::cout << "int_ptr_7 use count: " << int_ptr_7.use_count() << std::endl;
    std::cout << "dog_ptr_7 use count: " << dog_ptr_7.use_count() << std::endl;

    int_ptr_7.reset();
    dog_ptr_7.reset();

    std::cout << std::endl;

    std::cout << "int_ptr_7 use count: " << int_ptr_7.use_count() << std::endl;
    std::cout << "dog_ptr_7 use count: " << dog_ptr_7.use_count() << std::endl;
    std::cout << "int_ptr_8 use count: " << int_ptr_8.use_count() << std::endl;
    std::cout << "dog_ptr_8 use count: " << dog_ptr_8.use_count() << std::endl;

    std::cout << std::endl;

    return 0;
}