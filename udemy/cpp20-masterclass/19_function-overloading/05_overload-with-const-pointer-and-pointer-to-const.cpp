#include <iostream>

// Pointer and const pointers are valid overloads
int max(int *a, int *b)
{
    std::cout << "max with int * called" << std::endl;

    return (*a > *b) ? *a : *b;
}

int max(const int *a, const int *b)
{
    std::cout << "max with const int * called" << std::endl;

    return (*a > *b) ? *a : *b;
}

// Const pointer and const pointer to const are NOT valid overloads

/*
int min(const int *a, const int *b)
{
    return (*a < *b) ? *a : *b;
}

int min(const int * const a, const int * const b)
{
    return (*a < *b) ? *a : *b;
}
*/

int main()
{
    int a {10};
    int b {12};
    const int c {30};
    const int d {15};

    int maximum = max(&a, &b);
    std::cout << "max: " << maximum << std::endl;

    std::cout << std::endl;

    maximum = max(&c, &d);
    std::cout << "max: " << maximum << std::endl;

    return 0;
}