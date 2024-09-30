#include <iostream>
#include <vector>
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
        Item(int var1, int var2) : m_var(var1 * var2) {}

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


int main()
{
    // Collection creation and element access
    std::cout << "Creating std::vector:" << std::endl;

    std::vector<int> numbers{1, 2, 3, 4, 5};
    std::vector<Item> items{Item(6), Item(7), Item(8), Item(9), Item(10)};

    std::cout << std::endl;
    std::cout << "numbers: ";
    print_collection(numbers);

    std::cout << "items: ";
    print_collection(items);

    // Accessing Elements
    std::cout << std::endl;
    std::cout << "Element access:" << std::endl;
    std::cout << "numbers[3]: " << numbers[3] << std::endl;
    std::cout << "numbers.at(3): " << numbers.at(3) << std::endl;

    // Undefined behavior
    //std::cout << "numbers[30]: " << numbers[30] << std::endl;
    
    // Throws exception
    //std::cout << "numbers.at(30): " << numbers.at(30) << std::endl;

    // Data method
    std::cout << "numbers[3] (with underlying data array): " << (*(numbers.data() + 3)) << std::endl;

    // Iterators
    std::cout << std::endl;
    std::cout << "Iterators:" << std::endl;

    auto it = numbers.begin();
    
    std::cout << "Vector (with iterators): [";
    while(it != numbers.end())
    {
        std::cout << " " << *it;
        ++it;
    }
    std::cout << " ]" << std::endl;

    auto it_reverse = numbers.rbegin();

    std::cout << "Vector (reverse traversal with iterators): [";
    while(it_reverse != numbers.rend())
    {
        std::cout << " " << *it_reverse;
        ++it_reverse;
    }
    std::cout << " ]" << std::endl; 

    // Capacity
    std::cout << std::endl;
    
    std::cout << "capacity:" << std::endl;
    std::cout << "numbers: ";
    print_collection(numbers);

    std::cout << "numbers size: " << numbers.size() << std::endl;
    std::cout << "numbers max_size: " << numbers.max_size() << std::endl;
    std::cout << std::boolalpha;
    std::cout << "numbers is empty: " << numbers.empty() << std::endl;
    std::cout << "numbers capacity: " << numbers.capacity() << std::endl;

    std::cout << std::endl;

    numbers.push_back(20);
    std::cout << "numbers (after push_back): ";
    print_collection(numbers);
    std::cout << "numbers capacity: " << numbers.capacity() << std::endl;

    std::cout << std::endl;

    numbers.shrink_to_fit();
    std::cout << "numbers (after shrink_to_fit): ";
    print_collection(numbers);
    std::cout << "numbers capacity : " << numbers.capacity() << std::endl;

    std::cout << std::endl;

    numbers.reserve(20);
    std::cout << "numbers (after reserve): ";
    print_collection(numbers);
    std::cout << "numbers size: " << numbers.size() << std::endl;
    std::cout << "numbers capacity: " << numbers.capacity() << std::endl;

    // Modifier Methods
    std::cout << std::endl;

    std::cout << "clear:" << std::endl;
    print_collection(numbers);
    numbers.clear();
    print_collection(numbers);

    numbers = {10, 20, 30, 40, 50, 60};

    // Insert
    std::cout << std::endl;
    std::cout << "insert:" << std::endl;
    print_collection(numbers);

    auto it_pos = numbers.begin() + 2;

    std::cout << "*it_pos: " << *it_pos << std::endl;

    numbers.insert(it_pos, 300);
    numbers.insert(it_pos, 400);

    print_collection(numbers);
    std::cout << "*it_pos : " << *it_pos << std::endl;

    // Emplace
    std::cout << std::endl;
    std::cout << "emplace: " << std::endl;
    print_collection(items);
    
    auto it_item_pos = items.begin() + 2;

    items.emplace(it_item_pos, 45, 10);

    print_collection(items);

    // Erase
    std::cout << std::endl;
    std::cout << "erase:" << std::endl;
    print_collection(items);
    
    items.erase(items.begin() + 4);
    print_collection(items);
    
    items.erase(items.begin() + 1, items.begin() + 4);
    print_collection(items);

    // Emplace Back
    std::cout << std::endl;
    std::cout << "emplace_back:" << std::endl;
    print_collection(items);

    items.emplace_back(10, 10);
    items.emplace_back(10, 11);
    items.emplace_back(10, 12);

    print_collection(items);

    // Pop Back
    std::cout << std::endl;
    std::cout << "pop_back:" << std::endl;
    
    print_collection(items);
    items.pop_back();
    print_collection(items);

    // Resize
    std::cout << std::endl;
    std::cout << "resize:" << std::endl;

    print_collection(items);
    std::cout << "size (before): " << items.size() << std::endl;
    std::cout << "capacity (before): " << items.capacity() << std::endl;

    std::cout << std::endl;
    items.resize(11);
    std::cout << std::endl;

    print_collection(items);
    std::cout << "size (after): " << items.size() << std::endl;
    std::cout << "capacity (after): " << items.capacity() << std::endl;

    // Swap
    std::cout << std::endl;
    std::cout << "swap:" << std::endl;

    std::cout << std::endl;
    std::vector<Item> other_items = {Item(22), Item(33), Item(44)};
    std::cout << std::endl;
    
    print_collection(items);
    print_collection(other_items);

    other_items.swap(items);
    std::cout << std::endl;

    print_collection(items);
    print_collection(other_items);

    return 0;
}
