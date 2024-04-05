#include <iostream>
#include "point.h"

/* Custom wrapper around double */

class Number
{
    friend std::ostream &operator<<(std::ostream &out, const Number &number);

    // Arithmetic Operators
    friend Number operator+(const Number &left_op, const Number &right_op);
    friend Number operator-(const Number &left_op, const Number &right_op);
    friend Number operator*(const Number &left_op, const Number &right_op);
    friend Number operator/(const Number &left_op, const Number &right_op);
    friend Number operator%(const Number &left_op, const Number &right_op);

    public:
        Number() = default;
        Number(int value);

        ~Number();

        explicit operator double() const
        {
            return (static_cast<double> (m_wrapped_int));
        }

        explicit operator Point() const
        {
            std::cout << "Custom conversion from Number to Point." << std::endl;

            return Point(static_cast<double>(m_wrapped_int), static_cast<double>(m_wrapped_int));
        }

        // Getter
        int get_wrapped_int() const
        {
            return m_wrapped_int;
        }

    private:
        int m_wrapped_int {0};
};