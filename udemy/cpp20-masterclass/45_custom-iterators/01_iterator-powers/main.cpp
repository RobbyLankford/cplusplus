#include <iostream>
#include <algorithm>
#include <vector>
#include <ranges>

template <typename T>
std::ostream &operator<<(std::ostream &out, const std::vector<T> &vec)
{
    out << "[ ";
    for (auto i : vec)
        out << i << " ";
    std::cout << "]";

    return out;
}

int main()
{
    // Source Collection
    std::vector<int> numbers {1, 9, 3, 7, 2, 5, 4, 6, 89};
    std::cout << "numbers: " << numbers << std::endl;

    // Iterators returned by begin() are input iterators
    std::cout << std::endl;
    std::vector<int> dest(numbers.size());
    
    std::cout << "numbers: " << numbers << std::endl;
    std::cout << "dest: " << dest << std::endl;
    
    std::ranges::copy(numbers.cbegin(), numbers.cend(), dest.begin());

    std::cout << "numbers: " << numbers << std::endl;
    std::cout << "dest: " << dest << std::endl;

    // Forward Iterator
    std::cout << std::endl;
    std::cout << "numbers: " << numbers << std::endl;

    std::ranges::replace(numbers.begin(), numbers.end(), 7, 345);

    std::cout << "numbers: " << numbers << std::endl;

    // Bidirectional Iterator
    std::cout << std::endl;
    std::cout << "numbers: " << numbers << std::endl;

    auto it_first = numbers.begin();
    auto it_last = numbers.end();

    while (it_last-- != it_first)
        std::cout << *it_last << " ";
    
    std::cout << std::endl;
    std::ranges::reverse(numbers.begin(), numbers.end());
    std::cout << "numbers: " << numbers << std::endl;

    // Random Access Iterator
    std::cout << std::endl;
    std::cout << "numbers: " << numbers << std::endl;

    std::ranges::sort(numbers);

    std::cout << "numbers: " << numbers << std::endl;

    return 0;
}