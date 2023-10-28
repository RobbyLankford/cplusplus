main()
{
    /*
        Print n elements of an array, 10 per line
        Each column separated by one blank
        Each line (including the last) terminated by a newline
    */

    int i, n, a[n];
    
    for (i = 0; i < n; i++)
    {
        printf("%6d%c", a[i], (i % 10 == 9 || i == (n - 1) ? '\n' : ' '));
    }

    return 0;
}