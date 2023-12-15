#include "dog.h"

Dog::Dog(const std::string &name_param, const std::string &breed_param, unsigned int age_param)
{
    m_name = name_param;
    m_breed = breed_param;
    m_age = age_param;
}

/*
// Getters
std::string_view Dog::get_name() const
{
    return this->m_name;
}

std::string_view Dog::get_breed() const
{
    return m_breed;
}

unsigned int Dog::get_age() const
{
    return m_age;
}

// Setters
void Dog::set_name(std::string_view name_param)
{
    this->m_name = name_param;
}

void Dog::set_breed(std::string_view breed_param)
{
    m_breed = breed_param;
}

void Dog::set_age(unsigned int age)
{
    m_age = age;
}
*/

// Utility Functions
void Dog::print_info() const
{   
    ++m_print_info_count; // Will be mutable

    std::cout << "Dog (" << this << "): " << "[name: " << this->m_name
              << ", breed: " << this-> m_breed << ", age: " << this->m_age
              << ", print_count: " << m_print_info_count << "]" << std::endl;
}