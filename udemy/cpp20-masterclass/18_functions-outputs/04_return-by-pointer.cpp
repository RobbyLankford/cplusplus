#include <iostream>

/*
    Returning by pointer will return a pointer to the variable in question.
    This SHOULD be a global variable or a variable defined in main.
    Do NOT create a variable in the function and return a pointer to it (it will not exist so the memory may be allocated elsewhere).
*/

// Will return a pointer to what was passed in as a or b
int *max_return_pointer(int *a, int *b)
{
    if (*a > *b)
    {
        return a;
    } else {
        return b;
    }
}

// The compiler will allow these next two functions, but using them may crash the system

// Will return a pointer to the a or b variable defined inside this function, which will no longer exist
int *max_input_by_value(int a, int b)
{
    if (a > b)
    {
        return &a;
    } else 
    {
        return &b;
    }
}

// Will return a pointer to result, which does not exist outside the function
int *sum(int *a, int *b)
{
    int result = *a + *b;

    return &result;
}

int main()
{
    int x {56};
    int y {45};

    // Will return a pointer to x since it is larger
    int *p_max = max_return_pointer(&x, &y);

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "*p_max: " << *p_max << std::endl;

    // Incrementing will incrememnt x since p_max is pointing to it
    ++(*p_max);

    std::cout << std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "*p_max: " << *p_max << std::endl;

    return 0;
}