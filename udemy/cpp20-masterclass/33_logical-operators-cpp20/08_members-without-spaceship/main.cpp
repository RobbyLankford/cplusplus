#include <iostream>

// Custom object to be included in the Item object
struct Integer
{
    Integer() = default;
    Integer(int n) : m_wrapped_int {n} {}

    int get() const
    {
        return m_wrapped_int;
    }

    bool operator==(const Integer &right) const
    {
        return (m_wrapped_int == right.m_wrapped_int);
    }

    bool operator<(const Integer &right) const
    {
        return (m_wrapped_int < right.m_wrapped_int);
    }

    private:
        int m_wrapped_int {};
};

class Item
{
    public:
        Item() = default;
        Item(int n) : Item(n, n, n) {}
        Item(int a_param, int b_param, int c_param) : a(a_param), b(b_param), c(c_param) {}

        // Ordering: compiler generates >, <, >=, <= and also puts in the == operator
        std::strong_ordering operator<=>(const Item &right_op) const = default;

    private:
        int a {1};
        int b {2};
        int c {3};

        Integer d;
};

int main()
{
    Item i1{1, 2, 5};
    Item i2{1, 2, 4};

    std::cout << std::boolalpha;

    auto result1 = (i1 > i2); // (i1 <=> i2) > 0
    auto result2 = (i1 >= i2); // (i1 <=> i2) >= 0
    auto result3 = (i1 == i2); // (i1 <=> i2) == 0
    auto result4 = (i1 != i2); // (i1 <=> i2) != 0
    auto result5 = (i1 < i2); // (i1 <=> i2) < 0
    auto result6 = (i1 <= i2); // (i1 <=> i2) <= 0

    std::cout << "i1 > i2: " << result1 << std::endl;
    std::cout << "i1 >= i2: " << result2 << std::endl;
    std::cout << "i1 == i2: " << result3 << std::endl;
    std::cout << "i1 != i2: " << result4 << std::endl;
    std::cout << "i1 < i2: " << result5 << std::endl;
    std::cout << "i1 <= i2: " << result6 << std::endl;

    // Implicit Conversions
    auto result7 = (i1 > 20);
    auto result8 = (29 < i1);
    auto result9 = (i2 != 12);
    auto result10 = (i2 != 12);

    return 0;
}