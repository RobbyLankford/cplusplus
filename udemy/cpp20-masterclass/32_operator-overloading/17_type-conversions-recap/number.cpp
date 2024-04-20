#include "number.h"
#include "point.h"

Number::Number(int value) : m_wrapped_int(value) {}

Number::operator Point() const
{
    std::cout << "Using type conversion from Number to Point..." << std::endl;

    return Point(static_cast<double>(m_wrapped_int), static_cast<double>(m_wrapped_int));
}

std::ostream &operator<<(std::ostream &out, const Number &number)
{
    out << "Number: [" << number.m_wrapped_int << "]";

    return out;
}

// Operators done as non-member functions to take advantage of implicit conversions
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