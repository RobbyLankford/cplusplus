#include <iostream>
#include <array>
#include <algorithm>


class Item
{
    public:
        Item() : m_var(0)
        {
            std::cout << "Item default constructor called." << std::endl;
        }

        Item(int var) : m_var(var)
        {
            std::cout << "Item constructor called for: " << m_var << std::endl;
        }

        Item(const Item &source) : m_var{source.m_var}
        {
            std::cout << "Item copy constructor called for: " << m_var << std::endl;
        }

        int get() const
        {
            return m_var;
        }

    private:
        int m_var {0};
};

std::ostream &operator<<(std::ostream &out, const Item &item)
{
    out << "Item [value: " << item.get() << "]";

    return out;
}

template <typename T>
void print_collection(const T &collection)
{
    auto it = collection.begin();

    std::cout << "Collection [";
    while (it != collection.end())
    {
        std::cout << " " << *it;
        ++it;
    }
    std::cout << " ]" << std::endl;
}

template <typename T>
void print_raw_array(const T *p, std::size_t size)
{
    std::cout << "data = ";
    for (std::size_t i = 0; i < size; i++)
        std::cout << p[i] << " ";
    std::cout << std::endl;
}


int main()
{
    // Collection creation and element access
    std::cout << "Collection creation and element access:" << std::endl;

    std::array<int, 10> numbers {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "numbers: ";
    print_collection(numbers);

    std::cout << std::endl;
    std::cout << "Element at index 3: " << numbers[3] << std::endl;
    std::cout << "Element at index 3: " << numbers.at(3) << std::endl;

    std::cout << std::endl;
    std::cout << "Numbers front: " << numbers.front() << std::endl;
    std::cout << "Numbers back: " << numbers.back() << std::endl;

    numbers.front() = 22;
    numbers.back() = 33;

    std::cout << "Numbers front: " << numbers.front() << std::endl;
    std::cout << "Numbers back: " << numbers.back() << std::endl;
    
    // Data Method
    int raw_array[] {4, 5, 6, 7, 8, 9};
    
    std::cout << std::endl;
    std::cout << "Showing raw array data: " << std::endl;
    print_raw_array(raw_array, 6);

    std::cout << "Showing numbers.data as a raw array: " << std::endl;
    print_raw_array(numbers.data(), numbers.size());

    // Iterators
    std::cout << std::endl;
    std::cout << "Iterators: " << std::endl;

    auto it = numbers.begin();

    std::cout << "std::array(with iterators): [";
    while (it != numbers.end())
    {
        std::cout << " " << *it;
        it++;
    }
    std::cout << " ]" << std::endl;

    // Reverse traversal with rbegin and rend
    auto it_reverse = numbers.rbegin();

    std::cout << "std::array(reverse traversal with iterators): [";
    while (it_reverse != numbers.rend())
    {
        std::cout << " " << *it_reverse;
        it_reverse++;
    }
    std::cout << " ]" << std::endl;

    // Capacity
    std::cout << std::endl;
    std::cout << "capacity: " << std::endl;
    std::cout << "numbers size: " << numbers.size() << std::endl;
    std::cout << "numbers max size: " << numbers.max_size() << std::endl;
    std::cout << std::boolalpha;
    std::cout << "numbers is empty: " << numbers.empty() << std::endl;

    // Operations
    std::cout << std::endl;
    std::cout << "Filling:" << std::endl;
    
    std::cout << "numbers: ";
    print_collection(numbers);
    
    numbers.fill(1000);
    
    std::cout << "numbers: ";
    print_collection(numbers);

    // Swapping
    std::cout << std::endl;
    std::cout << "Swap:" << std::endl;

    std::array<int, 10> other_numbers {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};

    std::cout << "numbers: ";
    print_collection(numbers);

    std::cout << "other numbers: ";
    print_collection(other_numbers);

    std::cout << std::endl;
    numbers.swap(other_numbers);

    std::cout << "numbers: ";
    print_collection(numbers);

    std::cout << "other numbers: ";
    print_collection(other_numbers);

    // Array Assignment
    std::cout << std::endl;
    std::cout << "Assigning arrays to each other:" << std::endl;

    std::cout << "numbers: ";
    print_collection(numbers);

    std::cout << "other numbers: ";
    print_collection(other_numbers);

    std::cout << std::endl;
    numbers = other_numbers;

    std::cout << "numbers: ";
    print_collection(numbers);

    std::cout << "other numbers: ";
    print_collection(other_numbers);

    // Arrays with Custom Objects
    std::cout << std::endl;
    std::cout << "Storing custom objects in std::array:" << std::endl;

    std::array<Item, 5> items = {};
    std::cout << "Default initialized items:" << std::endl;

    std::cout << "items: ";
    print_collection(items);

    std::cout << std::endl;
    items.fill(Item(5));

    std::cout << "items: ";
    print_collection(items);

    return 0;
}
