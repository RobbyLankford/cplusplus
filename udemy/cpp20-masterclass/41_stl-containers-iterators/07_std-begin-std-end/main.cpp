#include <iostream>
#include <vector>

int main()
{
    // Built-in containers have .begin and .end methods
    std::vector<int> vi {1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << "Collection: ";
    for (auto it = vi.begin(); it != vi.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "\n------\n" << std::endl;

    // But can use std::start() and std::end for non-built-in containers
    int vii[] {1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << "Collection: ";
    for (auto it = std::begin(vii); it != std::end(vii); it++)
        std::cout << *it << " ";
    std::cout << std::endl;

    return 0;
}