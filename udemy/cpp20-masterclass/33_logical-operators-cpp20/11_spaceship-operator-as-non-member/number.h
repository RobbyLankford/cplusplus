#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>

class Number
{
    friend std::ostream &operator<<(std::ostream &out, const Number &number);

    public:
        Number() = delete;

        explicit Number(int value);

        // Getter
        int get_wrapped_int() const
        {
            return m_wrapped_int;
        }

        ~Number();
    
    private:
        int m_wrapped_int {0};
};

// In most cases, will not need to do this... but sometimes it needs to be a non-member
inline auto operator<=>(const Number &left, const Number &right)
{
    return (left.get_wrapped_int() <=> right.get_wrapped_int());
}

inline auto operator<=>(int left, const Number &right)
{
    return (left <=> right.get_wrapped_int());
}

inline bool operator==(const Number &left, const Number &right)
{
    return (left.get_wrapped_int() == right.get_wrapped_int());
}

inline bool operator==(int left, const Number &right)
{
    return (left == right.get_wrapped_int());
}

#endif