#include <stdio.h>

int main(void)
{
    int n;

    char *tens[] = {"twenty", "thirty", "forty", "fifty",
                    "sixty", "seventy", "eighty", "ninety"};
    
    char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", 
                     "sixteen", "seventeen", "eighteen", "nineteen"};
    
    char *ones[] = {"", "-one", "-two", "-three", "-four", "-five",
                    "-six", "-seven", "-eight", "-nine"};
    
    printf("Enter a two-digit number: ");
    scanf("%d", &n);

    printf("You entered the number ");
    if (n / 10 == 1)
        printf("%s\n", teens[n % 10]);
    else
        printf("%s%s\n", tens[n / 10 - 2], ones[n % 10]);

    return 0;
}
