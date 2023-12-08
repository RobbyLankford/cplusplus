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
    struct point x, y, z;
    struct point pt;
    struct point maxpot = {320, 200};

    struct rect screen;

    double dist, sqrt(dist);
    
    printf("%d,%d", pt.x, pt.y);
    printf("%d", screen.pt1.x);

    dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);

    return 0;
}