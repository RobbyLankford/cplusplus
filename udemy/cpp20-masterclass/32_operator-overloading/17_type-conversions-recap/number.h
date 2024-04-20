#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>

class Point;

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

        // Type Conversion Operator: Number -> Point
        operator Point() const;

        // Getter
        int get_wrapped_int() const
        {
            return m_wrapped_int;
        }

        ~Number();
    
    private:
        int m_wrapped_int {};
};

#endif