// Practice writing a function to find a max value

#include ".vscode/cs50.h"
#include <stdio.h>

int max(int array[], int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("Number of elements: ");
    }
    while (n < 1);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Element %i: ", i);
    }

    printf("The max value is %i.\n", max(arr, n));
}

// Return the max value
int max(int array[], int n)
{
    // Assume the first value in the array is the maximum
    int max = array[0];

    // If any other value is larger than the current max, replace it
    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }

    return max;
}
