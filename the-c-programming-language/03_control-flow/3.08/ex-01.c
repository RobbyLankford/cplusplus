main()
{
    int found, n, m, i, j;
    int a[n], b[m];

    found = 0;
    for (i = 0; i < n && !found; i++)
    {
        for (j = 0; j < m && !found; j++)
        {
            if (a[i] == b[j])
            {
                found = 1;
            }
        }
    }

    if (found)
    {
        /* found a common element */
        a[i-1] == b[j-1];
    }
    else{
        /* did not find any common element */
    }

    return 0;
}