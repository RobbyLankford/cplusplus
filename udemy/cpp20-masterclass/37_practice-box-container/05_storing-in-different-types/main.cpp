#include <iostream>

#include "intcontainer.h"
#include "doublecontainer.h"
#include "charcontainer.h"

int main()
{
    DoubleContainer double_box1;
    double_box1.add(11.2);
    double_box1.add(33.5);

    std::cout << "double_box1: " << double_box1 << std::endl;
    std::cout << std::endl;

    IntContainer int_box1;
    int_box1.add(10);
    int_box1.add(20);

    std::cout << "int_box1: " << int_box1 << std::endl;
    std::cout << std::endl;

    CharContainer char_box1;
    char_box1.add('H');
    char_box1.add('E');
    char_box1.add('L');
    char_box1.add('L');
    char_box1.add('O');

    std::cout << "char_box1: " << char_box1 << std::endl;
    std::cout << std::endl;

    char_box1.remove_all('L');

    std::cout << "char_box1: " << char_box1 << std::endl;

    return 0;
}
