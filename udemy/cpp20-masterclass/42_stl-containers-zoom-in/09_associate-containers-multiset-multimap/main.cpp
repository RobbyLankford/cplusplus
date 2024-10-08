#include <iostream>
#include <set>
#include <map>


/* Sets and Maps that allow for duplicates */

class Book
{
    friend std::ostream &operator<<(std::ostream &out, const Book &operand);

    public:
        Book() = default;
        Book(int year, std::string title) : m_year(year), m_title(title) {}

        bool operator<(const Book &right_op) const
        {
            return this->m_year < right_op.m_year;
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
void print_multiset(const std::multiset<T> &m_set)
{
    auto it = m_set.begin();

    std::cout << "multiset of elements: [";
    while (it != m_set.end())
    {
        std::cout << " " << *it;
        it++;
    }
    std::cout << " ]" << std::endl;
}

template <typename T, typename K>
void print_multimap(const std::multimap<T, K> &m_map)
{
    auto it = m_map.begin();

    std::cout << "multimap of elements: [";
    while (it != m_map.end())
    {
        std::cout << " [" << it->first << ", " << it->second << "] ";
        it++;
    }
    std::cout << "]" << std::endl;
}


int main()
{
    std::multiset<int> numbers = {1, 2, 1, 6, 2, 8, 3, 9, 4, 24, 6, 2};
    std::multiset<Book> books = { Book(1734, "Cooking Food"),
                                  Book(1930, "Building Computers"),
                                  Book(1734, "Farming for Beginners") };

    std::cout << "Numbers: ";
    print_multiset(numbers);

    std::cout << "Books: ";
    print_multiset(books);

    std::cout << "\n-------\n" << std::endl;

    std::multimap<int, std::string> office_numbers = { std::make_pair(101, "John Doe"),
                                                       std::make_pair(102, "Jane Doe"),
                                                       std::make_pair(103, "Wilson Wilson") };

    std::multimap<int, Book> other_books = { std::make_pair(0, Book(1734, "Cooking Food")),
                                             std::make_pair(1, Book(1930, "Building Computers")),
                                             std::make_pair(1, Book(1995, "Farming for Beginners")) };
    
    std::cout << "Office Numbers: ";
    print_multimap(office_numbers);

    std::cout << "Other Books: ";
    print_multimap(other_books);

    return 0;
}
