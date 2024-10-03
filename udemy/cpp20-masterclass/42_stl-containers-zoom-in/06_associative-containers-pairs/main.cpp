#include <iostream>
#include <vector>
#include <utility>


int main()
{
    // Create Pair
    std::cout << "Creating Pairs:" << std::endl;

    std::pair<int, std::string> pair1 {0, "Book Shelf"};
    auto pair2 = std::make_pair(1, "Table");

    std::cout << "pair1: (" << pair1.first << ", " << pair1.second << ")" << std::endl;
    std::cout << "pair2: (" << pair2.first << ", " << pair2.second << ")" << std::endl;

    // Collect components of a pair into variables
    std::cout << std::endl;
    std::cout << "auto[] syntax:" << std::endl;

    auto [int_var, string_var] = pair1;

    std::cout << "pair1 (auto[] syntax): (" << int_var << ", " << string_var << ")" << std::endl;

    // Template argument deduction (C++17)
    std::cout << std::endl;
    std::cout << "template argument deduction (C++17):" << std::endl;

    std::pair student(33165, std::string("John Snow"));

    std::cout << "Student ID: " << student.first << std::endl;
    std::cout << "Student Name: " << student.second << std::endl;

    // Collection of Pairs
    std::cout << "Collection of pairs:" << std::endl;

    std::vector<std::pair<int, std::string>> collection { {10, "Earth"}, {20, "Spins"},
                                                          {30, "From"}, {40, "Left"},
                                                          {50, "To"}, {60, "Right"} };

    // Traverse
    std::cout << "collection: [";
    for (const auto &elt : collection)
        std::cout << " (" << elt.first << ", " << elt.second << ")";
    std::cout << " ]" << std::endl;

    std::cout << "collection: [";
    for (auto [key, value] : collection)
        std::cout << " (" << key << ", " << value << ")";
    std::cout << " ]" << std::endl;

    return 0;
}
