#include <iostream>

// Simple example to show how to return a pointer to a specific array element

const double *find_max_address(const double scores[], size_t count);

int main()
{
    double array[] {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    const double *p_max = find_max_address(array, std::size(array));

    // Print out the maximum value, not the address of the maximum value
    std::cout << "max: " << *p_max << std::endl;
    
    return 0;
}

const double *find_max_address(const double scores[], size_t count)
{
    size_t max_index {0};
    double max {0};

    for (size_t i {0}; i < count; i++)
    {
        if (scores[i] > max)
        {
            max = scores[i];
            max_index = i;
        }
    }

    // Return a pointer to the maximum element in the scores array
    return &scores[max_index];
}