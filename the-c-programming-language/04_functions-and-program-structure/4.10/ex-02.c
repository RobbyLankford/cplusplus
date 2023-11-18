/* qsort: sort v[left] ... v[right] into increasing order */
void qsort(int v[], int left, int right)
{
    int i, last;
    void swap(int v[], int i, int j);

    /* Do nothing if array contains fewer than two elements */
    if (left >= right)
    {
        return;
    }

    /* move partition elements to v[0] */
    swap(v, left, (left + right) / 2);
    last = left;

    /* partition */
    for (i = left + 1; i <= right; i++)
    {
        if (v[i] < v[left])
        {
            swap(v, ++last, i);
        }
    }

    /* restore partition element */
    swap(v, left, right);
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}

/* swap: interchange v[i] and v[j] */
void swap(int v[], int i, int j)
{
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

main()
{
    return 0;
}