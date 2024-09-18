#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Trying out reverse iterators
    std::vector<int>::reverse_iterator it = numbers.rbegin();
    
    // Change the last value in numbers vector
    *it = 34;

    std::cout << "Numbers: [";
    while (it != numbers.rend())
    {
        std::cout << " " << *it;
        it++;
    }
    std::cout << " ]" << std::endl;

    return 0;
}
