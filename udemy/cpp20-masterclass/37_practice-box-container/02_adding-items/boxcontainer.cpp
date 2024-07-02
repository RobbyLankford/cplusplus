#include "boxcontainer.h"

BoxContainer::BoxContainer(size_t capacity)
{
    m_items = new value_type[capacity];
    m_capacity = capacity;
    m_size = 0;
}

BoxContainer::BoxContainer(const BoxContainer &source)
{
    // Set up the new box
    m_items = new value_type[source.m_capacity];
    m_capacity = source.m_capacity;
    m_size = source.m_size;

    // Copy the items over from source
    for (size_t i {}; i < source.size(); i++)
        m_items[i] = source.m_items[i];
}

BoxContainer::~BoxContainer()
{
    delete[] m_items;
}

void BoxContainer::stream_insert(std::ostream &out) const
{
    out << "BoxContainer: [ size: " << m_size << ", capacity: " << m_capacity << ", items: ";

    for (size_t i {}; i < m_size; i++)
        out << m_items[i] << " ";
    
    std::cout << "]";
}

void BoxContainer::expand(size_t new_capacity)
{
    std::cout << "Expanding to " << new_capacity << std::endl;

    value_type *new_items_container;

    // Needed capacity is already there
    if (new_capacity <= m_capacity)
        return;
    
    // Allocate new (larger) memory
    new_items_container = new value_type[new_capacity];

    // Copy the items from old array to new
    for (size_t i {}; i < m_size; i++)
        new_items_container[i] = m_items[i];
    
    // Release old array
    delete[] m_items;

    // Make the current box wrap around the new array
    m_items = new_items_container;

    // Use the new capacity
    m_capacity = new_capacity;
}

void BoxContainer::add(const value_type &item)
{
    if (m_size == m_capacity)
    {
        // Expand in increments of 5 to optimize on the calls to expand
        expand(m_size + EXPAND_STEPS);
    }

    m_items[m_size] = item;
    ++m_size;
}