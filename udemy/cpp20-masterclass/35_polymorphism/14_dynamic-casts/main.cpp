#include <iostream>

#include "dog.h"

/*
    Notes on Dynamic Casts:
    - Transforming from base class pointer or reference to derived class pointer or reference, at run time
    - Makes it possible to call NON-POLYMORPHIC METHODS on derived objects
    - Overuse can be a sign of bad design... should maybe make method polymorphic in the first place
*/

void do_something_with_animal_ptr(Animal *animal)
{
    std::cout << "In function taking base pointer..." << std::endl;

    Feline *feline_ptr = dynamic_cast<Feline*>(animal);

    if (feline_ptr)
    {
        feline_ptr->do_some_feline_thing();
    }
    else
    {
        std::cout << "Could not cast to Feline pointer." << std::endl;
    }
}

void do_something_with_animal_ref(Animal &animal)
{
    std::cout << "In function taking base reference..." << std::endl;

    Feline *feline_ptr {dynamic_cast<Feline*>(&animal)};

    if (feline_ptr)
    {
        feline_ptr->do_some_feline_thing();
    }
    else
    {
        std::cout << "Could not cast to Feline reference." << std::endl;
    }
}


int main()
{
    // Base Class Pointer
    Animal *animal1 = new Feline("stripes", "feline1");

    // If the cast succeeds, we get a valid pointer back...
    // ... if it fails, we get nullptr
    Feline *feline_ptr_1 = dynamic_cast<Feline*>(animal1);

    if (feline_ptr_1)
    {
        feline_ptr_1->do_some_feline_thing();
    }
    else
    {
        std::cout << "Could not transform from Animal* to Dog*" << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;

    // Base Class Reference
    Feline feline2("stripes", "feline2");
    Animal &animal_ref = feline2;

    Dog *feline_ptr_2 {dynamic_cast<Dog*>(&animal_ref)};

    if (feline_ptr_2)
    {
        feline_ptr_2->do_some_dog_thing();
    }
    else
    {
        std::cout << "Could not cast to Dog reference." << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;

    do_something_with_animal_ptr(animal1);
    do_something_with_animal_ref(animal_ref);

    std::cout << "\n-------\n" << std::endl;

    delete animal1;

    return 0;
}