#include <iostream>
#include <cassert>

struct Point
{
    public:
        Point(std::initializer_list<double> list)
        {
            // If the size of the list is not 2, terminate the program with an error
            assert(list.size() == 2);

            x = *(list.begin());
            y = *(list.begin() + 1);
        }

        void print_point() const
        {
            std::cout << "Point [x: " << x << ", y: " << y << "]" << std::endl;
        }
    
    private:
        double x;
        double y;
};

int main()
{
    // Can now do curly brace initialization, but only if there are two arguments
    Point p1 {22.4, 34.9};
    p1.print_point();

    return 0;
}
