#include <iostream>
#include "outer.h"

/*
    Nested Classes:
    - When Inner is private, its objects cannot be created from the outside, like in main()
    - Outer does not have access to private section of Inner
    - Inner has access to private section of Outer
    - Inner can directly access static members of Outer, but cannot access member variables w/o going through an object
*/

int main()
{
    Outer outer1 (10, 20.1);
    outer1.do_something();

    return 0;
}