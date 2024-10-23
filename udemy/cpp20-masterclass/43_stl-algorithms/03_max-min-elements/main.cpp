#include <iostream>
#include <algorithm>
#include <set>
#include <list>


int main()
{
    //std::vector<int> v {3, 400, 51, 6, 7, 23, 56, 71};
    //int v[] {3, 400, 51, 6, 7, 23, 56, 71};

    std::list<int> v {3, 400, 51, 6, 7, 23, 56, 71};

    // max_element and min_element return an iterator to the found element
    auto result = std::max_element(std::begin(v), std::end(v));
    std::cout << "Max element is: " << *result << std::endl;

    result = std::min_element(std::begin(v), std::end(v));
    std::cout << "Min element is: " << *result << std::endl;
    
    std::cout << "\n-------\n" << std::endl;

    // Distances: closest and furthest
    int number_to_find {100};

    auto distance = [number_to_find](int x, int y)
    {
        return (std::abs(x - number_to_find) < std::abs(y - number_to_find));
    };

    result = std::min_element(std::begin(v), std::end(v), distance);
    std::cout << *result << " is closest to " << number_to_find << std::endl;

    result = std::max_element(std::begin(v), std::end(v), distance);
    std::cout << *result << " is furthest from " << number_to_find << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Capturing min and max in a pair object
    const auto[near, far] = std::minmax_element(std::begin(v), std::end(v), distance);

    std::cout << *near << " is closest to " << number_to_find << std::endl;
    std::cout << *far << " is furthest from " << number_to_find << std::endl;

    return 0;
}
