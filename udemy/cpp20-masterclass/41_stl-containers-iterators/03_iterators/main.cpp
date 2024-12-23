#include <iostream>
#include <vector>
#include <array>

/*
    Iterators:
        Traversing containers in a unified way, regardless of internal structure.
        Each C++ container usually also defines iterators that traverse it.
*/

template <typename T>
void print_collection(const T &collection)
{
    auto it = collection.begin();

    std::cout << "[";
    while (it != collection.end())
    {
        std::cout << " " << *it;
        ++it;
    }
    std::cout << " ]" << std::endl;
}

int main()
{
    std::vector<int> ints1 {11, 22, 33, 44};
    std::array<int, 4> ints2 {100, 200, 300, 400};

    std::vector<int>::iterator it_begin = ints1.begin();
    std::vector<int>::iterator it_end = ints1.end();

    std::cout << std::boolalpha;
    std::cout << "first element: " << *it_begin << std::endl;
    std::cout << "it == end_it: " << (it_begin == it_end) << std::endl;
    std::cout << std::endl;

    it_begin++;
    std::cout << "second element: " << *it_begin << std::endl;
    std::cout << "it == end_it: " << (it_begin == it_end) << std::endl;
    std::cout << std::endl;

    it_begin++;
    std::cout << "third element: " << *it_begin << std::endl;
    std::cout << "it == end_it: " << (it_begin == it_end) << std::endl;
    std::cout << std::endl;

    it_begin++;
    std::cout << "fourth element: " << *it_begin << std::endl;
    std::cout << "it == end_it: " << (it_begin == it_end) << std::endl;
    std::cout << std::endl;

    it_begin++;
    std::cout << "junk element: " << *it_begin << std::endl;
    std::cout << "it == end_it: " << (it_begin == it_end) << std::endl;

    std::cout << "\n-------\n" << std::endl;

    std::cout << "ints1: ";
    print_collection(ints1);

    std::cout << std::endl;

    std::cout << "ints2: ";
    print_collection(ints2);

    return 0;
}
