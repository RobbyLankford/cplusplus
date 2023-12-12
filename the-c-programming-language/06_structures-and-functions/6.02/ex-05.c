#include <stdio.h>

struct point
{
    int x;
    int y;
};

struct rect
{
    struct point pt1;
    struct point pt2;
};

main()
{
    struct point origin, *pp;

    pp = &origin;

    printf("origin is (%d, %d)\n", (*pp).x, (*pp).y);
    printf("origin is (%d, %d)\n", pp->x, pp->y);

    struct rect r, *rp = &r;

    // Equivalent expressions
    r.pt1.x;
    rp->pt1.x;
    (r.pt1).x;
    (rp->pt1).x;

    return 0;
}