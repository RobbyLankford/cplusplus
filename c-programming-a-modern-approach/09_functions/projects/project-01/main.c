/* Selection Sort on a user-inputted array of integers */

#include <stdio.h>

#define MAX_LEN 100

void selection_sort(int a[], int n);

int main(void)
{
    int c, n, a[MAX_LEN];

    printf("Enter integers to be sorted: ");
    for (int i = 0, n = 0; i < MAX_LEN; i++)
    {
        scanf(" %d", &a[i]);
        n++;

        if ((c = getchar()) == '\n')
            break;
        ungetc(c, stdin);
    }

    selection_sort(a, n);

    printf("In sorted order...");
    for (int i = 0; i < n; i++)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}

void selection_sort(int a[], int n)
{
    if (n == 0)
        return;
    
    int temp, largest = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[largest])
            largest = i;
    }

    temp = a[largest];
    a[largest] = a[n-1];
    a[n-1] = temp;

    selection_sort(a, n-1);
}