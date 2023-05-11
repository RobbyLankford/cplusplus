#include <iostream>

int main()
{
    // When we lose access to memory that is dynamically allocated

    // Can occur when we use a dynamically allocated pointer to another address
    int *p_number {new int {67}}; // Points to some address, let's call it address1
    int number {55};

    // We have lost access to address1, but it is still in use by the program... memory has leaked
    p_number = &number; // Now we are pointing to a new address, let's call it address2


    // Can also occur due to double allocation
    int *p_number1 {new int {55}};

    p_number1 = new int {44}; // memory with int {55} has been leaked


    // Can also occur in nested scopes
    {
        int *p_number2 {new int {57}};
    }

    // p_number2 cannot be accessed outside the scope, but int {57} is still taking up memory
    
    // Bottom line: make sure to delete and reset dynamically allocated pointers when done with them

    return 0;
}