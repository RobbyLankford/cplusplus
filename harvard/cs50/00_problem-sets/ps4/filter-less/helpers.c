#include "helpers.h"
#include <math.h>

int get_min(int x, int y);
int get_max(int x, int y);

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

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int red = image[i][j].rgbtRed;
            int green = image[i][j].rgbtGreen;
            int blue = image[i][j].rgbtBlue;

            int sepia_red = (int) round((0.393 * red) + (0.769 * green) + (0.189 * blue));
            int sepia_green = (int) round((0.349 * red) + (0.686 * green) + (0.168 * blue));
            int sepia_blue = (int) round((0.272 * red) + (0.534 * green) + (0.131 * blue));

            image[i][j].rgbtRed = get_min(255, sepia_red);
            image[i][j].rgbtGreen = get_min(255, sepia_green);
            image[i][j].rgbtBlue = get_min(255, sepia_blue);
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

            // Want one row above and below and one column to left and right of each pixel
            // Need to handle edge cases where pixels are on the edge of the image
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