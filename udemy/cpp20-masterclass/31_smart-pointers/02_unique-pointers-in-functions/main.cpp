#include <iostream>
#include <memory>

#include "dog.h"
#include "person.h"

/* Passing a unique_ptr as a parameter */
void do_something_with_dog_v1(std::unique_ptr<Dog> d)
{
    d->print_info();
}

void do_something_with_dog_v2(const std::unique_ptr<Dog> &d)
{
    d->set_dog_name("Rior");
    d->print_info();

    // Compiler error, cannot reset it when it is a parameter
    //d.reset();
}

/* Using a unique_ptr as a return type */
std::unique_ptr<Dog> get_unique_ptr()
{
    std::unique_ptr<Dog> p_dog = std::make_unique<Dog>("Function Local");

    std::cout << "unique_ptr address(in): " << &p_dog << std::endl;

    // Compiler typically does some optimizations and does not return a copy
    // Some compilers may actually return by value by making a copy
    // Compilers have some freedom to choose their own way to do things
    return p_dog;
}

int main()
{
    /* Pass unique_ptr to functions by value */
    std::unique_ptr<Dog> p_dog_1 = std::make_unique<Dog>("Dog1");

    // Cannot pass unique_ptr by value to a function, copies are not allowed
    //do_something_with_dog_v1(p_dog_1);

    // Ownership will move to the body of the function
    // Memory will be released when the function returns
    // This is not typically what we want
    do_something_with_dog_v2(std::move(p_dog_1));

    std::cout << "p_dog_1: " << p_dog_1.get() << std::endl;
    
    std::cout << "\n-------\n" << std::endl;

    Person person1("John");
    person1.adopt_dog(std::move(p_dog_1));

    std::cout << "Object p_dog_1 points to: " << p_dog_1.get() << std::endl;

    // An implicit move is done when object is created in place as temprorary
    do_something_with_dog_v1(std::make_unique<Dog>("Temporary Dog"));

    std::cout << "\n-------\n" << std::endl;

    /* Pass unique_ptr parameter by reference */
    std::unique_ptr p_dog_2 = std::make_unique<Dog>("Dog2");

    p_dog_2->print_info();
    do_something_with_dog_v2(p_dog_2);

    std::cout << std::endl;

    p_dog_2->print_info();

    std::cout << "\n-------\n" << std::endl;

    /* Return unique_ptr from function by value */
    std::unique_ptr<Dog> p_dog_3 = get_unique_ptr();

    std::cout << "unique_ptr address(out): " << &p_dog_3 << std::endl;

    p_dog_3->print_info();
    get_unique_ptr()->print_info();

    return 0;
}