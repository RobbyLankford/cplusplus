#include <iostream>
#include <algorithm>
#include <set>
#include <vector>


struct Sum
{
    void operator()(int n) { sum += n; }
    int sum {0};
};


int main()
{
    std::vector<int> nums {3, 4, 2, 8, 15, 267};
    
    //int nums[] {3, 4, 2, 8, 15, 267};
    //std::set<int> nums {3, 4, 2, 8, 15, 267};

    auto print = [](const int &n)
    {
        std::cout << " " << n;
    };

    // Print each element in the collection (lambda function predicate)
    std::for_each(std::begin(nums), std::end(nums), print);
    std::cout << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Predicate that modifies elements in place
    std::for_each(std::begin(nums), std::end(nums), [](int &n) { n++; });
    std::for_each(std::begin(nums), std::end(nums), print);
    std::cout << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Capturing result through stateful functor that is returned
    Sum s;
    s = std::for_each(std::begin(nums), std::end(nums), s);

    std::cout << "result: " << s.sum << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // Using a lambda that captures local variables by reference and modifies it
    int result {0};

    std::for_each(std::begin(nums), std::end(nums), [&result](int n) { result += n; });

    std::cout << "result: " << result << std::endl;

    return 0;
}
