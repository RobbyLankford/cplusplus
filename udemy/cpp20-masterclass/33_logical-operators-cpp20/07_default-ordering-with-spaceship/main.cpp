#include <iostream>

/*
    - The compiler will use the <=> operator to generate >, >=, <, <=
    - If the operator is defaulted, the compiler will also generate a == operator and use it for !=
    - Default operator were do a member-wise lexicographical comparison
    - The return type of our <=> operator are auto-deduced bit will be one of
        - std::strong_ordering
        - std::weak_ordering
        - std::partial_ordering
*/

class Item
{
    public:
        Item() = default;
        Item(int n) : Item(n, n, n) {}
        Item(int a_param, int b_param, int c_param) : a(a_param), b(b_param), c(c_param) {}

        // Ordering: compiler generates >, <, >=, <= and also puts in the == operator
        auto operator<=> (const Item &right_op) const = default;
    
    private:
        int a {1};
        int b {2};
        int c {3};
};

int main()
{
    Item i1(1, 2, 5);
    Item i2(1, 2, 4);

    auto result1 = (i1 > i2);  // same as i1 <=> i2 > 0
    auto result2 = (i1 >= i2); // same as i1 <=> i2 >= 0
    auto result3 = (i1 == i2);
    auto result4 = (i1 != i2);
    auto result5 = (i1 < i2);  // same as i1 <=> i2 < 0
    auto result6 = (i1 <= i2); // same as i1 <=> i2 <= 0

    std::cout << "i1 > i2: " << result1 << std::endl;
    std::cout << "i1 >= i2: " << result2 << std::endl;
    std::cout << "i1 == i2: " << result3 << std::endl;
    std::cout << "i1 != i2: " << result4 << std::endl;
    std::cout << "i1 < i2: " << result5 << std::endl;
    std::cout << "i1 <= i2: " << result6 << std::endl;

    return 0;
}