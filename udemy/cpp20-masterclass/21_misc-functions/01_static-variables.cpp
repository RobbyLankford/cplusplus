#include <iostream>

/*
    Both global and static variables have static storage duration: live throughout program lifetime
    Static variables are scoped to the function in which they are declared and used.
    Global variables are scoped to the global scope of the file where they are declared.
*/

// Global scope
size_t dog_count {0};

unsigned int add_student()
{
    // The scope is in the add_student function
    static unsigned int student_count {0};

    // Since its life goes beyond the function, it will incrememnt each time function is called
    student_count++;

    // Defined in global scope, so fine to use
    dog_count++;

    return student_count;
}

void do_something()
{
    // Only defined in add_student, so cannot be used here
    //student_count--; // Compiler error

    // Defined in global scope, so fine to use
    dog_count--;
}

int main()
{
    for (size_t i {0}; i < 20; i++)
    {
        std::cout << "student count: " << add_student() << std::endl;
    }

    return 0;
}