/* Implementations of various functions */

#include <stdio.h>

// Returns the largest element in array `a`
int max_in_array(int a[], int n);

// Returns the average of all elements in `a`
int average_in_array(int a[], int n);

// Returns the number of positive elements in `a`
int positives_in_array(int a[], int n);


int main(void)
{
    int len = 5;
    int a[] = {-2, -1, 0, 1, 2};

    printf("Max: %d\n", max_in_array(a, len));
    printf("Average: %d\n", average_in_array(a, len));
    printf("Positives: %d\n", positives_in_array(a, len));

    return 0;
}


int max_in_array(int a[], int n)
{
    int i = 1, max = a[0];
    while (i < n)
    {
        if (a[i] > max)
            max = a[i];
        
        i++;
    }

    return max;
}

int average_in_array(int a[], int n)
{
    int i = 0, average = 0;
    while (i < n)
    {
        average += a[i];
        
        i++;
    }

    average /= n;

    return average;
}

int positives_in_array(int a[], int n)
{
    int i = 0, positives = 0;
    while (i < n)
    {
        if (a[i] > 0)
            positives++;
        
        i++;
    }

    return positives;
}