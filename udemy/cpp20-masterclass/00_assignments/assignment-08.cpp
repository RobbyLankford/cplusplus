#include <iostream>

int main()
{
    int x;
    int y;
    bool x_inside_rect {true};
    bool y_inside_rect {true};

    std::cout << "Type in your x location: " << std::endl;
    std::cin >> x;

    std::cout << "Type in your y location: " << std::endl;
    std::cin >> y;

    // Surrounded if within a rectangle centered at (0, 0) with height of 10 and width of 20
    if (x > 10 || x < -10)
    {
        x_inside_rect = false;
    }

    if (y > 5 || y < -5)
    {
        y_inside_rect = false;
    }

    if (x_inside_rect && y_inside_rect)
    {
        std::cout << "You are completely surrounded!" << std::endl;
    }
    else
    {
        std::cout << "You're out of reach!" << std::endl;
    }

    return 0;
}