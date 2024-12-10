#include <iostream>

/*
    Changes the complication model of C++ programs
    - Provides a clear way to control which declarations are exported to client and which are implementation details
    - Replaces header files
    - For GCC, use .cc for module files and .cpp for implementation files

    Global Module
    - Can only contain preprocessor directives
    - Allows old style #include of headers in a module
    - The #include statements can only show up in the global module
*/

import my_math_module;

int main()
{
    say_something();
    
    return 0;
}
