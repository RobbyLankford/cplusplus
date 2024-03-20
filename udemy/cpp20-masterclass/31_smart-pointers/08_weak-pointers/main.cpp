#include "dog.h"
#include "person.h"

#include <iostream>
#include <memory>

/*
    Weak Pointers:
    - Non-owning pointers that do not implement the -> or * operator
    - Cannot use them directly to read or modify data
*/

int main()
{
    // Basic use of weak_ptr
    std::shared_ptr<Dog> shared_ptr_dog_1 = std::make_shared<Dog>("Dog1");
    std::shared_ptr<int> shared_ptr_int_1 = std::make_shared<int>(200);

    std::weak_ptr<Dog> weak_ptr_dog_1(shared_ptr_dog_1);
    std::weak_ptr<int> weak_ptr_int_1(shared_ptr_int_1);

    std::cout << std::endl;
    std::cout << "weak_ptr_dog_1 use count: " << weak_ptr_dog_1.use_count() << std::endl;
    std::cout << std::endl;

    // No * or -> operators as in regular pointers
    //std::cout << "Dog name: " << weak_ptr_dog_1->get_name() << std::endl;
    //std::cout << "Pointed to value: " << *weak_ptr_dog_1 << std::endl;
    //std::cout << "Pointed to address: " << weak_ptr_dog_1.get() << std::endl;

    // To use a weak_ptr, first turn it into a shared_ptr with the .lock() method
    std::shared_ptr<Dog> weak_turned_shared = weak_ptr_dog_1.lock();

    std::cout << "weak_turned_shared use count: " << weak_turned_shared.use_count() << std::endl;
    std::cout << "Dog name: " << weak_turned_shared->get_name() << std::endl;
    std::cout << "Dog name: " << shared_ptr_dog_1->get_name() << std::endl;

    std::cout << std::endl;

    // Cycling dependency problem (an example of when weak pointers would be used)
    std::shared_ptr<Person> person_a = std::make_shared<Person>("Alison");
    std::shared_ptr<Person> person_b = std::make_shared<Person>("Beth");

    // person_a points to person_b and person_b points to person_a (originally, using a shared_ptr)
    // E.g., when person_b is destroyed, the pointer in person_a is still pointing to person_b
    // At the end of the program, memory will be leaked for both person_a and person_b
    // Therefore, to fix, a weak_ptr is used in the definition of set_friend, rather than a shared_ptr
    person_a->set_friend(person_b);
    person_b->set_friend(person_a);

    return 0;
}