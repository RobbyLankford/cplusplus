#include <iostream>

/*
    Pointers cannot be implicitly converted, they point to different configurations of memory.
    This is because the compiler cannot perform pointer arithmetic on different types.
*/

void print_sum(int *param1, int *param2);

int main()
{
    int a {3};
    int b {12};

    // Note the need to use `&` when passing the argument
    print_sum(&a, &b); // Works fine since a and b are ints

    double c {4.5};
    double d {5.5};

    // print_sum(&c, &d); // compiler error, will not work
    
    return 0;
}

void print_sum(int *param1, int *param2)
{
    std::cout << "sum: " << (*param1 + *param2) << std::endl;
}