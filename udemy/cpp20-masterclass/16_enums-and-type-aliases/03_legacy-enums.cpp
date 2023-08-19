#include <iostream>

/*
    This is a legacy method of declaring and using enums.
    Not recommended to use this way.
    Legacy enums implicitly transform to int.
*/

enum Direction {
    TopLeft, TopRight, Center, BottomLeft, BottomRight
};

enum Tool {
    Pen, Marker, Eraser, Rectangle, Circle, Bucket
};

int main()
{
    Direction direction{BottomLeft};
    Tool tool {Pen};

    // Legacy enums will convert to integers, so this will work but give a compiler warning
    std::cout << std::boolalpha;
    
    std::cout << "tool > direction: " << (tool > direction) << std::endl; // The meaning here is not clear, so do not use it
    std::cout << "direction: " << direction << std::endl;
    std::cout << "tool: " << tool << std::endl;

    return 0;
}