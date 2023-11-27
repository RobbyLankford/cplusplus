/* strlen: return length of string s (using pointer arithmetic) */
int strlen(char *s)
{
    char *p = s;

    while (*p != '\0')
    {
        p++;
    }

    return p - s;
}