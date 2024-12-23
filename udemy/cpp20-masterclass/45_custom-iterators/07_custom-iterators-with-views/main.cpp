#include <iostream>
#include <algorithm>
#include <vector>
#include <ranges>

#include "boxcontainer.h"

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

    auto operator <=>(const Student &s) const = default;

    std::string m_name;
    unsigned int m_age;
};

int main()
{
    BoxContainer<int> vi;

    vi.add(5);
    vi.add(1);
    vi.add(4);
    vi.add(8);
    vi.add(5);
    vi.add(3);
    vi.add(7);
    vi.add(9);
    vi.add(6);

    std::cout << vi << std::endl;

    // std::ranges::filter_view
    std::cout << std::endl;
    
    auto evens = [](int i)
    {
        return (i % 2) == 0;
    };

    std::cout << "vi: ";
    print(vi);

    std::ranges::filter_view v_evens = std::ranges::filter_view(vi, evens);
    std::cout << "vi evens: ";
    print(v_evens);

    std::cout << "vi evens: ";
    print(std::ranges::filter_view(vi, evens));

    // std::ranges::transform_view
    std::cout << std::endl;

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

    std::ranges::take_view v_taken = std::ranges::take_view(vi, 5);

    std::cout << "vi: ";
    print(vi);

    std::cout << "vi taken: ";
    print(v_taken);

    // std::ranges::take_while_view
    std::cout << std::endl;

    std::ranges::take_while_view v_taken_while = std::ranges::take_while_view(vi, [](int i) {
        return (i % 2) != 0;
    });

    std::cout << "vi: ";
    print(vi);

    std::cout << "vi taken_while: ";
    print(v_taken_while);

    // std::ranges::drop_view (drop n first elements)
    std::cout << std::endl;

    std::ranges::drop_view v_drop = std::ranges::drop_view(vi, 5);

    std::cout << "vi: ";
    print(vi);

    std::cout << "vi_drop: ";
    print(v_drop);

    // std::views::drop_while_view
    std::cout << std::endl;

    std::ranges::drop_while_view v_drop_while = std::ranges::drop_while_view(vi, [](int i){
        return (i % 2) != 0;
    });

    std::cout << "vi: ";
    print(vi);

    std::cout << "v_drop_view: ";
    print(v_drop_while);

    // Range Adaptors
    
    // std::views::filter
    std::cout << std::endl;

    auto evens1 = [](int i)
    {
        return (i % 2) == 0;
    };

    std::cout << "vi: ";
    print(vi);

    std::ranges::filter_view v_evens1 = std::views::filter(vi, evens1);

    std::cout << "vi evens: ";
    print(v_evens1);

    std::cout << "vi evens: ";
    print(std::views::filter(vi, evens1));

    std::cout << "vi odds: ";
    print(std::views::filter(vi, [](int i){
        return (i % 2) != 0;
    }));

    // Students Example
    std::cout << std::endl;
    std::cout << "Students Example:" << std::endl;

    BoxContainer<Student> class_room;
    class_room.add(Student("Mike", 12));
    class_room.add(Student("John", 17));
    class_room.add(Student("Drake", 14));
    class_room.add(Student("Mary", 16));

    std::cout << std::endl;
    std::cout << "Classroom:" << std::endl;
    for (auto &s : class_room)
        std::cout << "\t" << s << std::endl;
    
    std::cout << "Students under 15: ";
    print(std::views::take_while(class_room, [](const Student &s) { return (s.m_age < 15); }));

    auto less_than_15_v = class_room | std::views::take_while([](const Student &s) { return (s.m_age < 15); });
    print(less_than_15_v);

    return 0;
}
