#include "animal.h"

Animal::Animal(std::string_view description) : m_description(description) {}

Animal::~Animal()
{
    std::cout << "Animal desctructor called." << std::endl;
}