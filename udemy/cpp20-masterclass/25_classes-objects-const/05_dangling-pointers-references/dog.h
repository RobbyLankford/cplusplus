#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

class Dog
{
    public:
        Dog() = default;
        Dog(const std::string &name_param, const std::string &breed_param, unsigned int age_param);

        std::string &get_name()
        {
            return m_name;
        }

        std::string &get_breed()
        {
            return m_breed;
        }

        unsigned int &get_age()
        {
            return m_age;
        }

        /*
        // Getters
        std::string_view get_name() const;
        std::string_view get_breed() const;
        unsigned int get_age() const;

        // Setters
        void set_name(std::string_view name_param);
        void set_breed(std::string_view breed_param);
        void set_age(unsigned int age);
        */

        // Utility Functions
        void print_info() const;

        // Returns a dangling reference... bad
        const std::string &compile_dog_info() const
        {
            std::string dog_info = "dog_name: " + m_name
                + "dog_breed: "  + m_breed
                + "dog_age: " + std::to_string(m_age);
        }

        // Returns a dangling pointer... bad
        unsigned int *jumps_per_minute() const
        {
            unsigned int jumps {5};

            return &jumps;
        }
    
    private:
        std::string m_name;
        std::string m_breed;
        unsigned int m_age;
};

#endif