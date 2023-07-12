#include <iostream>

/*
    Function: a resuable piece of code that can
        1. Take in a number of optional arguments
        2. Produce some desirable output
*/

// Function Definitions

// Function with no input and no output
void function_name()
{
    return;
}

void say_hello()
{
    std::cout << "Hello There" << std::endl;

    return; // Can omit return for functions returning void
}

// Function with one input parameter and no output
void enter_bar(size_t age)
{
    if (age > 18)
    {
        std::cout << "You are " << age << " years old. Please proceed." << std::endl;
    }
    else
    {
        std::cout << "Sorry, you are too young." << std::endl;
    }

    return;
}

// Function with multiple input parameters and one output
int max(int a, int b)
{
    if (a > b)
    {
        return a; // Do not have to wait until the end of the function to return
    }
    else
    {
        return b;
    }
}

// Function with no input but returns an output
int lucky_number()
{
    return 99;
}

// Function to show that the parameters are copies of the input variables
double increment_multiply(double a, double b)
{
    std::cout << "Inside function, before increment: " << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    double result = ((++a) * (++b));

    std::cout << "Inside function, after increment: " << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    return result;
}

// Function Calls (should be called from the main function)
int main(int argc, char **argv)
{
    int a_value {14};
    int b_value {10};

    // Show that variables can have the same name as those that are function parameters
    int a {33};
    int b {41};

    // Basic function call
    std::cout << "Calling the enter_bar function: " << std::endl;
    enter_bar(22);

    std::cout << "\n----------\n" << std::endl;

    // Can store the result of a function in a variable, or call it directly
    int max_number = {max(a_value, b_value)};

    std::cout << "max(" << a_value << ", " << b_value << "): " << max_number << std::endl;
    std::cout << "max(" << a_value << ", " << b_value << "): " << max(a_value, b_value) << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Another direct function call
    std::cout << "Calling the say_hello function: " << std::endl;
    say_hello();

    std::cout << std::endl;

    std::cout << "Calling the lucky_number function: " << std::endl;
    std::cout << "Your lucky number is: " << lucky_number() << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Can reuse function as much as we want with different inputs
    std::cout << "max(100, 200): " << max(100, 200) << std::endl;
    std::cout << "max(500, 303): " << max(500, 303) << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Compiler will implicitly convert variables of incorrect type passed to functions
    double c {12.33};
    double d {51.25};

    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << std::endl;

    // Automatically converted to integers
    std::cout << "max(" << c << ", " << d << "): " << max(c, d) << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Variables passed to functions create copies, so original variables are not altered
    double e {3.00};
    double f {4.00};

    std::cout << "Outside function, before increment: " << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;
    std::cout << std::endl;

    double mult_result = increment_multiply(e, f);

    std::cout << std::endl;
    std::cout << "Outside function, after increment: " << std::endl;
    std::cout << "e: " << e << std::endl;
    std::cout << "f: " << f << std::endl;

    return 0;
}