// Practice working with structs
// Practice applying sorting algorithms

#include ".vscode/cs50.h"
#include <stdio.h>

#define NUM_CITIES 10

typedef struct
{
    string city;
    int temp;
}
avg_temp;

avg_temp temps[NUM_CITIES];

void sort_cities(void);

int main(void)
{
    temps[0].city = "Austin";
    temps[0].temp = 97;

    temps[1].city = "Boston";
    temps[1].temp = 82;

    temps[2].city = "Chicago";
    temps[2].temp = 85;

    temps[3].city = "Denver";
    temps[3].temp = 90;

    temps[4].city = "Las Vegas";
    temps[4].temp = 105;

    temps[5].city = "Los Angeles";
    temps[5].temp = 82;

    temps[6].city = "Miami";
    temps[6].temp = 97;

    temps[7].city = "New York";
    temps[7].temp = 85;

    temps[8].city = "Phoenix";
    temps[8].temp = 107;

    temps[9].city = "San Francisco";
    temps[9].temp = 66;

    sort_cities();

    printf("\nAverage July Temperatures by City\n\n");

    for (int i = 0; i < NUM_CITIES; i++)
    {
        printf("%s: %i\n", temps[i].city, temps[i].temp);
    }
}

// Bubble Sort Algorithm
void sort_cities(void)
{
    int n = NUM_CITIES;
    avg_temp temp_holder;

    // Iterate over the array as many times as there are elements in the array
    for (int i = 0; i < n; i++)
    {
        // Iterate over each element in the array, except for the last element
        for (int j = 0; j < n - 2; j++)
        {
            // Descending Order: swap elements if left < right
            if (temps[j].temp < temps[j + 1].temp)
            {
                temp_holder = temps[j];
                temps[j] = temps[j + 1];
                temps[j + 1] = temp_holder;
            }
        }
    }
}
