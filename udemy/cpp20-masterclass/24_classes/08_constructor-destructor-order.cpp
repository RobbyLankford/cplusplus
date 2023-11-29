#include <iostream>
#include <string_view>

/*
    Objects are constructed in the order they are declared.
    Objects are destructed in the reverse order they are declared.
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

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;
    
    std::cout << "Dog constructor called for: " << name << std::endl;
}

Dog::~Dog()
{
    delete p_age;
    
    std::cout << "Dog destructor called for: " << name << std::endl;
}

int main()
{
    Dog dog1("Doggy1", "Shepherd", 2);
    Dog dog2("Doggy2", "Shepherd", 3);
    Dog dog3("Doggy3", "Shepherd", 5);
    Dog dog4("Doggy4", "Shepherd", 1);
   
    return 0;
}