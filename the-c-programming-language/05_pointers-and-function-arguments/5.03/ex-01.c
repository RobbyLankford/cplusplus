/* strlen: return length of string s (using pointers) */
int strlen(char *s)
{
    int n;

    // Can increment s since it is a pointer
    for (n = 0; *s != '/0'; s++)
    {
        n++;
    }

    return n;
}

main()
{
    char array[100]; // character array
    char *ptr;       // character pointer

    strlen("hello, world"); // string constant
    strlen(array);
    strlen(ptr);

    return 0;
}