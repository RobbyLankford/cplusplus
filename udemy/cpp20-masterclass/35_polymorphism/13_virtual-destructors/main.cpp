#include <iostream>

#include "dog.h"

int main()
{
    Animal *p_animal = new Dog;

    // Dog destructor called, then Feline, then Animal
    delete p_animal;

    return 0;
}