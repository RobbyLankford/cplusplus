#include <iostream>

/*
    External functions with access to private members of a class
    - Implementation can live in any translation unit
    - Declaration has to show up before the function is called
    - Class determines who is its friend
    - Friend declaration can appear in public or private section of the class
    - Can have multiple friend functions in the same class
    - Friend functions can be overloaded
    - Have to use the <object_name>.<member_variable> syntax in the function
    - Friend functions are not member functions
    - Friend functions do not have access to the `this` pointer
*/

class Dog
{
    // Friend Function Declarations
    friend void debug_dog_info(const Dog &dog);
    friend void debug_dog_info();
    
    public:
        Dog(const std::string &name, int age)
            : dog_name {name}, dog_age {age}
        {

        }

    private:
        std::string dog_name;
        int dog_age;
};

// Friend Functions
void debug_dog_info(const Dog &dog)
{
    std::cout << "Name: " << dog.dog_name << ", Age: " << dog.dog_age << std::endl;
}

void debug_dog_info()
{
    Dog dog1("Milou", 3);
    dog1.dog_name = "Fluffy";

    std::cout << "Name: " << dog1.dog_name << ", Age: " << dog1.dog_age << std::endl;
}

// Main
int main()
{
    Dog dog1("Fluffy", 4);

    debug_dog_info(dog1);
    debug_dog_info();

    return 0;
}