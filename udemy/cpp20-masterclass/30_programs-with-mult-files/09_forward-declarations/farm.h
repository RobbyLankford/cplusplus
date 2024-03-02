#ifndef FARM_H
#define FARM_H

// If we want to use the dog class in farm, we would usually do:
/* #include "dog.h" */

// However, this will slow down the compiler if we have it included in multiple header files
// If the DEFINITION of the Dog class is not used in a header file, can use a forward declaration:
class Dog;

class Farm
{
    public:
        Farm();
        ~Farm();

        // Does not require the definition of Dog, so this works file with a forward declaration
        void use_dog(const Dog &dog_param);

        // This would NOT work with a forward declaration as the definition of Dog is needed
        /*
        void do_something(const Dog &dog_param)
        {
            dog_param.print_info();
        }
        */
    
    private:
        // Would also not work with a forward declaration as the definition of Dog is needed
        /* Dog dog_member; */
};

#endif