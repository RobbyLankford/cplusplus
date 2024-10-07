#include <iostream>
#include <functional>
#include <map>


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
};

class Book
{
    friend std::ostream &operator<<(std::ostream &out, const Book &operand);

    public:
        Book() = default;
        Book(int year, std::string title) : m_year(year), m_title(title) {}

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

template <typename T, typename K>
void print_map(const std::map<T, K> &map)
{
    auto it = map.begin();

    std::cout << "Map of elements: [";
    while (it != map.end())
    {
        std::cout << " [" << it->first << ", " << it->second << "]";
        it++;
    }
    std::cout << " ]" << std::endl;
}


int main()
{
    // Building Maps
    std::cout << std::endl;
    std::cout << "Creating Maps:" << std::endl;

    std::map<int, int> numbers { {1, 11}, {0, 12}, {4, 13}, {2, 14}, {3, 15}};

    std::cout << "numbers: ";
    print_map(numbers);

    std::map<int, Book> books { {2, Book(1734, "Cooking Food")}, 
                                {0, Book(1930, "Building Computers")}, 
                                {1, Book(1995, "Farming for Beginners")} };

    std::cout << "books: ";
    print_map(books);

    // Element access
    std::cout << std::endl;
    std::cout << "Element Access:" << std::endl;

    for (const auto &[key, value] : books)
        std::cout << "Book [ " << key << " ]: " << value << std::endl;

    std::cout << std::endl;

    for (const auto &elt : books)
        std::cout << "Book [ " << elt.first << " ]: " << elt.second << std::endl;

    std::cout << std::endl;

    for (const std::pair<int, Book> &elt : books)
        std::cout << "Book [ " << elt.first << " ]: " << elt.second << std::endl;

    // Keys can be anything
    std::cout << std::endl;

    std::map<std::string, std::string> address_book;

    address_book["Sherlock Holmes"] = "221B Baker Street";
    address_book["P Sherman"] = "42 Wallaby Way";
    address_book["Big Bird"] = "123 Sesame Street";

    for (const auto &[key, value] : address_book)
        std::cout << key << " lives at " << value << std::endl;

    // Iterators
    std::cout << std::endl;
    std::cout << "Iterators:" << std::endl;

    auto it_access = numbers.begin();

    std::cout << "numbers (forward iterators): [";
    while (it_access != numbers.end())
    {
        std::cout << " " << numbers[it_access->first];
        it_access++;
    }
    std::cout << " ]" << std::endl;

    std::cout << std::endl;

    print_map(numbers);

    auto it_modify = numbers.begin();
    while (it_modify != numbers.end())
    {
        numbers[it_modify->first] = 222;
        it_modify++;
    }
    
    print_map(numbers);

    std::cout << std::endl;
    
    std::cout << "Books (reverse iterators):" << std::endl;

    auto it_back_books = books.rbegin();
    while (it_back_books != books.rend())
    {
        std::cout << it_back_books->first << " - " << books[it_back_books->first] << std::endl;
        it_back_books++;
    }

    // Capacity
    std::cout << std::endl;
    std::cout << std::boolalpha;

    std::cout << "numbers: ";
    print_map(numbers);

    std::cout << "map (max size): " << numbers.max_size() << std::endl;
    std::cout << "map (is empty): " << numbers.empty() << std::endl;
    std::cout << "map (size): " << numbers.size() << std::endl;

    // Modifiers
    std::cout << std::endl;

    std::cout << "clear:" << std::endl;

    std::cout << "numbers: ";
    print_map(numbers);

    numbers.clear();

    std::cout << "numbers: ";
    print_map(numbers);

    std::cout << "numbers is empty: " << numbers.empty() << std::endl;

    std::cout << std::endl;
    std::cout << "insert:" << std::endl;

    numbers = { {0, 11}, {1, 12}, {2, 13}, {3, 14}, {4, 15} };
    print_map(numbers);

    auto result = numbers.insert({6, 17});

    std::cout << std::endl;
    std::cout << "result.second: " << result.second << std::endl;

    if (result.second)
        std::cout << "Insertion successful" << std::endl;
    else
        std::cout << "Could not insert in the set. It is a duplicate!" << std::endl;

    print_map(numbers);

    // Emplace
    std::cout << std::endl;
    std::cout << "Emplace:" << std::endl;

    print_map(numbers);

    auto result_emplace = numbers.emplace(std::make_pair(7, 18));

    if (result_emplace.second)
        std::cout << "Emplace successful" << std::endl;
    else
        std::cout << "Emplace failed" << std::endl;
    
    print_map(numbers);

    // Erase
    std::cout << std::endl;
    std::cout << "erase:" << std::endl;

    print_map(numbers);

    auto it_erase = numbers.find(3);

    if (it_erase != numbers.end())
        std::cout << "Found element with key " << it_erase->first << ": " << it_erase->second << std::endl;
    else
        std::cout << "Could not find element";
    
    if (it_erase != numbers.end())
        numbers.erase(it_erase);
    
    print_map(numbers);

    // Changing comparators
    std::cout << std::endl;
    std::cout << "Changing comparators:" << std::endl;

    std::map<int, int, std::function<bool(int, int)>> numbers2([](int left, int right) {
        return left < right;
    });

    numbers2.insert({ {1,11}, {0,12}, {4,13}, {2,14}, {3,15} });

    std::cout << "numbers2: [";
    for (const auto &[key, value] : numbers2)
        std::cout << " (" << key << ", " << value << ")";
    std::cout << " ]" << std::endl;

    return 0;
}
