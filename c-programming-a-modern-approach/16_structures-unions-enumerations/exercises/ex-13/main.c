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

int main(void)
{
    return 0;
}