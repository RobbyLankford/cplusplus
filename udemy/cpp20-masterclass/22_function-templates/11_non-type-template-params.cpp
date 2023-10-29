#include <iostream>

// Can pass in parameters for values, rather than types, in a function template

template <int threshold, typename T>
bool is_valid(T collection[], size_t size)
{
    T sum {0};

    for (size_t i {0}; i < size; i++)
    {
        sum += collection[i];
    }

    return (sum > threshold) ? true : false;
}

int main()
{
    double temps [] {10.0, 20.0, 30.0, 40.0, 50.0};

    // Set threshold to 200 and the type of 'sum' to a double
    bool valid = is_valid<200, double>(temps, std::size(temps));

    std::cout << std::boolalpha << "valid: " << valid << std::endl;

    return 0;
}