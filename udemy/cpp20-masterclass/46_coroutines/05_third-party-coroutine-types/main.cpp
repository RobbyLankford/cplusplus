#include <iostream>
#include <coroutine>
#include <cassert>

#include "unique_generator.h"

unique_generator<int> generate_numbers()
{
    std::cout << "generate_numbers starting" << std::endl;

    co_yield 10;
    std::cout << "After stop point #1" << std::endl;

    co_yield 20;
    std::cout << "After stop point #2" << std::endl;

    co_yield 30;
    std::cout << "After stop point #3" << std::endl;

    std::cout << "generate_numbers ending" << std::endl;
}

unique_generator<int> infinite_number_stream(int start = 0)
{
    auto value = start;
    for (int i = 0; ; i++)
    {
        co_yield value;
        value++;
    }
}

unique_generator<int> range(int first, int last)
{
    while (first != last)
        co_yield first++;
}

int main()
{
    auto task1 = generate_numbers();
    for (auto i = task1.begin(); i != task1.end(); i++)
        std::cout << "value: " << *i << std::endl;
    std::cout << "value: " << task1() << std::endl;

    std::cout << std::endl;

    auto task2 = infinite_number_stream();
    for (size_t i {}; ; i++)
        std::cout << "value: " << task2() << std::endl;

    // Range
    auto task3 = range(0, 25);
    for (size_t i {}; i < 26; i++)
        std::cout << "value [" << i << "]: " << task3() << std::endl;
    
    for (auto v : task3)
        std::cout << "value: " << v << std::endl;

    return 0;
}