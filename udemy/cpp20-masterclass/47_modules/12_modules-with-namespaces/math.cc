module;

export module math;

import <iostream>;
import <cmath>;

export namespace math
{
    class Point
    {
        public:
            Point(int x, int y) : x(x), y(y) {}

            friend std::ostream &operator<<(std::ostream &os, const Point &p)
            {
                os << "Point (" << p.x << ", " << p.y << ")";

                return os;
            }

            int getX() const { return x; }
            int getY() const { return y; }
        
        private:
            int x;
            int y;
    };

    class Line
    {
        public:
            Line(Point start, Point end) : start(start), end(end) {}

            friend std::ostream &operator<<(std::ostream &os, const Line &l)
            {
                os << "Line (" << l.start << ", " << l.end << ")";

                return os;
            }

        private:
            Point start;
            Point end;
    };
}

namespace math
{
    export double distance(const Point &p1, const Point &p2)
    {
        return sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2));
    }

    Point add(const Point &p1, const Point &p2)
    {
        return Point(p1.getX() + p2.getX(), p1.getY() + p2.getY());
    }
}