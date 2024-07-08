#ifndef DOUBLE_CONTAINER_H
#define DOUBLE_CONTAINER_H

#include "stream_insertable.h"

class DoubleContainer : public StreamInsertable
{
    // Allows us to change what is stored in the vector
    using value_type = double;

    static const size_t DEFAULT_CAPACITY = 5;
    static const size_t EXPAND_STEPS = 5;

    public:
        DoubleContainer(size_t capacity = DEFAULT_CAPACITY);
        DoubleContainer(const DoubleContainer &source);

        ~DoubleContainer();

        // StreamInsertable Interface
        virtual void stream_insert(std::ostream &out) const;

        // Getters
        size_t size() const
        {
            return m_size;
        }

        size_t capacity() const
        {
            return m_capacity;
        }
        
        // Add Items
        void add(const value_type &item);
        bool remove_item(const value_type &item);
        size_t remove_all(const value_type &item);

        // In Class Operators
        void operator+=(const DoubleContainer &operand);
        void operator=(const DoubleContainer &source);
    
    private:
        void expand(size_t new_capacity);

        value_type *m_items;
        size_t m_capacity;
        size_t m_size;
};

// Free Operators
DoubleContainer operator+(const DoubleContainer &left, const DoubleContainer &right);

#endif