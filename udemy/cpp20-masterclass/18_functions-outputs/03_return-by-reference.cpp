#include <iostream>

/*
    Returning by reference will return a reference to the variable in question.
    This SHOULD be a global variable or a variable defined in main.
    DO NOT create a variable in the function and return a reference to it (it will not exist so the memory may be allocated elsewhere).
*/

// Will return a reference to what was passed in as a or b
int &max_return_reference(int &a, int &b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// The compiler will allow these next two functions, but using them may crash the system

// Will return a reference to no-longer-existing result
int &sum(int &a, int &b)
{
    int result = a + b;

    return result;
}

// Will return a reference to a or b, which is only defined inside the function (since passed by value)
int &max_input_by_value(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int x {14};
    int y{9};

    // Will return a reference to x since it is larger
    int &ref_max = max_return_reference(x, y);

    // Will simply return a copy like a "normal" function
    int val_max = max_return_reference(x, y);

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "ref_max: " << ref_max << std::endl;
    std::cout << "val_max: " << val_max << std::endl;

    std::cout << std::endl;

    // Incrementing the reference will increment the underlying x variable
    ref_max++;

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "ref_max: " << ref_max << std::endl;
    std::cout << "val_max: " << val_max << std::endl;

    return 0;
}