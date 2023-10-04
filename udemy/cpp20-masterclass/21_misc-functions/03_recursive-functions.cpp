#include <iostream>

// Recursion: a function repeatedly calls itself

int sum_up_to_zero(int value)
{
    if (value > 0)
    {
        return value + sum_up_to_zero(value - 1);
    }

    return 0;
}

int main()
{
    // 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0 = 55
    std::cout << "result (10): " << sum_up_to_zero(10) << std::endl;

    return 0;
}