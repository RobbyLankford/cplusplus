/* strcat: concatenate t to the end of s; s must be big enough */
void strcat(char s[], char t[])
{
    int i, j;

    i = j = 0;

    /* find the end of s */
    while (s[i] != '\0')
    {
        i++;
    }

    /* copy t */
    while ((s[i++] = t[j++]) != '\0')
    {
        ;
    }
}

main()
{
    return 0;
}