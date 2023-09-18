#include <iostream>

// Pointers to different types are treated as different types
int max(int *numbers, size_t count)
{
    int maximum {0};

    for (size_t i {0}; i < count; i++)
    {
        if (numbers[i] > maximum)
        {
            maximum = numbers[i];
        }
    }

    return maximum;
}

double max(double *numbers, size_t count)
{
    double maximum {0};

    for (size_t i {0}; i < count; i++)
    {
        if (numbers[i] > maximum)
        {
            maximum = numbers[i];
        }
    }

    return maximum;
}

// The following are equivalent, so cannot all be used
// int max(int *numbers, size_t count);
// int max(int numbers[], size_t count);
// int max(int numbers[10], size_t count);

int main()
{
    double doubles[] {10.0, 30.0, 12.3};
    int ints[] {1, 2, 5, 2, 8, 4};

    auto result1 = max(ints, std::size(ints));
    auto result2 = max(doubles, std::size(doubles));

    std::cout << "Result (ints): " << result1 << std::endl;
    std::cout << std::endl;
    std::cout << "Results (doubles): " << result2 << std::endl;

    return 0;
}