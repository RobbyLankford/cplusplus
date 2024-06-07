#include <iostream>

#include "animal.h"
#include "feline.h"
#include "dog.h"
#include "cat.h"
#include "bird.h"
#include "pigeon.h"
#include "crow.h"

int main()
{
    // Three Levels: Animal->Feline and Animal->Bird

    /* Animal Polymorphism */
    Dog dog1("dark gray", "dog1");
    Cat cat1("black stripes", "cat1");
    Pigeon pigeon1("white", "pigeon1");
    Crow crow1("black", "crow1");

    // Can add any animal to this collection
    Animal *animals[] {&dog1, &cat1, &pigeon1, &crow1};

    for (const auto &animal : animals)
    {
        animal->breathe();
    }

    std::cout << "\n-------\n" << std::endl;

    /* Feline Polymorphism */
    Dog dog2("dark gray", "dog2");
    Cat cat2("black stripes", "cat2");

    // Can add any feline to this collection, but NOT a bird (even though they are both animals)
    Feline *felines[] {&dog2, &cat2};

    for (const auto &feline : felines)
    {
        feline->run();
    }

    std::cout << "\n-------\n" << std::endl;

    /* Bird Polymorphism */
    Pigeon pigeon2("white", "pigeon2");
    Crow crow2("black", "crow2");

    // Can add any bird to this collection, but NOT a feline (even though they are both animals)
    Bird *birds[] {&pigeon2, &crow2};

    for (const auto &bird : birds)
    {
        bird->fly();
    }

    return 0;
}