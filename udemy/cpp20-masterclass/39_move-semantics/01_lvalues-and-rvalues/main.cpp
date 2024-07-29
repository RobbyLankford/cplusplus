#include <iostream>

/*
    lvalues: have a memory address that can be saved and accessed
    rvalues: stored in memory for a short time before assignment, then discarded
*/

double add(double a, double b)
{
    return a + b;
}


int main()
{
    // All lvalues: have memory address we can retrieve and use later on
    int x {5};
    int y {10};
    int z {20};

    int *ptr = &x; // can be accessed since lvalue

    // rvalues: stored in memory shortly then removed
    z = (x + y); // x + y will be discarded after assignment

    std::cout << "z: " << z << std::endl;
    std::cout << "address of z: " << &z << std::endl;
    //std::cout < "&(x + y): " << (&(x + y)) << std::endl; // compiler error since x + y is rvalue
    std::cout << std::endl;

    // result of add is stored in some memory location for a short time... discarded after assigned to result
    double result = add(10.1, 20.2);

    std::cout << "result: " << result << std::endl;
    std::cout << "address of result: " << &result << std::endl;
    //std::cout << "address of add(10.1, 20.2): " << (&(add(10.1, 20.2))) << std::endl; // compiler error because rvalue

    // Examples of compiler errors trying to access addresses of rvalues
    //int *ptr1 = &(x + y);
    //int *ptr2 = &add(10.1, 20.2);
    //int *ptr3 = &45;
    
    int *ptr4 = &x; // This is ok since x is an lvalue

    return 0;
}
