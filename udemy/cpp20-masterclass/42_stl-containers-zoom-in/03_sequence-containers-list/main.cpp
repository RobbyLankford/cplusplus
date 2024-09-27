#include <iostream>
#include <list>
#include <algorithm>


template <typename T>
void print_collection(const T &collection)
{
    auto it = collection.begin();

    std::cout << "Collection [";
    while (it != collection.end())
    {
        std::cout << " " << *it;
        it++;
    }
    std::cout << " ]" << std::endl;
}


int main()
{
    std::list<int> numbers = {11, 12, 13, 14, 15};

    // Element Access
    std::cout << std::endl;
    std::cout << "element access:" << std::endl;

    print_collection(numbers);

    std::cout << "front element: " << numbers.front() << std::endl;
    std::cout << "back element: " << numbers.back() << std::endl;

    // Iterators
    std::cout << std::endl;
    std::cout << "iterators:" << std::endl;

    auto it = numbers.begin();

    std::cout << "iterators (list of numbers): [";
    while (it != numbers.end())
    {
        std::cout << " " << *it;
        it++;
    }
    std::cout << " ]" << std::endl;

    // Reverse Iterators
    std::cout << std::endl;
    std::cout << "reverse iterators:" << std::endl;

    auto it_back = numbers.rbegin();

    std::cout << "iterators (list of numbers): [";
    while (it_back != numbers.rend())
    {
        std::cout << " " << *it_back;
        it_back++;
    }
    std::cout << " ]" << std::endl;

    // Capacity
    std::cout << std::endl;
    std::cout << "capacity:" << std::endl;
    std::cout << "list max size: " << numbers.max_size() << std::endl;
    std::cout << "list is empty: " << numbers.empty() << std::endl;
    std::cout << "list size: " << numbers.size() << std::endl;

    // Modifiers
    std::cout << std::endl;
    std::cout << "modifier:" << std::endl;

    std::cout << std::endl;
    std::cout << "clear:" << std::endl;

    print_collection(numbers);
    numbers.clear();
    print_collection(numbers);

    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "numbers is empty: " << numbers.empty() << std::endl;

    std::cout << std::endl;
    std::cout << "insert (333 before 13):" << std::endl;

    numbers = {11, 12, 13, 14, 15};
    print_collection(numbers);

    auto it_insert = std::find(numbers.begin(), numbers.end(), 13);

    if (it_insert != numbers.end())
        numbers.insert(it_insert, 333);
    
    print_collection(numbers);

    std::cout << std::endl;
    std::cout << "emplace (444 before 14):" << std::endl;

    print_collection(numbers);

    it_insert = std::find(numbers.begin(), numbers.end(), 14);

    if (it_insert != numbers.end())
        numbers.emplace(it_insert, 444);
    
    print_collection(numbers);

    std::cout << std::endl;
    std::cout << "erase (33):" << std::endl;

    print_collection(numbers);

    auto it_erase = std::find(numbers.begin(), numbers.end(), 333);

    if (it_erase != numbers.end())
        std::cout << "Found 333!" << std::endl;
    else
        std::cout << "Could not find 333!" << std::endl;
    
    if (it_erase != numbers.end())
        numbers.erase(it_erase);
    
    print_collection(numbers);

    std::cout << std::endl;
    std::cout << "pop front:" << std::endl;

    print_collection(numbers);
    numbers.pop_front();
    print_collection(numbers);

    std::cout << std::endl;
    std::cout << "pop back:" << std::endl;

    print_collection(numbers);
    numbers.pop_back();
    print_collection(numbers);

    std::cout << std::endl;
    std::cout << "push front:" << std::endl;

    print_collection(numbers);
    numbers.push_front(111);
    print_collection(numbers);

    std::cout << std::endl;
    std::cout << "push back:" << std::endl;

    print_collection(numbers);
    numbers.push_back(222);
    print_collection(numbers);

    std::cout << std::endl;
    std::cout << "emplace front (333) and back (444):" << std::endl;

    print_collection(numbers);
    numbers.emplace_front(333);
    numbers.emplace_back(444);
    print_collection(numbers);

    std::cout << std::endl;
    std::cout << "resize:" << std::endl;

    print_collection(numbers);

    std::cout << "numbers size: " << numbers.size() << std::endl;
    std::cout << std::endl;

    numbers.resize(20);
    print_collection(numbers);

    std::cout << "numbers size: " << numbers.size() << std::endl;
    std::cout << std::endl;

    numbers.resize(3);
    print_collection(numbers);

    std::cout << "numbers size: " << numbers.size() << std::endl;
    std::cout << std::endl;

    numbers.resize(20);
    print_collection(numbers);

    std::cout << "numbers size: " << numbers.size() << std::endl;
    
    std::cout << std::endl;
    std::cout << "swap:" << std::endl;

    std::list<int> other_numbers {200, 400, 600};

    std::cout << "numbers: ";
    print_collection(numbers);

    std::cout << "other numbers: ";
    print_collection(other_numbers);

    numbers.swap(other_numbers);

    std::cout << "numbers: ";
    print_collection(numbers);

    std::cout << "other numbers: ";
    print_collection(other_numbers);

    std::cout << std::endl;
    std::cout << "merge:" << std::endl;

    std::list<int> numbers1 {1, 5, 6};
    std::list<int> numbers2 {9, 2, 4};

    std::cout << "numbers1: ";
    print_collection(numbers1);

    std::cout << "numbers2: ";
    print_collection(numbers2);

    numbers1.merge(numbers2);

    std::cout << "numbers1: ";
    print_collection(numbers1);

    std::cout << "numbers2: ";
    print_collection(numbers2);

    std::cout << std::endl;
    std::cout << "splice:" << std::endl;

    numbers1 = {1, 5, 6, 8, 3};
    numbers2 = {9, 2, 4, 7, 13, 11, 17};

    std::cout << "numbers1: ";
    print_collection(numbers1);

    std::cout << "numbers2: ";
    print_collection(numbers2);

    auto it_splice = std::find(numbers1.begin(), numbers1.end(), 6);

    if (it_splice != numbers.end())
        numbers1.splice(it_splice, numbers2);

    std::cout << "numbers1: ";
    print_collection(numbers1);

    std::cout << "numbers2: ";
    print_collection(numbers2);

    std::cout << std::endl;
    std::cout << "remove:" << std::endl;

    numbers = {1, 100, 2, 3, 10, 1, 11, -1, 12};

    print_collection(numbers);
    numbers.remove(1);
    print_collection(numbers);

    numbers.remove_if([](int n) { return n > 10; });
    print_collection(numbers);

    std::cout << std::endl;
    std::cout << "reverse:" << std::endl;

    numbers = {1, 100, 2, 3, 10, 1, 11, -1, 12};

    print_collection(numbers);
    numbers.reverse();
    print_collection(numbers);

    std::cout << std::endl;
    std::cout << "unique:" << std::endl;

    numbers = {1, 100, 100, 2, 3, 10, 1, 11, 11, -1, 12, 10, 1};

    print_collection(numbers);
    numbers.unique();
    print_collection(numbers);

    std::cout << std::endl;
    std::cout << "sort (then unique):" << std::endl;

    print_collection(numbers);
    numbers.sort();
    print_collection(numbers);
    numbers.unique();
    print_collection(numbers);

    return 0;
}
