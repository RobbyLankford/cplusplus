/* month_name: return name of n-th month */
char *month_name(int n)
{
    // Private internal static array of month names
    static char *name[] = {
        "Illegal Month",
        "January", "February", "March",
        "April", "May", "June",
        "July", "August", "September",
        "October", "November", "December"
    };

    return (n < 1 || n > 12) ? name[0] : name[n];
}