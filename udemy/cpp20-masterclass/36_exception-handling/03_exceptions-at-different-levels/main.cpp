#include <iostream>

// Declarations
void f1();
void f2();
void f3();

void exception_thrower()
{
    std::cout << "Starting execution_thrower()" << std::endl;

    try
    {
        // Execution will halt from here
        throw 0;
    }
    catch (int ex)
    {
        std::cout << "Something went wrong";
    }

    std::cout << "Ending execution_thrower()" << std::endl;
}


int main()
{
    // Handling exception in main()
    try
    {
        f1();
    }
    catch (int ex)
    {
        std::cout << "Handling execution in main()" << std::endl;
    }

    return 0;
}


/* Exception thrown from f3() scope: Not handled anywhere */
// void f1()
// {
//     std::cout << "Starting f1()" << std::endl;
//     f2();
//     std::cout << "Ending f1()" << std::endl;
// }

// void f2()
// {
//     std::cout << "Starting f2()" << std::endl;
//     f3();
//     std::cout << "Ending f2()" << std::endl;
// }

// void f3()
// {
//     std::cout << "Starting f3()" << std::endl;
//     exception_thrower();
//     std::cout << "Ending f3()" << std::endl;
// }


/* Exception thrown from f3() scope: Handled in f3() */
// void f1()
// {
//     std::cout << "Starting f1()" << std::endl;
//     f2();
//     std::cout << "Ending f1()" << std::endl;
// }

// void f2()
// {
//     std::cout << "Starting f2()" << std::endl;
//     f3();
//     std::cout << "Ending f2()" << std::endl;
// }

// void f3()
// {
//     std::cout << "Starting f3()" << std::endl;
//     try
//     {
//         exception_thrower();
//     }
//     catch (int ex)
//     {
//         std::cout << "Handling execution in f3()" << std::endl;
//     }
//     std::cout << "Ending f3()" << std::endl;
// }


/* Exception thrown from f3() scope: Handled in f2() */
// void f1()
// {
//     std::cout << "Starting f1()" << std::endl;
//     f2();
//     std::cout << "Ending f1()" << std::endl;
// }

// void f2()
// {
//     std::cout << "Starting f2()" << std::endl;
//     try
//     {
//         f3();
//     }
//     catch (int ex)
//     {
//         std::cout << "Handling exception in f2()" << std::endl;
//     }
//     std::cout << "Ending f2()" << std::endl;
// }

// void f3()
// {
//     std::cout << "Starting f3()" << std::endl;
//     exception_thrower();
//     std::cout << "Ending f3()" << std::endl;
// }


/* Exception thrown from f3() scope: Handled in f1() */
// void f1()
// {
//     std::cout << "Starting f1()" << std::endl;
//     try
//     {
//         f2();
//     }
//     catch (int ex)
//     {
//         std::cout << "Handling execution in f1()" << std::endl;
//     }
//     std::cout << "Ending f1()" << std::endl;
// }

// void f2()
// {
//     std::cout << "Starting f2()" << std::endl;
//     f3();
//     std::cout << "Ending f2()" << std::endl;
// }

// void f3()
// {
//     std::cout << "Starting f3()" << std::endl;
//     exception_thrower();
//     std::cout << "Ending f3()" << std::endl;
// }


/* Exception thrown from f3() scope: Handled in main() */
void f1()
{
    std::cout << "Starting f1()" << std::endl;
    f2();
    std::cout << "Ending f1()" << std::endl;
}

void f2()
{
    std::cout << "Starting f2()" << std::endl;
    f3();
    std::cout << "Ending f2()" << std::endl;
}

void f3()
{
    std::cout << "Starting f3()" << std::endl;
    exception_thrower();
    std::cout << "Ending f3()" << std::endl;
}