#include <stdio.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

struct shape
{
    int shape_kind;         /* RECTANGLE or CIRCLE */
    struct point center;    /* coordinates of center */

    union
    {
        struct
        {
            int height, width;
        } rectangle;

        struct
        {
            int radius;
        } circle;
    } u;
} s;

// (a) compute the area of s
double calc_area(struct shape s)
{
    if (s.shape_kind == 0)  /* rectangle flagged by a 0 */
        return s.u.rectangle.height * s.u.rectangle.width;
    else
        return 3.14159 * s.u.circle.radius * s.u.circle.radius;
}

// (b) move s by x units in the x direction and y units in the y direction
struct shape move_shape(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;

    return s;
}

// (c) scale s by a factor of c (a double)
struct shape scale_shape(struct shape s, double c)
{
    if (s.shape_kind == 0)  /* rectangle flagged by a 0 */
    {
        s.u.rectangle.height *= c;
        s.u.rectangle.width *= c;
    }
    else
    {
        s.u.circle.radius *= c;
    }
}

int main(void)
{
    return 0;
}