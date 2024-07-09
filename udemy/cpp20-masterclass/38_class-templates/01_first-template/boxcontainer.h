#ifndef BOX_CONTAINER_H
#define BOX_CONTAINER_H

#include <iostream>

/*
    Definitions should show up in the header file
    - All member function definitions moved into the header file
    - The compiler needs to see them to generate proper template instance
*/

template <typename T>
class BoxContainer
{
    static const size_t DEFAULT_CAPACITY = 5;
    static const size_t EXPAND_STEPS = 5;

    public:
        BoxContainer(size_t capacity = DEFAULT_CAPACITY);
        BoxContainer(const BoxContainer &source);

        ~BoxContainer();

        // Getters
        size_t size() const
        {
            return m_size;
        }

        size_t capacity() const
        {
            return m_capacity;
        }
        
        // template, depends on the type of the item stored in the box
        T get_item(size_t index) const
        {
            return m_items[index];
        }

        // Add items to box
        void add(const T &item);
        bool remove_item(const T &item);
        size_t remove_all(const T &item);

        // In class operators
        void operator+=(const BoxContainer<T> &operand);
        void operator=(const BoxContainer<T> &source);
    
    private:
        void expand(size_t new_capacity);

        T *m_items;
        
        size_t m_capacity {10};
        size_t m_size;
};

// Free Operators
template <typename T>
BoxContainer<T> operator+(const BoxContainer<T> &left, const BoxContainer<T> &right);

template <typename T>
inline std::ostream &operator<<(std::ostream &out, const BoxContainer<T> &operand)
{
    out << "BoxContainer: [ size: " << operand.size() << ", capacity: " << operand.capacity() << ", items: ";
    for (size_t i {}; i < operand.size(); i++)
        out << operand.get_item(i) << " ";
    
    out << "]";

    return out;
}

// Definitions moved into here
template <typename T>
BoxContainer<T>::BoxContainer(size_t capacity)
{
    m_items = new T[capacity];
    m_capacity = capacity;
    m_size = 0;
}

template <typename T>
BoxContainer<T>::BoxContainer(const BoxContainer<T> &source)
{
    // Set up the new box
    m_items = new T[source.m_capacity];
    m_capacity = source.m_capacity;
    m_size = source.m_size;

    // Copy the items over from source
    for (size_t i {}; i < source.size(); i++)
        m_items[i] = source.m_items[i];
}

template <typename T>
BoxContainer<T>::~BoxContainer()
{
    delete[] m_items;
}

template <typename T>
void BoxContainer<T>::expand(size_t new_capacity)
{
    std::cout << "Expanding to " << new_capacity << std::endl;
    T *new_items_container;

    if (new_capacity <= m_capacity)
        return;
    
    // Allocate new (larger) memory
    new_items_container = new T[new_capacity];

    // Copy over the items
    for (size_t i {}; i < m_size; i++)
        new_items_container[i] = m_items[i];
    
    // Release the old memory
    delete[] m_items;

    // Make the current box wrap around the new array
    m_items = new_items_container;

    // Use the new capacity
    m_capacity = new_capacity;
}

template <typename T>
void BoxContainer<T>::add(const T &item)
{
    if (m_size == m_capacity)
        expand(m_size + EXPAND_STEPS);
    
    m_items[m_size] = item;
    ++m_size;
}

template <typename T>
bool BoxContainer<T>::remove_item(const T &item)
{
    // Find the target item
    size_t index {m_capacity + 999};

    for (size_t i {}; i < m_size; i++)
    {
        if (m_items[i] == item)
        {
            index = i;
            break;
        }
    }

    if (index > m_size)
        return false;
    
    m_items[index] = m_items[m_size - 1];
    m_size--;

    return true;
}

// Removing all is just removing one item several times until none are left
template <typename T>
size_t BoxContainer<T>::remove_all(const T &item)
{
    size_t remove_count {};

    bool removed = remove_item(item);
    if (removed)
        ++remove_count;
    
    while (removed == true)
    {
        removed = remove_item(item);
        if (removed)
            ++remove_count;
    }

    return remove_count;
}

template <typename T>
void BoxContainer<T>::operator+=(const BoxContainer<T> &operand)
{
    // Make sure the current box can accommodate for the added new elements
    if ((m_size + operand.size()) > m_capacity)
        expand(m_size + operand.size());
    
    // Copy over the elements
    for (size_t i {}; i < operand.m_size; i++)
        m_items[m_size + i] = operand.m_items[i];
    
    m_size += operand.m_size;
}

template <typename T>
BoxContainer<T> operator+(const BoxContainer<T> &left, const BoxContainer<T> &right)
{
    BoxContainer<T> result(left.size() + right.size());

    result += left;
    result += right;

    return result;
}

template <typename T>
void BoxContainer<T>::operator=(const BoxContainer<T> &source)
{
    T *new_items;

    // Check for self-assignment
    if (this == &source)
        return;
    
    // If capacities are different, set up a new internal array that matches source
    // We want object we are assigning to match source as much as possible
    if (m_capacity != source.m_capacity)
    {
        new_items = new T[source.m_capacity];
        delete[] m_items;
        m_items = new_items;
        m_capacity = source.m_capacity;
    }

    // Copy the items over from source
    for (size_t i {}; i < source.size(); i++)
        m_items[i] = source.m_items[i];
    
    m_size = source.m_size;
}

#endif