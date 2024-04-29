#include "number.h"

Number::Number(int value) : m_wrapped_int(value) {}

std::ostream &operator<<(std::ostream &out, const Number &number)
{
    out << "Number: [" << number.m_wrapped_int << "]";

    return out;
}

// Comparison Operators
bool operator<(const Number &left_op, const Number &right_op)
{
    return (left_op.m_wrapped_int < right_op.m_wrapped_int);
}
bool operator<(int left_op, const Number &right_op)
{
    return (left_op < right_op.m_wrapped_int);
}
bool operator<(const Number &left_op, int right_op)
{
    return (left_op.m_wrapped_int < right_op);
}

bool operator==(const Number &left_op, const Number &right_op)
{
    return (left_op.m_wrapped_int == right_op.m_wrapped_int);
}
bool operator==(int left_op, const Number &right_op)
{
    return (left_op == right_op.m_wrapped_int);
}
bool operator==(const Number &left_op, int right_op)
{
    return (left_op.m_wrapped_int == right_op);
}

bool operator>(const Number &left_op, const Number &right_op)
{
    return (left_op.m_wrapped_int > right_op.m_wrapped_int);
}
bool operator>(int left_op, const Number &right_op)
{
    return (left_op > right_op.m_wrapped_int);
}
bool operator>(const Number &left_op, int right_op)
{
    return (left_op.m_wrapped_int > right_op);
}

bool operator>=(const Number &left_op, const Number &right_op)
{
    return (left_op.m_wrapped_int >= right_op.m_wrapped_int);
}
bool operator>=(int left_op, const Number &right_op)
{
    return (left_op >= right_op.m_wrapped_int);
}
bool operator>=(const Number &left_op, int right_op)
{
    return (left_op.m_wrapped_int >= right_op);
}

bool operator<=(const Number &left_op, const Number &right_op)
{
    return (left_op.m_wrapped_int <= right_op.m_wrapped_int);
}
bool operator<=(int left_op, const Number &right_op)
{
    return (left_op <= right_op.m_wrapped_int);
}
bool operator<=(const Number &left_op, int right_op)
{
    return (left_op.m_wrapped_int <= right_op);
}

bool operator!=(const Number &left_op, const Number &right_op)
{
    return (left_op.m_wrapped_int != right_op.m_wrapped_int);
}
bool operator!=(int left_op, const Number &right_op)
{
    return (left_op != right_op.m_wrapped_int);
}
bool operator!=(const Number &left_op, int right_op)
{
    return (left_op.m_wrapped_int != right_op);
}

Number::~Number() {}