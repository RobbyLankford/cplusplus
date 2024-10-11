#include <iostream>
#include <stack>
#include <vector>
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
void print_stack(std::stack<T, Container> stack)
{
    std::cout << "Stack of elements: [";
    while (!stack.empty())
    {
        T item = stack.top();
        
        std::cout << " " << item;

        stack.pop();
    }
    std::cout << " ]" << std::endl;
}

template <typename T, typename Container = std::deque<T>>
void clear_stack(std::stack<T, Container> &stack)
{
    std::cout << "Clearing stack of size: " << stack.size() << std::endl;

    while (!stack.empty())
        stack.pop();
}


int main()
{
    // Creating a stack and storing data
    std::stack<int> numbers1;

    std::cout << "numbers1: ";
    print_stack(numbers1);

    numbers1.push(10);
    numbers1.push(20);
    numbers1.push(30);

    std::cout << "numbers1: ";
    print_stack(numbers1);

    numbers1.push(40);
    numbers1.push(50);

    std::cout << "numbers1: ";
    print_stack(numbers1);

    // Accessing Elements
    std::cout << std::endl;

    std::cout << "Top: " << numbers1.top() << std::endl;
    
    print_stack(numbers1);
    numbers1.pop();
    print_stack(numbers1);

    std::cout << "Top (new): " << numbers1.top() << std::endl;

    // Modify Top Element
    std::cout << std::endl;

    std::cout << "numbers1: ";
    print_stack(numbers1);

    numbers1.top() = 55;

    std::cout << "numbers1: ";
    print_stack(numbers1);

    // Clearing a Stack
    std::cout << std::endl;

    std::cout << "Stack initial size: " << numbers1.size() << std::endl;
    std::cout << "numbers1 (before): ";
    print_stack(numbers1);

    clear_stack(numbers1);

    std::cout  << "Stack final size: " << numbers1.size() << std::endl;
    std::cout << "numbers1 (after): ";
    print_stack(numbers1);

    // Stack of user-defined types
    std::cout << std::endl;

    std::stack<Book> books;

    books.push(Book(1921, "The Art of War"));
    books.push(Book(2000, "Social Media Marketing"));
    books.push(Book(2020, "How the Pandemic Changed the World"));

    std::cout << "books: ";
    print_stack(books);
    std::cout << "books size: " << books.size() << std::endl;

    // Custom underlying sequence container
    std::cout << std::endl;

    std::stack<int, std::vector<int>> numbers2;
    std::stack<int, std::list<int>> numbers3;
    std::stack<int, std::deque<int>> numbers4;

    numbers2.push(5);
    numbers2.push(6);

    numbers3.push(7);
    numbers3.push(8);

    numbers4.push(9);
    numbers4.push(10);

    std::cout << "numbers4 (deque): ";
    print_stack(numbers4);

    std::cout << "numbers3 (list): ";
    print_stack(numbers3);

    std::cout << "numbers2 (vector): ";
    print_stack(numbers2);

    return 0;
}
