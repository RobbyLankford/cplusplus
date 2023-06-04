#include "helpers.h"
#include <math.h>

int get_min(int x, int y);
int get_max(int x, int y);
double calc_channel_val(int x, int y);

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int red = image[i][j].rgbtRed;
            int green = image[i][j].rgbtGreen;
            int blue = image[i][j].rgbtBlue;

            int grey = (int) round((red + green + blue) / 3.0);

            image[i][j].rgbtRed = grey;
            image[i][j].rgbtGreen = grey;
            image[i][j].rgbtBlue = grey;
        }
    }

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        RGBTRIPLE temp[1][width];

        for (int j = 0; j < width; j++)
        {
            temp[0][j].rgbtBlue = 0;
            temp[0][j].rgbtGreen = 0;
            temp[0][j].rgbtRed = 0;
        }

        for (int j = 0; j < width; j++)
        {
            temp[0][j] = image[i][width - j - 1];
        }

        for (int j = 0; j < width; j++)
        {
            image[i][j] = temp[0][j];
        }
    }

    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];

    // Want to calculate the blur from a copy of the image before overwriting image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            temp[i][j] = image[i][j];
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int red = 0;
            int green = 0;
            int blue = 0;
            int pixels = 0;

            for (int row = get_max(0, i - 1); row <= get_min(height - 1, i + 1); row++)
            {
                for (int col = get_max(0, j - 1); col <= get_min(width - 1, j + 1); col++)
                {
                    red += temp[row][col].rgbtRed;
                    green += temp[row][col].rgbtGreen;
                    blue += temp[row][col].rgbtBlue;

                    pixels++;
                }
            }

            image[i][j].rgbtRed = (int) round(red / (float) pixels);
            image[i][j].rgbtGreen = (int) round(green / (float) pixels);
            image[i][j].rgbtBlue = (int) round(blue / (float) pixels);
        }
    }

    return;
}

// Detect edges
void edges(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp[height][width];

    // Want to calculate the edges from a copy of the image before overwriting image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            temp[i][j] = image[i][j];
        }
    }

    // Matrices used for calculating edges in X and Y edges
    int GX[3][3] = { {-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1} };
    int GY[3][3] = { {-1, -2, -1}, {0, 0, 0}, {1, 2, 1} };

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int red_x = 0; int green_x = 0; int blue_x = 0;
            int red_y = 0; int green_y = 0; int blue_y = 0;

            // Look one pixel to the left, right, up, and down from each pixel
            for (int row = i - 1; row < i + 2; row++)
            {
                for (int col = j - 1; col < j + 2; col++)
                {
                    int red = 0; int green = 0; int blue = 0;

                    // Hacky way to select from a 3x3 matrix regardless of image size
                    int GX_current = GX[row - i + 1][col - j + 1];
                    int GY_current = GY[row - i + 1][col - j + 1];

                    // If we cross over an edge or corner, keep RGB as zero
                    if (row >= 0 && col >= 0 && row < height && col < width)
                    {
                        red = temp[row][col].rgbtRed;
                        green = temp[row][col].rgbtGreen;
                        blue = temp[row][col].rgbtBlue;
                    }

                    red_x += red * GX_current;
                    red_y += red * GY_current;
                    green_x += green * GX_current;
                    green_y += green * GY_current;
                    blue_x += blue * GX_current;
                    blue_y += blue * GY_current;
                }
            }

            image[i][j].rgbtRed = get_min(255, (int) calc_channel_val(red_x, red_y));
            image[i][j].rgbtGreen = get_min(255, (int) calc_channel_val(green_x, green_y));
            image[i][j].rgbtBlue = get_min(255, (int) calc_channel_val(blue_x, blue_y));
        }
    }

    return;
}


int get_min(int x, int y)
{
    if (x > y)
    {
        return y;
    }
    else
    {
        return x;
    }
}

int get_max(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

double calc_channel_val(int x, int y)
{
    int x_sq = pow(x, 2);
    int y_sq = pow(y, 2);

    double dist = round(sqrt((double) x_sq + y_sq));

    return dist;
}