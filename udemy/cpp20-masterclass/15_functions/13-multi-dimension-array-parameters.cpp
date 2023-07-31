#include <iostream>

/*
    Having multiple dimensions to an array will need an additional for loop to access.
    Can only pass at most one dimension as unknown.
    If one dimension of the array is not specified, pass it as an argument.
*/

double sum2d(const double array[][3], size_t size);
double sum3d(const double array[][3][2], size_t size);

int main()
{
    double weights2d[][3] {
        {10.0, 20.0, 30.0},
        {40.0, 50.0, 60.0},
        {70.0, 80.0, 90.0},
        {100.0, 110.0, 120.0}
    };

    double weights3d[][3][2] {
        {
            {10, 20},
            {30, 40},
            {50, 60},
        },
        {
            {70, 80},
            {90, 100},
            {110, 120}
        }
    };

    // Using std::size will get first dimension of array
    double result2d = sum2d(weights2d, std::size(weights2d));
    std::cout << "2D Array Sum: " << result2d << std::endl;

    // Using std::size will get first dimension of array
    double result3d = sum3d(weights3d, std::size(weights3d));
    std::cout << "3D Array Sum: " << result3d << std::endl;

    return 0;
}

double sum2d(const double array[][3], size_t size)
{
    double sum {};

    for (size_t i {0}; i < size; i++)
    {
        for (size_t j {0}; j < 3; j++)
        {
            // Recommend using array notation
            sum += array[i][j];

            // Could use pointer arithmetic, but gets confusing
            //sum += *(*(array + i) + j)
        }
    }

    return sum;
}

double sum3d(const double array[][3][2], size_t size)
{
    double sum {0};

    for (size_t i {0}; i < size; i++)
    {
        for (size_t j {0}; j < 3; j++)
        {
            for (size_t k {0}; k < 2; k++)
            {
                // Recommend using array notation
                sum += array[i][j][k];

                // Could use pointer arithmetic, but gets confusing
                //sum += *(*(*(array + i) + j) + k);
            }
        }
    }

    return sum;
}