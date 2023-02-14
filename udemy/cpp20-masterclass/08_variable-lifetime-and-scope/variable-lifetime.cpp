#include <iostream>

/*
    Lifetime: period of time in which a variable is alive in memory
    Becomes alive when you create it, killed at some point depending on its storage duration
    Three types of storage duration: Local, Static, Dynamic
*/

int static_var2 {80}; // Static Duration: dies when program ends

void some_function()
{
    int local_var1 {30}; // Local (Automatic) Duration: dies at end of the code block
    static int static_var1 {40}; // Static Duration: dies when program ends
    int dynamic_var1 {50}; // Programmer decides when it dies
}

int main(int argc, char **argv)
{
    int local_var1 {10}; // Local (Automatic) Duration: dies at end of the code block
    int dynamic_var2 {60}; // Programmer decides when it dies

    return 0;
}
