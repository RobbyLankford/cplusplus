#include <iostream>
#include <string_view>

/*
    Methods that are called when an object dies.
    Needed when the object needs to release some dynamic memory or for some other kind of clean up.
    Append with ~ and then the name of the class.
*/

class Dog
{
    public: 
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int age_param);
        ~Dog();

    private: 
        std::string name;
        std::string breed;
        int * p_age {nullptr};
};

// Constructor
Dog::Dog(std::string_view name_param, std::string_view breed_param, int  age_param)
{
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    
    std::cout << "Dog constructor called for: " << name << std::endl;
}

// Destructor
Dog::~Dog()
{
    delete p_age;
    
    std::cout << "Dog destructor called for: " << name << std::endl;
}

void some_func()
{
    Dog* p_dog = new Dog("Fluffy", "Shepherd", 2);

    delete p_dog;
}

int main()
{ 
    some_func();

    return 0;
}
