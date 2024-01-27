#include <iostream>
#include <string>

/* Allows a class to access private members of a different class */

class Dog
{
    public:
        Dog(const std::string &name, int age)
            : dog_name {name}, dog_age {age}
        {

        }

        friend class Cat;

    private:
        std::string dog_name;
        int dog_age;
};

class Cat
{
    public:
        Cat(const std::string &name)
            : cat_name {name}
        {

        }

        void show_info_about_dog(const Dog &dog) const
        {
            std::cout << "dog name: " << dog.dog_name << std::endl;
        }
    
    private:
        std::string cat_name;
};

int main()
{
    Cat cat1 {"Kitty"};
    Dog dog1 {"Doggy", 3};

    cat1.show_info_about_dog(dog1);
    
    return 0;
}