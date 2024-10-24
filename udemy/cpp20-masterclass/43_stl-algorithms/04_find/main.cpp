#include <iostream>
#include <algorithm>
#include <vector>


int main()
{
    int n = 24;

    std::vector<int> collection {14, 24, 72, 8, 98, 112};
    auto result = std::find(std::begin(collection), std::end(collection), n);

    if (result != std::end(collection))
    {
        std::cout << "Collection contains: " << n << std::endl;
    }
    else
    {
        std::cout << "Collection does not contain: " << n << std::endl;
    }

    std::cout << "\n-------\n" << std::endl;

    auto odd = [](int x)
    {
        if ( (x % 2) != 0 )
            return true;
        
        return false;
    };

    auto odd_n_position = std::find_if(std::begin(collection), std::end(collection), odd);

    if (odd_n_position != std::end(collection))
    {
        std::cout << "Collection contains at least one odd number: " << *odd_n_position << std::endl;
    }
    else
    {
        std::cout << "Collection does not contain any odd number." << std::endl;
    }

    return 0;
}