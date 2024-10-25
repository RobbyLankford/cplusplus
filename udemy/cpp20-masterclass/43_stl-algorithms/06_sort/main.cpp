#include <iostream>
#include <algorithm>
#include <vector>
#include <list>


class Book
{
    friend std::ostream &operator<<(std::ostream &out, const Book &op);

    public:
        int m_year;
        std::string m_title;

        Book(int year, std::string title) : m_year(year), m_title(title) {}

        bool operator<(const Book &right_op) const
        {
            return (this->m_year < right_op.m_year);
        }
        bool operator>(const Book &right_op) const
        {
            return (this->m_year > right_op.m_year);
        }
        bool operator==(const Book &right_op) const
        {
            return (this->m_year == right_op.m_year);
        }
};

std::ostream &operator<<(std::ostream &out, const Book &op)
{
    out << "Book [" << op.m_year << ", " << op.m_title << "]";

    return out;
}

template<typename T>
void print_collection(const T &collection)
{
    std::cout << "Collection [";
    for (const auto &elt : collection)
        std::cout << " " << elt;
    std::cout << " ]" << std::endl;
}


int main()
{
    // Directly without predicate
    std::vector<int> collection = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};

    std::cout << "Collection (unsorted): ";
    print_collection(collection);

    std::sort(std::begin(collection), std::end(collection));

    std::cout << "Collection (sorted): ";
    print_collection(collection);

    std::cout << "\n-------\n" << std::endl;

    // With custom compare function
    collection = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3};

    std::cout << "Collection (unsorted): ";
    print_collection(collection);

    std::sort(std::begin(collection), std::end(collection), [](int x, int y) { return x > y; });

    std::cout << "Collection (sorted): ";
    print_collection(collection);

    std::cout << "\n-------\n" << std::endl;

    // Sorting collections of custom items
    std::vector<Book> books {Book(1734, "Cooking Food"), Book(2000, "Building Computers"), Book(1995, "Farming for Beginners")};

    std::cout << "Books (unsorted): ";
    print_collection(books);

    auto cmp = [](const Book &book1, const Book &book2)
    {
        return (book1.m_year < book2.m_year);
    };

    std::sort(std::begin(books), std::end(books), cmp);

    std::cout << "Books (sorted): ";
    print_collection(books);

    return 0;
}