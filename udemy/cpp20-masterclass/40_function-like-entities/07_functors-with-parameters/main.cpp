#include <iostream>
#include <concepts>

#include "boxcontainer.h"

// A functor can take parameters and internally store them as member variables
template <typename T>
requires std::is_arithmetic_v<T>
class IsInRange
{
    public:
        IsInRange(T min, T max) : min_inclusive {min}, max_inclusive {max} {}

        bool operator() (T value) const
        {
            return ((value >= min_inclusive) && (value <= max_inclusive));
        }
    
    private:
        T min_inclusive;
        T max_inclusive;
};

template <typename T, typename RangePicker>
requires std::is_arithmetic_v<T>
T range_sum(const BoxContainer<T> &collection, RangePicker is_in_range)
{
    T sum {};
    for (size_t i {}; i < collection.size(); i++)
    {
        if (is_in_range(collection.get_item(i)))
            sum += collection.get_item(i);
    }

    return sum;
}


int main()
{
    BoxContainer<double> doubles;

    doubles.add(10.1);
    doubles.add(20.2);
    doubles.add(30.3);

    std::cout << std::endl;
    std::cout << "doubles: " << doubles << std::endl;
    std::cout << "range_sum [10.0, 15.5]: " << range_sum(doubles, IsInRange<double>(10.0, 15.5)) << std::endl;
    std::cout << "range_sum [10.0, 41.5]: " << range_sum(doubles, IsInRange<double>(10.0, 41.5)) << std::endl;

    std::cout << "\n-------\n" << std::endl;

    BoxContainer<std::string> strings;

    strings.add("Hello");
    strings.add("World");

    std::cout << std::endl;
    std::cout << "strings: " << strings << std::endl;

    // Will not work because strings are not arithmetic
    //range_sum(strings, IsInRange<std::string>("Hello", "World"));

    std::cout << "\n-------\n" << std::endl;

    BoxContainer<int> ints;

    ints.add(10);
    ints.add(3);
    ints.add(72);

    std::cout << std::endl;
    std::cout << "ints: " << ints << std::endl;
    std::cout << "range_sum [10, 20]: " << range_sum(ints, IsInRange<int>(10, 20)) << std::endl;
    std::cout << "range_sum [1, 90]: " << range_sum(ints, IsInRange(1, 90)) << std::endl;

    std::cout << std::endl; 

    return 0;
}
