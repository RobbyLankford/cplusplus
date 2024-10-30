#include <iostream>
#include <ranges>
#include <concepts>
#include <list>
#include <vector>
#include <algorithm>

/*
    Legacy Algorithms: Work or iterator pairs
    Range Algorithms: Work on containers directly
*/


template<typename T>
void print_collection(const T &collection)
{
    std::cout << "Collection [";
    for (const auto &elt : collection)
        std::cout << " " << elt;
    std::cout << " ]" << std::endl;
}


int main()
{
    std::vector<int> numbers {11, 2, 6, 4, 8, 3, 17, 9};
    print_collection(numbers);

    // std::ranges::all_of()
    std::cout << std::endl;
    std::cout << "std::ranges::all_of():" << std::endl;

    auto odd = [](int n)
    {
        return (n % 2) != 0;
    };

    // Ranges, iterator pair
    auto result = std::ranges::all_of(numbers.begin(), numbers.end(), odd);

    if (result)
        std::cout << "All elements in numbers are odd." << std::endl;
    else
        std::cout << "Not all elements in numbers are odd." << std::endl;
    
    // For Each
    std::cout << std::endl;
    std::cout << "std::ranges::for_each():" << std::endl;

    print_collection(numbers);
    std::ranges::for_each(numbers.begin(), numbers.end(), [](int &n) { n *= 2; });
    print_collection(numbers);

    // Sort
    std::cout << std::endl;
    std::cout << "std::ranges::sort():" << std::endl;

    print_collection(numbers);
    std::ranges::sort(numbers.begin(), numbers.end());
    print_collection(numbers);

    // Find
    std::cout << std::endl;
    std::cout << "std::ranges::find():" << std::endl;

    auto odd_n_position = std::ranges::find_if(numbers.begin(), numbers.end(), odd);

    if (odd_n_position != std::end(numbers))
        std::cout << "Numbers contains at least one odd number: " << *odd_n_position << std::endl;
    else
        std::cout << "Numbers does not contain any odd number." << std::endl;
    
    // Why you should prefer std::ranges algorithms from now on
    std::cout << std::endl;
    std::vector<int> numbers_list {11, 2, 6, 4, 8, 3, 17, 9};

    std::cout << "numbers_list: ";
    print_collection(numbers_list);

    std::ranges::sort(numbers_list.begin(), numbers_list.end());

    std::cout << "numbers_list: ";
    print_collection(numbers_list);

    return 0;
}
