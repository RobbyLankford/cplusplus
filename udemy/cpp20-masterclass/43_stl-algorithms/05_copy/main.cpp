#include <iostream>
#include <algorithm>
#include <vector>


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
    //std::vector<int> source {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int source[] {1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::vector<int> dest {15, 21, 12, 53, 30, 40};
    //int dest {15, 21, 12, 53, 30, 40};

    std::cout << "Source (before copy): ";
    print_collection(source);

    std::cout << "Destination (before copy): ";
    print_collection(dest);

    // Copy from Source to Destination (make sure you are copying from valid ranges in either source or destination)
    std::cout << std::endl;
    std::copy(std::begin(source), std::begin(source) + 4, std::begin(dest));

    std::cout << "Source (after copy): ";
    print_collection(source);

    std::cout << "Destination (after copy): ";
    print_collection(dest);

    std::cout << std::endl;

    std::vector<int> dest1 {100, 200, 300, 400, 500, 600};

    std::cout << "Source: ";
    print_collection(source);

    std::cout << "Destination: ";
    print_collection(dest1);

    auto odd = [](int n)
    {
        return ( (n % 2) != 0 );
    };

    // If there are more elements in source than the space available in destination, surplus will be ignored
    std::cout << std::endl;
    std::copy_if(std::begin(source), std::end(source), std::begin(dest1), odd);

    std::cout << "Source (after copy): ";
    print_collection(source);

    std::cout << "Destination (after copy): ";
    print_collection(dest1);

    return 0;
}