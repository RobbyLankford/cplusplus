#ifndef BOX_CONTAINER_H
#define BOX_CONTAINER_H

#include "stream_insertable.h"

class BoxContainer : public StreamInsertable
{
    using value_type = int;

    static const size_t DEFAULT_CAPACITY = 30;
    static const size_t EXPAND_STEPS = 5;

    public:
        BoxContainer(size_t capacity = DEFAULT_CAPACITY);
        BoxContainer(const BoxContainer &source);

        ~BoxContainer();

        // StreamInsertable Interface
        virtual void stream_insert(std::ostream &out) const override;

        // Getters
        size_t size() const
        {
            return m_size;
        }

        size_t capacity() const
        {
            return m_capacity;
        }

        // Methods
        void add(const value_type &item);

        bool remove_item(const value_type &item);
        size_t remove_all(const value_type &item);

        void operator +=(const BoxContainer &operand);
        void operator =(const BoxContainer &source);
    
    private:
        void expand(size_t new_capacity);

        value_type *m_items;
        size_t m_capacity;
        size_t m_size;
};

// Free operators
BoxContainer operator+(const BoxContainer &left, const BoxContainer &right);

#endif