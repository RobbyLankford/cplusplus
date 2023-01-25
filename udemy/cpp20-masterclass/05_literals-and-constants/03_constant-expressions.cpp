#include <iostream>

int main()
{
    // Constant Expressions: may be evaluated at compile time or runtime
    // Heavy computation is done once by the developer
    // Users running the application reuse the result 

    constexpr int SOME_LIB_MAJOR_VERSION {1237};
    constexpr int eye_count {2};
    constexpr double PI {3.14};

    // Constant expressions are not modifiable
    // eye_count = 4; // Will cause an error

    std::cout << "eye count: " << eye_count << std::endl;
    std::cout << "PI: " << PI << std::endl;

    // Non-constexpr is not known at compile time
    int leg_count {2};
    
    // Cannot use non-constexpr values to calculate constexpr values
    // constexpr int arm_count {leg_count}; // Will cause an error

    // Can use constexpr values to calculate other constexpr values
    constexpr int room_count {10};
    constexpr int door_count {room_count};
    constexpr int table_count {5};
    constexpr int chair_count {table_count * 5};

    std::cout << "room count: " << room_count << std::endl;
    std::cout << "door count: " << door_count << std::endl;
    std::cout << "table count: " << table_count << std::endl;
    std::cout << "chair count: " << chair_count << std::endl;
    std::cout << std::endl;

    // Check values at compile time
    // static_assert(SOME_LIB_MAJOR_VERSION == 123); // Will cause an error
    static_assert(SOME_LIB_MAJOR_VERSION == 1237);
    std::cout << "Program works!" << std::endl;

    return 0;
}