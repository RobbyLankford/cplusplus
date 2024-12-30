import <iostream>;
import math;

/*
    If you export a namespace, everything inside it is exported
    If you export something from a namespace, the namespace is exported, but not everything inside of it is
*/

int main()
{
    math::Point p1(1, 2);
    math::Point p2(3, 4);
    math::Line l1(p1, p2);

    std::cout << l1 << std::endl;

    return 0;
}
