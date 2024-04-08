#include "number.h"

Number::Number(int value) : m_wrapped_int(value) {}

std::ostream &operator<<(std::ostream &out, const Number &number)
{
    out << "Number: [" << number.m_wrapped_int << "]";

    return out;
}

Number operator+(const Number &left_op, const Number &right_op)
{
    return Number(left_op.m_wrapped_int + right_op.m_wrapped_int);
}
Number operator-(const Number &left_op, const Number &right_op)
{
    return Number(left_op.m_wrapped_int - right_op.m_wrapped_int);
}
Number operator*(const Number &left_op, const Number &right_op)
{
    return Number(left_op.m_wrapped_int * right_op.m_wrapped_int);
}
Number operator/(const Number &left_op, const Number &right_op)
{
    return Number(left_op.m_wrapped_int / right_op.m_wrapped_int);
}
Number operator%(const Number &left_op, const Number &right_op)
{
    return Number(left_op.m_wrapped_int % right_op.m_wrapped_int);
}

Number::~Number() {}
