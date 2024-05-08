#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>

class Number
{
    friend std::ostream &operator<<(std::ostream &out, const Number &number);

    // Would have to define 18 comparison operators before C++20...

    public:
        Number() = delete;
        explicit Number(int value);

        // Getter
        int get_wrapped_int() const
        {
            return m_wrapped_int;
        }

        // ... with C++20, only need to define 4 comparison operators
        auto operator<=>(const Number &right) const = default;

        auto operator<=>(int n) const
        {
            return m_wrapped_int <=> n;
        }

        bool operator==(const Number &right) const
        {
            return m_wrapped_int == right.m_wrapped_int;
        }

        bool operator==(int n)
        {
            return m_wrapped_int == n;
        }

        ~Number();
    
    private:
        int m_wrapped_int {0};
};

#endif