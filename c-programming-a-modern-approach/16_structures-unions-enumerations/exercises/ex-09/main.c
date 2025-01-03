#include <stdio.h>
#include <stdbool.h>

struct color
{
    int red;
    int green;
    int blue;
};

// (a) returns a color structure containing the specified values
struct color make_color(int red, int green, int blue)
{
    if (red < 0)
        red = 0;
    else if (red > 255)
        red = 255;
    
    if (green < 0)
        green = 0;
    else if (green > 255)
        green = 255;
    
    if (blue < 0)
        blue = 0;
    else if (blue > 255)
        blue = 255;
    
    return (struct color) {red, green, blue};
}

// (b) returns value of red
int getRed(struct color c)
{
    return c.red;
}

// (c) returns true if the corresponding members of the colors are equal
bool equal_color(struct color color1, struct color color2)
{
    return (color1.red == color2.red && color1.green == color2.green && color1.blue == color2.blue);
}

// (d) returns a color structure that represents a brighter version of the color
struct color brighter(struct color c)
{
    if (c.red + c.green + c.blue == 0)
        return (struct color) {3, 3, 3};
    
    if (c.red > 0 && c.red < 3)
        c.red = 3;
    if (c.green > 0 && c.green < 3)
        c.green = 3;
    if (c.blue > 0 && c.blue < 3)
        c.blue = 3;
    
    c.red = (int) c.red / 0.7;
    c.green = (int) c.green / 0.7;
    c.blue = (int) c.blue / 0.7;

    if (c.red > 255)
        c.red = 255;
    if (c.green > 255)
        c.green = 255;
    if (c.blue > 255)
        c.blue = 255;
    
    return c;
}

// (e) returns a color structure that represents a darker version of the color
struct color darker(struct color c)
{
    c.red = (int) c.red * 0.7;
    c.green = (int) c.green * 0.7;
    c.blue = (int) c.blue * 0.7;

    return c;
}

int main(void)
{
    return 0;
}