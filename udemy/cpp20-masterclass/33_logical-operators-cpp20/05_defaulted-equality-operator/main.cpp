#include <iostream>

class Item
{
    public:
        Item() = default;
        Item(int i) : Item(i, i, i) {}
        Item(int a_param, int b_param, int c_param) : a(a_param), b(b_param), c(c_param) {}

        // Equality, default : memberwise comparison for equality
        bool operator==(const Item &right_op) const = default;
    
    private:
        int a {1};
        int b {2};
        int c {3};
};

int main()
{
    Item i1 {1, 2, 3};
    Item i2 {1, 2, 33};

    // In C++20, only need to specify == operator and != will automatically be created
    std::cout << std::boolalpha;
    std::cout << "i1 == i2: " << (i1 == i2) << std::endl;
    std::cout << "i1 != i2: " << (i1 != i2) << std::endl;
    std::cout << "i1 == 12: " << (i1 == 12) << std::endl;
    std::cout << "36 == i2: " << (36 == i2) << std::endl;
    std::cout << "i1 != 12: " << (i1 != 12) << std::endl;
    std::cout << "36 != i2: " << (36 != i2) << std::endl;

    return 0;
}