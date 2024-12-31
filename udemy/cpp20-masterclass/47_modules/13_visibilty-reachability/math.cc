module;

#include <iostream>
#include <random>

export module math;

namespace math
{
    class Point
    {
        public:
            Point(double x, double y)
            {
                this->x = x;
                this->y = y;
            }

            friend std::ostream &operator<<(std::ostream &os, const Point &p)
            {
                os << "(" << p.x << ", " << p.y << ")";

                return os;
            }

            double getX() { return x; }
            double getY() { return y; }

            void setX(double x) { this->x = x; }
            void setY(double y) { this->y = y; }

        private:
            double x;
            double y;
    };
}

namespace math
{
    export Point generateRandomPoint()
    {
        std::random_device rd;
        std::mt19937 genXY(rd());

        std::uniform_real_distribution<double> distXY(0, 99);

        return Point(distXY(genXY), distXY(genXY));
    }
}