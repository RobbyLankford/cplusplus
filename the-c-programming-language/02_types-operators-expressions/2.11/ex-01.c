main()
{
    int a, b, z;

    z = (a > b) ? a : b;    /* z = max(a, b) */

    if (a > b)
    {
        z = a;
    }
    else
    {
        z = b;
    }

    return 0;
}