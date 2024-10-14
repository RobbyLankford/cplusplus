#include <iostream>
#include <queue>
#include <list>
#include <deque>


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

std::ostream &operator<<(std::ostream &out, const Book &op)
{
    out << "Book [" << op.m_year << ", " << op.m_title << "]";

    return out;
}

template<typename T, typename Container = std::deque<T>>
void print_queue(std::queue<T, Container> queue)
{
    std::cout << "Queue of items: [";
    while (!queue.empty())
    {
        T item = queue.front();
        
        std::cout << " " << item;
        
        queue.pop();
    }
    std::cout << " ]" << std::endl;
}

template<typename T, typename Container = std::deque<T>>
void clear_queue(std::queue<T, Container> &queue)
{
    std::cout << "Clearing queue of size: " << queue.size() << std::endl;
    while (!queue.empty())
        queue.pop();
}


int main()
{
    // Creating, Pushing, and Accessing
    std::cout << "Creating, pushing, and accessing:" << std::endl;
    std::cout << std::endl;

    std::queue<int> numbers1;

    std::cout << "numbers1: ";
    print_queue(numbers1);

    numbers1.push(10);
    numbers1.push(20);
    numbers1.push(30);

    std::cout << "numbers1: ";
    print_queue(numbers1);

    numbers1.push(40);
    numbers1.push(50);

    std::cout << "numbers1: ";
    print_queue(numbers1);

    std::cout << std::endl;
    std::cout << "numbers1.front(): " << numbers1.front() << std::endl;
    std::cout << "numbers1.back(): " << numbers1.back() << std::endl;

    // Modify Through Top
    std::cout << std::endl;
    std::cout << "Modify Top Element:" << std::endl;

    std::cout << "numbers1 (before modification): ";
    print_queue(numbers1);

    numbers1.front() = 500;
    numbers1.back() = 600;

    std::cout << "numbers1 (after modification): ";
    print_queue(numbers1);

    // Pop
    std::cout << std::endl;
    std::cout << "Pop:" << std::endl;

    std::cout << "numbers1: ";
    print_queue(numbers1);

    numbers1.pop();

    std::cout << "numbers1: ";
    print_queue(numbers1);

    // Clearing a Queue
    std::cout << std::endl;
    std::cout << "Clearing a queue:" << std::endl;

    std::cout << "Queue initial size: " << numbers1.size() << std::endl;
    std::cout << "numbers1 (before): ";
    print_queue(numbers1);

    clear_queue(numbers1);

    std::cout << "Queue final size: " << numbers1.size() << std::endl;
    std::cout << "numbers1 (after): ";
    print_queue(numbers1);

    // Queue of User Defined Types
    std::cout << std::endl;
    std::cout << "Queue of user defined type:" << std::endl;

    std::queue<Book> books;

    books.push(Book(1921, "The Art of War"));
    books.push(Book(2000, "Social Media Marketing"));
    books.push(Book(2020, "How the Pandemic Changed the World"));

    std::cout << "books: ";
    print_queue(books);

    std::cout << "books size: " << books.size() << std::endl;
    std::cout << "front book: " << books.front() << std::endl;
    std::cout << "back book: " << books.back() << std::endl;

    // Specify Underlying Container
    std::cout << std::endl;
    std::cout << "Custom underlying sequence container:" << std::endl;

    std::queue<int, std::list<int>> numbers3;
    std::queue<int, std::deque<int>> numbers4;

    numbers3.push(3);
    numbers3.push(4);

    numbers4.push(5);
    numbers4.push(6);

    std::cout << "numbers3: ";
    print_queue(numbers3);

    std::cout << "numbers4: ";
    print_queue(numbers4);

    return 0;
}
