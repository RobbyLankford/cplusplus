/*
    A view is a non-ownering range
    It is like a window we can set up to view some real data without setting up the infrastructure to store data
    Views are cheap to copy and pass around as function parameters by design
*/

#include <iostream>
#include <ranges>
#include <algorithm>
#include <vector>

void print(auto view)
{
    for (auto i : view)
        std::cout << i << " ";
    std::cout << std::endl;
}

struct Student
{
    friend std::ostream &operator<<(std::ostream &out, const Student &s)
    {
        out << "Student [name: " << s.m_name << ", age: " << s.m_age << "]";

        return out;
    }

    auto operator<=>(const Student &s) const = default;
    
    std::string m_name;
    unsigned int m_age;
};

int main()
{
    std::vector<int> vi {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // std::ranges::filter_view
    std::cout << "std::ranges::filter_view:" << std::endl;

    auto evens = [](int i)
    {
        return (i % 2) == 0;
    };

    std::cout << "vi: ";
    print(vi);

    std::ranges::filter_view v_evens = std::ranges::filter_view(vi, evens);

    std::cout << "vi evens: ";
    print(v_evens);

    std::cout << "vi odds: ";
    print(std::ranges::filter_view(vi, [](int i) {
        return (i % 2) != 0;
    }));

    std::cout << "vi: ";
    print(vi);

    // std::ranges::transform_view
    std::cout << std::endl;
    std::cout << "std::ranges::transform_view:" << std::endl;

    std::ranges::transform_view v_transformed = std::ranges::transform_view(vi, [](int i) {
        return i * 10;
    });

    std::cout << "vi: ";
    print(vi);

    std::cout << "vi transformed: ";
    print(v_transformed);

    std::cout << "vi: ";
    print(vi);

    // std::ranges::take_view
    std::cout << std::endl;
    std::cout << "std::ranges::take_view:" << std::endl;

    std::ranges::take_view v_taken = std::ranges::take_view(vi, 5);

    std::cout << "vi: ";
    print(vi);

    std::cout << "vi taken: ";
    print(v_taken);

    // is met
    std::cout << std::endl;
    std::cout << "std::views::take_while:" << std::endl;

    vi = {1, 11, 23, 131, 2, 3, 4, 5, 6, 7, 8, 9};

    std::ranges::take_while_view v_taken_while = std::ranges::take_while_view(vi, [](int i) {
        return (i % 2) != 0;
    });

    std::cout << "vi: ";
    print(vi);

    std::cout << "vi taken_while: ";
    print(v_taken_while);

    // std::ranges::drop_view (drop n first elements)
    std::cout << std::endl;
    std::cout << "std::ranges::drop_view:" << std::endl;

    vi = {1, 11, 23, 131, 2, 3, 4, 5, 6, 7, 8, 9};

    std::ranges::drop_view v_drop = std::ranges::drop_view(vi, 5);

    std::cout << "vi: ";
    print(vi);

    std::cout << "vi_drop: ";
    print(v_drop);

    // std::views::drop_while_view (drops elements as long as the predicate is met)
    std::cout << std::endl;
    std::cout << "std::ranges::drop_while_view:" << std::endl;

    vi = {1, 11, 23, 4, 2, 3, 4, 5, 6, 7, 8, 9};

    std::ranges::drop_while_view v_drop_while = std::ranges::drop_while_view(vi, [](int i) {
        return (i % 2) != 0;
    });

    std::cout << "vi: ";
    print(vi);

    std::cout << "v_drop_while: ";
    print(v_drop_while);

    // std::ranges::keys_view and std::ranges_value_view
    std::cout << std::endl;
    
    using pair = std::pair<int, std::string>;
    std::vector<pair> numbers{ {1, "one"}, {2, "two"}, {3, "three"}};

    auto k_view = std::views::keys(numbers);
    auto v_view = std::views::values(numbers);

    print(k_view);
    print(v_view);

    // std::views::filter()
    std::cout << std::endl;
    std::cout << "std::views::filter:" << std::endl;

    vi = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto evens1 = [](int i)
    {
        return (i % 2) == 0;
    };

    std::cout << "vi: ";
    print(vi);

    std::ranges::filter_view v_evens1 = std::views::filter(vi, evens1);

    std::cout << "vi evens: ";
    print(v_evens1);

    std::cout << "vi evens (on the fly): ";
    print(std::views::filter(vi, evens1));

    std::cout << "vi odds (on the fly): ";
    print(std::views::filter(vi, [](int i) {
        return (i % 2) != 0;
    }));

    // Students Example
    std::cout << std::endl;
    std::cout << "Students Example:" << std::endl;

    std::vector<Student> class_room {{"Mike", 12}, {"John", 17}, {"Drake", 14}, {"Mary", 16}};

    std::cout << std::endl;
    std::cout << "Classroom: " << std::endl;

    for (auto &s : class_room)
        std::cout << s << std::endl;
    
    std::ranges::sort(class_room, std::less<>{}, &Student::m_age);

    std::cout << std::endl;
    std::cout << "Students under 15: ";
    print(std::views::take_while(class_room, [](const Student &s) { return (s.m_age < 15 ); }));

    return 0;
}