#include "farm.h"
#include "dog.h"

Farm::Farm()
{

}

Farm::~Farm()
{

}

void Farm::use_dog(const Dog &dog_param)
{
    // Definition of dog is needed to #include "dog.h" is used in this file
    dog_param.print_info();
}