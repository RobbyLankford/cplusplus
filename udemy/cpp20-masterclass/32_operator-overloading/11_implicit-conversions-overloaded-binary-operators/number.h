#include <iostream>

class Number
{
    friend std::ostream &operator<<(std::ostream &out, const Number &number);

    // Arithmetic operators
    friend Number operator+(const Number &left_op, const Number &right);
    friend Number operator-(const Number &left_op, const Number &right);
    friend Number operator*(const Number &left_op, const Number &right);
    friend Number operator/(const Number &left_op, const Number &right);
    friend Number operator%(const Number &left_op, const Number &right);

    public:
        Number() = default;
        Number(int value);


        // Cast the integer to double
        explicit operator double() const
        {
            return (static_cast<double>(m_wrapped_int));
        }

        int get_wrapped_int() const
        {
            return m_wrapped_int;
        }

        ~Number();
    
    private:
        int m_wrapped_int {0};
};
