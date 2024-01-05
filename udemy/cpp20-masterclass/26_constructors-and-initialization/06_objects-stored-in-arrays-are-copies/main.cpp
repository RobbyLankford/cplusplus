#include <iostream>
#include "person.h"

int main()
{
    Person p1("John", "Snow", 25);
    Person p2("Sam", "Gray", 45);
    Person p3("Johnny", "Drill", 5);

    p1.print_info();
    p2.print_info();
    p3.print_info();

    std::cout << "\n----------\n" << std::endl;

    // Placingf in an array creates copies of p1, p2, and p3, so not the same objects
    Person students[] {p1, p2, p3};

    for (size_t i {}; i < std::size(students); ++i)
    {
        students[i].print_info();
    }

    std::cout << "\n----------\n" << std::endl;

    for (Person &p : students)
    {
        p.print_info();
    }

    return 0;
}