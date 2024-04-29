#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>

/*
    When the binary operator is set up as a member function,
    implicit conversions do not work for the left operand.

    Have to define how to convert the operands.
*/

class Number
{
    friend std::ostream &operator<<(std::ostream &out, const Number &number);

    // Comparison Operators (Pre C++20, had to define them all)
    friend bool operator<(const Number &left_op, const Number &right_op);
    friend bool operator<(int left_op, const Number &right_op);
    friend bool operator<(const Number &left_op, int right_op);

    friend bool operator==(const Number &left_op, const Number &right_op);
    friend bool operator==(int left_op, const Number &right_op);
    friend bool operator==(const Number &left_op, int right_op);

    friend bool operator>(const Number &left_op, const Number &right_op);
    friend bool operator>(int left_op, const Number &right_op);
    friend bool operator>(const Number &left_op, int right_op);

    friend bool operator>=(const Number &left_op, const Number &right_op);
    friend bool operator>=(int left_op, const Number &right_op);
    friend bool operator>=(const Number &left_op, int right_op);

    friend bool operator<=(const Number &left_op, const Number &right_op);
    friend bool operator<=(int left_op, const Number &right_op);
    friend bool operator<=(const Number &left_op, int right_op);

    friend bool operator!=(const Number &left_op, const Number &right_op);
    friend bool operator!=(int left_op, const Number &right_op);
    friend bool operator!=(const Number &left_op, int right_op);

    public:
        Number() = default;
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

#endif