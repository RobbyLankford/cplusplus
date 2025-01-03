#include <iostream>
#include <algorithm>
#include <vector>

#include "boxcontainer.h"

template <typename T>
std::ostream &operator<<(std::ostream &out, const std::vector<T> &vec)
{
    out << "[ ";
    for (auto i : vec)
        out << i << " ";
    out << "]";

    return out;
}

int main()
{
    BoxContainer<int> box1;

    box1.add(5);
    box1.add(1);
    box1.add(4);
    box1.add(8);
    box1.add(5);
    box1.add(3);
    box1.add(7);
    box1.add(9);    
    box1.add(6);

    std::cout << "box: " << box1 << std::endl;

    // Destination box
    BoxContainer<int> box2;
    for (size_t i {}; i < box1.size(); i++)
        box2.add(0);
    
    // Copy
    std::cout << std::endl;
    std::cout << "box2-1: " << box2 << std::endl;
    std::ranges::copy(box1, box2.begin());
    std::cout << "box2-2: " << box2 << std::endl;

    return 0;
}
