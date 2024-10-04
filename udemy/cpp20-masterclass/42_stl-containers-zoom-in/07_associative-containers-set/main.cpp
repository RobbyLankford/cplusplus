#include <iostream>
#include <functional>
#include <set>


class Book
{
    friend std::ostream &operator<<(std::ostream &out, const Book &operand);

    public:
        Book(int year, std::string title) : m_year(year), m_title(title) {};

        bool operator<(const Book &right_operand) const
        {
            return this->m_year < right_operand.m_year;
        }

    private:
        int m_year;
        std::string m_title;
};

std::ostream &operator<<(std::ostream &out, const Book &operand)
{
    out << "Book [" << operand.m_year << ", " << operand.m_title << "]";

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

class IntComparator
{
    public:
        bool operator()(int left, int right) const
        {
            return (left < right);
        }
};

bool compare_ints(int left, int right)
{
    return (left < right);
}


int main()
{
    // Building Sets
    std::cout << "Building sets:" << std::endl;

    std::set<int> numbers {11, 16, 2, 912, 15, 6, 15, 2};
    print_collection(numbers);

    std::set<Book> books {Book(2000, "Cooking Food"), Book(1930, "Building Computers"), 
                          Book(1995, "Farming for Beginners")};
    print_collection(books);

    // Iterators
    std::cout << std::endl;
    std::cout << "Iterators:" << std::endl;

    std::cout << "Set of numbers: [";
    
    auto it = numbers.begin();
    while (it != numbers.end())
    {
        std::cout << " " << *it;
        it++;
    }
    std::cout << " ]" << std::endl;

    std::cout << "Set of numbers (backwards): [";

    auto it_back = numbers.rbegin();
    while (it_back != numbers.rend())
    {
        std::cout << " " << *it_back;
        it_back++;
    }
    std::cout << " ]" << std::endl;

    std::cout << std::endl;
    std::cout << "Set of books (reverse):";

    auto it_back_books = books.rbegin();
    while (it_back_books != books.rend())
    {
        std::cout << " " << *it_back_books;
        it_back_books++;
    }
    std::cout << " ]" << std::endl;

    // Capacity
    std::cout << std::endl;
    std::cout << "Capacity:" << std::endl;
    std::cout << "numbers max size: " << numbers.max_size() << std::endl;
    std::cout << "numbers is empty: " << numbers.empty() << std::endl;
    std::cout << "numbers size: " << numbers.size() << std::endl;

    /* Modifiers */
    std::cout << std::endl;

    // Clear
    std::cout << "clear:" << std::endl;
    print_collection(numbers);
    numbers.clear();
    print_collection(numbers);

    std::cout << std::endl;
    std::cout << std::boolalpha;
    std::cout << "numbers is empty: " << numbers.empty() << std::endl;

    // Insert
    std::cout << std::endl;
    std::cout << "Insert:" << std::endl;

    print_collection(numbers);
    numbers = {11, 12, 13, 14, 15};
    print_collection(numbers);

    numbers.insert(14); // Will not insert because sets do not allow duplicates
    print_collection(numbers);

    auto result = numbers.insert(20);

    std::cout << "first: " << *result.first << std::endl;
    std::cout << "second: " << result.second << std::endl;

    if (result.second)
        std::cout << "Insertion of " << *result.first << " successful." << std::endl;
    else
        std::cout << "Could not insert " << *result.first << " in the set. It is a duplicate!" << std::endl;
    
    print_collection(numbers);

    // Emplace
    std::cout << std::endl;
    std::cout << "emplace:" << std::endl;

    print_collection(numbers);

    auto result_emplace = numbers.emplace(13); // Fails

    if (result_emplace.second)
        std::cout << "Emplace of " << *result_emplace.first << " successful." << std::endl;
    else
        std::cout << "Emplace of " << *result_emplace.first << " failed." << std::endl;
    
    print_collection(numbers);
    
    // Erase
    std::cout << std::endl;
    std::cout << "erase:" << std::endl;

    print_collection(numbers);

    auto it_erase = std::find(numbers.begin(), numbers.end(), 13);

    if (it_erase != numbers.end())
        std::cout << "Found 13" << std::endl;
    else
        std::cout << "Could not find 13" << std::endl;

    if (it_erase != numbers.end())
        numbers.erase(it_erase);
    
    print_collection(numbers);

    // Swap
    std::cout << std::endl;
    std::cout << "swap:" << std::endl;

    std::set<int> other_numbers {200, 400, 600};

    std::cout << "numbers: ";
    print_collection(numbers);

    std::cout << "other numbers: ";
    print_collection(other_numbers);

    numbers.swap(other_numbers);

    std::cout << "numbers: ";
    print_collection(numbers);

    std::cout << "other numbers: ";
    print_collection(other_numbers);

    // Change comporator
    std::cout << std::endl;
    std::cout << "Change comparator:" << std::endl;

    std::set<int, std::function<bool(int, int)>> numbers1([](int left, int right) {
        return left > right;
    });
    
    numbers1.insert({11, 16, 2, 9, 12, 15, 6, 15, 2});

    std::cout << "numbers1: [";
    for (const auto &elt : numbers1)
        std::cout << " " << elt;
    std::cout << " ]" << std::endl;

    return 0;
}
