#ifndef CHAR_CONTAINER_H
#define CHAR_CONTAINER_H

#include "stream_insertable.h"

class CharContainer : public StreamInsertable
{
    // Allows us to change what is stored in the vector
    using value_type = char;

    static const size_t DEFAULT_CAPACITY = 5;
    static const size_t EXPAND_STEPS = 5;

    public:
        CharContainer(size_t capacity = DEFAULT_CAPACITY);
        CharContainer(const CharContainer &source);

        ~CharContainer();

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
        void operator+=(const CharContainer &operand);
        void operator=(const CharContainer &source);
    
    private:
        void expand(size_t new_capacity);

        value_type *m_items;
        size_t m_capacity;
        size_t m_size;
};

// Free Operators
CharContainer operator+(const CharContainer &left, const CharContainer &right);

#endif