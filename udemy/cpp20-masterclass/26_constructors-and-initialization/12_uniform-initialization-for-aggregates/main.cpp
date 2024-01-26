#include <iostream>
#include <string>

/*
    Uniform Initialization:
        Initializing any object either through () or {}
*/

struct Person
{
    std::string name;
    int age;
};

void print_person(const Person &p)
{
    std::cout << "Person [name: " << p.name << ", age: " << p.age << "]" << std::endl;
}

void print_array(int *arr, size_t size)
{
    for (size_t i {0}; i < size; i++)
    {
        std::cout << *(arr + i) << std::endl;
    }
}

int main()
{
    // Can initialize with {} : does not allow narrowing conversions
    std::cout << "Initialization with {}:" << std::endl;

    Person person1 {"Steven", 32}; // Aggregate initialization
    print_person(person1);

    std::cout << std::endl;

    int numbers1[5] {1, 2, 3, 4, 5}; // Putting a decimal will throw a compiler error
    print_array(numbers1, 5);

    std::cout << "\n----------\n" << std::endl;

    /*
    
    ** In the notes, but does not work... throws error

    // Can initialize with () : does allow narrowing conversions
    std::cout << "Initialization with ():" << std::endl;

    Person person2 ("Steven", 32); // Aggregate initialization
    print_person(person2);

    std::cout << std::endl;

    int numbers2[5] (6, 7, 8.6, 9, 10);
    print_array(numbers2, 5);

    */

    return 0;
}