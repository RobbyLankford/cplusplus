#include <iostream>
#include <queue>


class Book
{
    friend std::ostream &operator<<(std::ostream &out, const Book &op);

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

std::ostream &operator<<(std::ostream &out, const Book &op)
{
    out << "Book [" << op.m_year << ", " << op.m_title << "]";

    return out;
}

template<typename T, typename Container = std::vector<T>, typename Compare = std::less<typename Container::value_type>>
void print_priority_queue(std::priority_queue<T, Container, Compare> p_queue)
{
    std::cout << "Priority queue of elements: [";
    while (!p_queue.empty())
    {
        std::cout << " " << p_queue.top();
        p_queue.pop();
    }
    std::cout << " ]" << std::endl;
}

template<typename T, typename Container = std::vector<T>, typename Compare = std::less<typename Container::value_type>>
void clear_queue(std::priority_queue<T, Container, Compare> &p_queue)
{
    std::cout << "Clearing priority queue of size: " << p_queue.size() << std::endl;
    while (!p_queue.empty())
        p_queue.pop();
}


int main()
{
    // Creating, pushing, and accessing
    std::cout << "Creating, Pushing, and Accessing:" << std::endl;

    std::priority_queue<int> numbers1;

    std::cout << "numbers1: ";
    print_priority_queue(numbers1);

    numbers1.push(10);
    numbers1.push(8);
    numbers1.push(12); // Top priority (because we have defined that as the largest number)

    std::cout << "numbers1: ";
    print_priority_queue(numbers1);

    std::cout << "numbers1.top(): " << numbers1.top() << std::endl;

    // Cannot modify through .top() because it returns a CONST reference

    // Pop
    std::cout << std::endl;
    std::cout << "Pop:" << std::endl;

    std::cout << "numbers1: ";
    print_priority_queue(numbers1);

    numbers1.pop();

    std::cout << "numbers1: ";
    print_priority_queue(numbers1);

    // Clearing
    std::cout << std::endl;
    std::cout << "Clearing a priority queue:" << std::endl;

    std::cout << "Priority queue initial size: " << numbers1.size() << std::endl;
    std::cout << "numbers1 (before): ";
    print_priority_queue(numbers1);

    std::cout << std::endl;
    clear_queue(numbers1);
    std::cout << std::endl;

    std::cout << "Priority queue final size: " << numbers1.size() << std::endl;
    std::cout << "numbers1 (after): ";
    print_priority_queue(numbers1);

    // User-Defined Types
    std::cout << std::endl;
    std::cout << "Priority queue with user-defined types:" << std::endl;

    std::priority_queue<Book> books;

    books.push(Book(1921, "Art of War"));
    books.push(Book(2020, "Building Social Media Marketing Strategies"));
    books.push(Book(1990, "Converting Lines of Modern Economy"));
    books.push(Book(1998, "Driving Current Triggered Transistors"));

    std::cout << "books: ";
    print_priority_queue(books);

    std::cout << "books size: " << books.size() << std::endl;
    std::cout << "top book: " << books.top() << std::endl;

    // Specify a custom operators and/or underyling container
    std::cout << std::endl;
    std::cout << "Changing the comparator and underlying container:" << std::endl;

    std::priority_queue<int, std::vector<int>, std::less<int>> numbers2;
    std::priority_queue<int, std::vector<int>, std::greater<int>> numbers3;
    std::priority_queue<int, std::deque<int>, std::greater<int>> numbers4;

    auto cmp = [](int left, int right) { return left < right; };
    std::priority_queue<int, std::vector<int>, decltype(cmp)> numbers5(cmp);

    numbers5.push(10);
    numbers5.push(8);
    numbers5.push(12);

    std::cout << "numbers5: ";
    print_priority_queue(numbers5);

    return 0;
}
