#include <iostream>
#include <ranges>
#include <algorithm>
#include <vector>
#include <map>


void print(auto view)
{
    for (auto i : view)
        std::cout << i << " ";
    std::cout << std::endl;
}


int main()
{
    std::vector<int> vi {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Filter out evens and square them
    std::cout << "vi: ";
    print(vi);

    auto even = [](int n) { return (n % 2) == 0; };
    auto my_view = std::views::transform(std::views::filter(vi, even), [](auto n) { return n *= n; });

    std::cout << "vi transformed: ";
    print(my_view);

    std::cout << std::endl;
    std::cout << "Pipe operator: " << std::endl;

    auto my_view1 = vi | std::views::filter(even) | std::views::transform([](auto n) { return n *= n; });

    std::cout << "vi transformed: ";
    print(my_view1);

    // Classroom done as map (keys are sorted by default)
    std::cout << std::endl;
    std::map<std::string, unsigned int> classroom { {"John", 11}, {"Mary", 17}, {"Steve", 15},
                                                    {"Lucy", 14}, {"Ariel", 12} };
    
    // Print out the names
    auto names_view = classroom | std::views::keys;

    std::cout << "names: ";
    std::ranges::copy(names_view, std::ostream_iterator<std::string>(std::cout, " "));
    std::cout << std::endl;

    // Print out the ages
    auto ages_view = std::views::values(classroom);
    std::cout << "ages: ";
    std::ranges::copy(ages_view, std::ostream_iterator<unsigned int>(std::cout, " "));
    std::cout << std::endl;

    // Print names in reverse (does not work if you store data in an unordered map)
    std::cout << std::endl;
    std::cout << "names in reverse: ";
    
    std::ranges::copy(std::views::keys(classroom) | std::views::reverse, std::ostream_iterator<std::string>(std::cout, " "));
    std::cout << std::endl;

    // Pick names that come before the letter "M"
    auto before_m = [](const std::string &name)
    {
        return (static_cast<unsigned char>(name[0]) < static_cast<unsigned char>('M'));
    };

    std::cout << "names before M: ";
    std::ranges::copy(classroom | std::views::keys | std::views::filter(before_m), std::ostream_iterator<std::string>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}
