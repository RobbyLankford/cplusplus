#include <iostream>
#include <forward_list>
#include <algorithm>

/*
    Forward List
    - Very fast insertions and removals in the middle of the container
    - Implemented as a single linked list in memory
    - Elements may be stored non-contiguously in memory
    - Does not provide random access operators like []
    - Only has forward iterators and does not have reverse iterators
*/

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
    std::forward_list<int> numbers = {100, 2, 3, 4, 5};
    print_collection(numbers);

    std::cout << "\n-------\n" << std::endl;

    /* Element Access */
    std::cout << "Front element: " << numbers.front() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    /* Modifiers */

    // Clear
    std::cout << "clear:" << std::endl;
    
    numbers.clear();
    print_collection(numbers);

    // Insert After
    std::cout << std::endl;
    std::cout << "insert after:" << std::endl;

    numbers = {11, 12, 13, 14, 15};
    print_collection(numbers);

    auto it_insert = numbers.before_begin();
    numbers.insert_after(it_insert, 333);
    print_collection(numbers);

    // Emplace After
    std::cout << std::endl;
    std::cout << "emplace after:" << std::endl;

    it_insert = numbers.before_begin();
    numbers.emplace_after(it_insert, 444);
    print_collection(numbers);

    // Erase After
    std::cout << std::endl;
    std::cout << "erase after:" << std::endl;

    auto it_erase = std::find(numbers.begin(),numbers.end(),13);

    if (it_erase != numbers.end())
        std::cout << "Found 13!" << std::endl;
    else
        std::cout << "Could NOT find 13!" << std::endl;
    
    std::cout << std::endl;
    std::cout << "Erase 14:" << std::endl;

    numbers.erase_after(it_erase);
    print_collection(numbers);

    // Pop Front
    std::cout << std::endl;
    std::cout << "pop front:" << std::endl;

    numbers.pop_front();
    print_collection(numbers);

    // Resize (up or down)
    std::cout << std::endl;
    std::cout << "resize:" << std::endl;

    numbers.resize(10);
    print_collection(numbers);

    numbers.resize(3); // Resizing down causes the elements to be lost for good
    print_collection(numbers);

    numbers.resize(10);
    print_collection(numbers);

    // Swap
    std::cout << std::endl;
    std::cout << "swap:" << std::endl;

    std::forward_list<int> other_numbers {200, 400, 600};

    print_collection(numbers);
    print_collection(other_numbers);

    std::cout << std::endl;

    numbers.swap(other_numbers);

    print_collection(numbers);
    print_collection(other_numbers);

    // Other Operations
    std::cout << std::endl;
    std::cout << "merge:" << std::endl;

    std::forward_list<int> numbers1 {1, 5, 6};
    std::forward_list<int> numbers2 {9, 2, 4};

    print_collection(numbers1);
    print_collection(numbers2);

    std::cout << std::endl;

    numbers1.merge(numbers2);

    print_collection(numbers1);
    print_collection(numbers2);

    std::cout << std::endl;
    std::cout << "splice after:" << std::endl;

    numbers1 = {1, 5, 6, 8, 3};
    numbers2 = {9, 2, 4, 7, 13, 11, 17};

    print_collection(numbers1);
    print_collection(numbers2);

    std::cout << std::endl;

    numbers1.splice_after(numbers1.before_begin(), numbers2, numbers2.before_begin(), numbers2.cend());
    
    print_collection(numbers1);
    print_collection(numbers2);

    std::cout << std::endl;
    std::cout << "remove:" << std::endl;

    numbers = {1, 100, 2, 3, 10, 1, 11, -1, 12};

    print_collection(numbers);
    numbers.remove(1);
    print_collection(numbers);

    std::cout << std::endl;
    std::cout << "remove predicate (n > 10):" << std::endl;

    print_collection(numbers);
    numbers.remove_if([](int n){ return n > 10; });
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
    std::cout << "sort:" << std::endl;

    print_collection(numbers);
    numbers.sort();
    print_collection(numbers);

    return 0;
}
