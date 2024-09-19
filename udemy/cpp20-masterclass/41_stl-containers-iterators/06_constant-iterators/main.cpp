#include <iostream>
#include <vector>


template <typename T>
void print_collection(const T &collection)
{
    auto it = collection.begin();

    std::cout << "[";
    while (it != collection.end())
    {
        std::cout << " " << *it;
        it++;
    }
    std::cout << " ]" << std::endl;
}


int main()
{
    std::vector<int> numbers {11, 22, 33, 44, 55, 66, 77};

    std::cout << "numbers: ";
    print_collection(numbers);

    std::vector<int>::const_iterator c_it = numbers.cbegin();

    // Cannot change anything because iterator is constant
    /*
    while (c_it != numbers.end())
    {
        *c_it = 100;
        c_it++;
    }
    */

    return 0;
}