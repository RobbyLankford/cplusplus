#include <iostream>
#include <deque>


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

        Item(const Item &source) : m_var {source.m_var}
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

std::ostream &operator << (std::ostream &out, const Item &item)
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
        it++;
    }
    std::cout << " ]" << std::endl;
}


int main()
{
    // Creating deque
    std::deque<int> numbers {1, 2, 3, 4, 5, 6};
    std::deque<Item> items {Item(22), Item(33), Item(44), Item(55)};

    std::cout << std::endl;
    
    std::cout << "numbers: ";
    print_collection(numbers);
    
    std::cout << std::endl;

    std::cout << "items: ";
    print_collection(items);

    std::cout << "\n-------\n" << std::endl;

    /* Element Access */
    std::cout << "numbers[3]: " << numbers[3] << std::endl; // No bound check
    std::cout << "numbers.at(3): " << numbers.at(3) << std::endl; // Bound check

    std::cout << std::endl;

    std::cout << "numbers.front(): " << numbers.front() << std::endl;
    std::cout << "numbers.back(): " << numbers.back() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    /* Iterators */
    auto it = numbers.begin();

    std::cout << "deque (with iterators): [";
    while (it != numbers.end())
    {
        std::cout << " " << *it;
        it++;
    }
    std::cout << " ]" << std::endl;

    std::cout << "\n-------\n" << std::endl;

    /* Capacity */
    std::cout << "Numbers size: " << numbers.size() << std::endl;
    std::cout << "Numbers max_size: " << numbers.max_size() << std::endl;

    std::cout << std::boolalpha;
    std::cout << "Numbers is empty: " << numbers.empty() << std::endl;

    numbers.push_back(20);
    
    std::cout << "after pushing 20 to back:" << std::endl;
    print_collection(numbers);

    std::cout << "numbers size: " << numbers.size() << std::endl;

    std::cout << "\n-------\n" << std::endl;

    /* Modifiers */
    print_collection(numbers);

    std::cout << "after clearning:" << std::endl;

    numbers.clear();

    print_collection(numbers);

    std::cout << "after reassinging: " << std::endl;

    numbers = {10, 20, 30, 40, 50, 60};

    print_collection(numbers);

    std::cout << "\n-------\n" << std::endl;

    /* Insert */
    std::cout << "insert in front: " << std::endl;

    auto it_pos = numbers.begin() + 2;

    print_collection(numbers);

    numbers.insert(it_pos, 300); // insert at position 3 because it_pos = begin + 2
    print_collection(numbers);

    numbers.insert(it_pos, 400); // insert at position 4 because previous was position 3
    print_collection(numbers);

    std::cout << "\n-------\n" << std::endl;

    /* Erase */
    print_collection(numbers);

    std::cout << "Erase element at numbers.begin() + 4:" << std::endl;

    numbers.erase(numbers.begin() + 4);

    print_collection(numbers);

    std::cout << "Erase elements between numbers.begin() + 1 and numbers.begin() + 4:" << std::endl;

    numbers.erase(numbers.begin() + 1, numbers.begin() + 4);

    print_collection(numbers);

    std::cout << "\n-------\n" << std::endl;

    /* emplace_back */
    print_collection(numbers);

    std::cout << "Place numbers 10, 11, and 12 at the back:" << std::endl;

    numbers.emplace_back(10);
    numbers.emplace_back(11);
    numbers.emplace_back(12);

    print_collection(numbers);

    std::cout << "\n-------\n" << std::endl;

    /* Resize */
    std::cout << "resize (before):" << std::endl;
    
    print_collection(numbers);

    std::cout << "numbers size: " << numbers.size() << std::endl;

    std::cout << "resize (up to 30):" << std::endl;

    numbers.resize(30);

    print_collection(numbers);

    std::cout << "numbers size: " << numbers.size() << std::endl;
    
    std::cout << "resize (down to 10):" << std::endl;

    numbers.resize(10);

    print_collection(numbers);

    std::cout << "\n-------\n" << std::endl;

    std::deque<Item> other_items = {Item(100), Item(200), Item(300)};

    std::cout << std::endl;
    std::cout << "before swap:" << std::endl;

    print_collection(items);
    print_collection(other_items);
    
    std::cout << std::endl;
    std::cout << "after swap:" << std::endl;

    other_items.swap(items);

    print_collection(items);
    print_collection(other_items);

    return 0;
}