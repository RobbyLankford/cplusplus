#include <iostream>

bool car()
{
    std::cout << "car function running" << std::endl;

    return false;
}

bool house()
{
    std::cout << "house function running" << std::endl;

    return true;
}

bool job()
{
    std::cout << "job function running" << std::endl;

    return false;
}

bool spouse()
{
    std::cout << "spouse function running" << std::endl;

    return false;
}

int main()
{
    // "Short Circuit": stop execution of AND, OR depending on what the first result(s) is/are
    // AND: put operands likely to be `false` first
    // OR: put operands likely to be `true` first
    // If AND gets a `false` first or OR gets a `true` first, they will not check anything else

    bool a {true};
    bool b {true};
    bool c {true};
    bool d {false};

    bool p {false};
    bool q {false};
    bool r {false};
    bool m {true};

    // AND: if one of the operands is 0, the result is 0
    bool result = a && b && c && d;

    std::cout << std::endl;
    std::cout << "AND short circuit: " << std::boolalpha << result << std::endl;

    // OR: if one of the operands is 1, the result is 1
    result = p || q || r || m;

    std::cout << std::endl;
    std::cout << "OR short circuit: " << std::boolalpha << result << std::endl;

    std::cout << "\n-------\n" << std::endl;

    // The bool functions will run *IF* the compiler executes them

    // Only "car function running" is printed, so execution stops after `car()`
    if (car() && house() && job() && spouse())
    {
        std::cout << "I am happy" << std::endl;
    }
    else
    {
        std::cout << "I am sad" << std::endl;
    }

    std::cout << std::endl;

    // "car function running" and "house function running" are printed, so execution starts after `house()`
    if (car() || house() || job() || spouse())
    {
        std::cout << "I am happy" << std::endl;
    }
    else
    {
        std::cout << "I am sad" << std::endl;
    }

    std::cout << std::endl;

    return 0;
}