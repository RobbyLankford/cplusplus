#ifndef BOX_CONTAINER_H
#define BOX_CONTAINER_H

#include <iostream>
#include <concepts>

template <typename T>
requires std::is_default_constructible_v<T>
class BoxContainer
{
    static const size_t DEFAULT_CAPACITY = 5;
    static const size_t EXPAND_STEPS = 5;

    public:
        BoxContainer(size_t capacity = DEFAULT_CAPACITY);
        BoxContainer(const BoxContainer &source) requires std::copyable<T>;

        ~BoxContainer();

        friend std::ostream &operator<<(std::ostream &out, const BoxContainer<T> &operand)
        {
            out << "BoxContainer: [ size: " << operand.m_size << ", capacity: " << operand.m_capacity << ", items: ";
            for (size_t i {0}; i < operand.m_size; i++)
                out << operand.m_items[i] << " ";
            out << "]";

            return out;
        }

        // Getters
        size_t size() const { return m_size; };
        size_t capacity() const { return m_capacity; };

        T get_item(size_t index) const
        {
            return m_items[index];
        }

        // Add Items
        void add(const T &item);
        bool remove_item(const T &item);
        size_t remove_all(const T &item);

        // In Class Operators
        void operator+=(const BoxContainer<T> &operand);
        void operator=(const BoxContainer<T> &source);

        // Can just return raw pointers and not need to sepcify Iterator class
        T *begin() { return m_items; }
        T *end() { return m_items + m_size; }

        // Const Overloads
        const T *begin() const { return m_items; }
        const T *end() const { return m_items + m_size; }

        const T *cbegin() { return m_items; }
        const T *cend() { return m_items + m_size; }

        // Iterators
        /*         
        class Iterator
        {
            public:
                using iterator_category = std::random_access_iterator_tag;
                using difference_type   = std::ptrdiff_t;
				using value_type        = T;
				using pointer_type      = T*;
				using reference_type    = T&;
            
            Iterator() = default;
            Iterator(pointer_type ptr) : m_ptr(ptr) {}

            reference_type operator*() const
            {
                return *m_ptr;
            }

            pointer_type operator->()
            {
                return m_ptr;
            }

            Iterator &operator++()
            {
                m_ptr++;
                
                return *this;
            }

            Iterator operator++(int)
            {
                Iterator tmp = *this;
                ++(*this);

                return tmp;
            }

            // Non-members, but can still access private members of Iterator
            friend bool operator==(const Iterator &a, const Iterator &b)
            {
                return a.m_ptr == b.m_ptr;
            }
            friend bool operator!=(const Iterator &a, const Iterator &b)
            {
                return !(a == b);
            }
            
            Iterator &operator--()
            {
                m_ptr--;

                return *this;
            }

            Iterator operator--(int)
            {
                Iterator tmp = *this;
                --(*this);

                return tmp;
            }

            // Random Access
            Iterator &operator+=(const difference_type offset)
            {
                m_ptr += offset;

                return *this;
            }

            Iterator operator+(const difference_type offset) const
            {
                Iterator tmp = *this;

                return tmp += offset;
            }

            Iterator &operator-=(const difference_type offset)
            {
                return *this += offset;
            }

            Iterator operator-(const difference_type offset) const
            {
                Iterator tmp = *this;

                return tmp -= offset;
            }

            difference_type operator-(const Iterator &right) const
            {
                return m_ptr - right.m_ptr;
            }

            reference_type operator[](const difference_type offset) const
            {
                return *(*this + offset);
            }

            bool operator<(const Iterator &right) const
            {
                return m_ptr < right.m_ptr;
            }

            bool operator>(const Iterator &right) const
            {
                return right < *this;
            }

            bool operator<=(const Iterator &right) const
            {
                return !(right < *this);
            }

            bool operator>=(const Iterator &right) const
            {
                return !(*this < right);
            }

            friend Iterator operator+(const difference_type offset, const Iterator &it)
            {
                Iterator tmp = it;

                return tmp += offset;
            }

            private:
                pointer_type m_ptr;
        }; 
        */

        // Constant Iterator
        /*
        class ConstIterator
        {
            public:
                using iterator_category = std::random_access_iterator_tag;
                using difference_type   = std::ptrdiff_t;
                using value_type        = T;
                using pointer_type      = const T*;
                using reference_type    = const T&;

                ConstIterator() = default;
                ConstIterator(pointer_type ptr) : m_ptr(ptr) {}

                reference_type operator*() const
                {
                    return *m_ptr;
                }

                pointer_type operator->()
                {
                    return m_ptr;
                }

                ConstIterator &operator++()
                {
                    m_ptr++;

                    return *this;
                }

                ConstIterator operator++(int)
                {
                    ConstIterator tmp = *this;
                    ++(*this);

                    return tmp;
                }

                // Non-member Operators
                friend bool operator==(const ConstIterator &a, const ConstIterator &b)
                {
                    return a.m_ptr == b.m_ptr;
                };

                friend bool operator!=(const ConstIterator &a, const ConstIterator &b)
                {
                    return !(a == b);
                };

                // Bidirectional
                ConstIterator &operator--()
                {
                    m_ptr--;

                    return *this;
                }

                ConstIterator operator--(int)
                {
                    Iterator tmp = *this;
                    --(*this);

                    return tmp;
                }

                // Random Access
                ConstIterator &operator+=(const difference_type offset)
                {
                    m_ptr += offset;

                    return *this;
                }

                ConstIterator operator+(const difference_type offset) const
                {
                    ConstIterator tmp = *this;

                    return tmp += offset;
                }

                ConstIterator &operator-=(const difference_type offset)
                {
                    return *this += -offset;
                }

                ConstIterator operator-(const difference_type offset) const
                {
                    ConstIterator tmp = *this;

                    return tmp -= offset;
                }

                difference_type operator-(const ConstIterator &right) const
                {
                    return m_ptr - right.m_ptr;
                }

                reference_type operator[](const difference_type offset) const
                {
                    return *(*this + offset);
                }

                bool operator<(const ConstIterator &right) const
                {
                    return m_ptr < right.m_ptr;
                }

                bool operator>(const ConstIterator &right) const
                {
                    return m_ptr < *this;
                }

                bool operator<=(const ConstIterator &right) const
                {
                    return !(right < *this);
                }

                bool operator>= (const ConstIterator &right) const
                {
                    return !(*this < right);
                }

                friend ConstIterator operator+(const difference_type offset, const ConstIterator it)
                {
                    ConstIterator tmp = it;

                    return tmp += offset;
                }
            
            private:
                pointer_type m_ptr;
        };
        */

        /*
        Iterator begin() { return Iterator(&m_items[0]); }
        Iterator end() { return Iterator(&m_items[m_size]); }

        ConstIterator begin() const { return ConstIterator(&m_items[0]); }
        ConstIterator end() const { return ConstIterator(&m_items[m_size]); }

        ConstIterator cbegin() { return ConstIterator(&m_items[0]); }
        ConstIterator cend() { return ConstIterator(&m_items[m_size]); }
        */

    private:
        void expand(size_t new_capacity);

        T *m_items;
        size_t m_capacity;
        size_t m_size;
};

// Free Operators
template <typename T> requires std::is_default_constructible_v<T>
BoxContainer<T> operator+(const BoxContainer<T> &left, const BoxContainer<T> &right);

// Definitions
template <typename T> requires std::is_default_constructible_v<T>
BoxContainer<T>::BoxContainer(size_t capacity)
{
    m_items = new T[capacity];
    m_capacity = capacity;
    m_size = 0;
}

template <typename T> requires std::is_default_constructible_v<T>
BoxContainer<T>::BoxContainer(const BoxContainer<T>& source) requires std::copyable<T>
{
	// Set up the new box
	m_items = new T[source.m_capacity];
	m_capacity = source.m_capacity;
	m_size = source.m_size;
	
	// Copy the items over from source 
	for(size_t i{} ; i < source.size(); ++i)
    {
		m_items[i] = source.m_items[i];
	}
}

template <typename T> requires std::is_default_constructible_v<T>
BoxContainer<T>::~BoxContainer()
{
    delete[] m_items;
}

template <typename T> requires std::is_default_constructible_v<T>
void BoxContainer<T>::expand(size_t new_capacity)
{
    std::cout << "Expanding to " << new_capacity << std::endl;

    T *new_items_container;

    // Check if already have needed capacity
    if (new_capacity <= m_capacity)
        return;
    
    // Allocate new (larger) memory
    new_items_container = new T[new_capacity];

    // Copy item sfrom old array to new
    for (size_t i {}; i < m_size; i++)
        new_items_container[i] = m_items[i];
    
    // Release the old array
    delete [] m_items;

    // Make the current box wrap around the new array
    m_items = new_items_container;

    // Use the new capacity
    m_capacity = new_capacity;
}

template <typename T> requires std::is_default_constructible_v<T>
void BoxContainer<T>::add(const T &item)
{
    if (m_size == m_capacity)
        expand(m_size + EXPAND_STEPS);
    
    m_items[m_size] = item;
    ++m_size;
}

template <typename T> requires std::is_default_constructible_v<T>
bool BoxContainer<T>::remove_item(const T &item)
{
    // Find the target item
    size_t index {m_capacity + 999};

    for (size_t i {0}; i < m_size; i++)
    {
        if (m_items[i] == item)
        {
            index = i;

            break;
        }
    }

    // Item not found in box
    if (index > m_size)
        return false;
    
    // Overshadow item at index with last element and decrement m_size
    m_items[index] = m_items[m_size - 1];
    m_size--;

    return true;
}

// Removing all is just removing one item, several times, until none is left
template <typename T> requires std::is_default_constructible_v<T>
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

template <typename T> requires std::is_default_constructible_v<T>
void BoxContainer<T>::operator+=(const BoxContainer<T> &operand)
{
    // Make sure the current box can accommodate
    if ( (m_size + operand.size() ) > m_capacity)
        expand(m_size + operand.size());
    
    // Copy
    for (size_t i {}; i < operand.m_size; i++)
        m_items[m_size + i] = operand.m_items[i];
    
    m_size += operand.m_size;
}

template <typename T> requires std::is_default_constructible_v<T>
BoxContainer<T> operator+(const BoxContainer<T> &left, const BoxContainer<T> &right)
{
    BoxContainer<T> result(left.size() + right.size());

    result += left;
    result += right;

    return result;
}

template <typename T> requires std::is_default_constructible_v<T>
void BoxContainer<T>::operator=(const BoxContainer<T> &source)
{
    T *new_items;

    // Check for self-assignment
    if (this == &source)
        return;

    if (m_capacity != source.m_capacity)
    {
        new_items = new T[source.m_capacity];
        delete [] m_items;

        m_items = new_items;
        m_capacity = source.m_capacity;
    }

    // Copy
    for (size_t i {}; i < source.size(); i++)
        m_items[i] = source.m_items[i];
    
    m_size = source.m_size;
}

#endif