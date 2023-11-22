main()
{
    // Declare pointers
    int x = 1, y = 2, z[10];

    int *ip;    // ip is a pointer to int

    ip = &x;    // ip now points to x, which is 1
    y = *ip;    // y is now 1
    *ip = 0;    // x is now 0
    ip = &z[0]; // ip now points to z[0]

    // Working with pointers
    *ip = *ip + 10; // increments what ip is pointing to by 10

    *ip += 1;   // increments what ip is pointing to by 1
    ++*ip;      // same thing
    (*ip)++;    // same thing

    return 0;
}