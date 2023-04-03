#include <iostream>
#include <iomanip>

int main()
{
    // Nested loops often represent a 2-D data structure (tabular data)
    const size_t ROWS {12};
    const size_t COLS {3};

    // Using For Loops
    std::cout << "Tabular data visualization with nested for loops:" << std::endl;

    for (size_t row {0}; row < ROWS; row++)
    {
        for (size_t col {0}; col < COLS; col++)
        {
            std::cout << "Row: " << std::setw(2) << row << ", Col: " << std::setw(2) << col << std::endl;
        }
    }

    std::cout << "\n-------\n" << std::endl;

    // Using While Loops
    std::cout << "Tabular data visualization with nested while loops:" << std::endl;

    size_t row {0};
    size_t col {0};

    while (row < ROWS)
    {
        while (col < COLS)
        {
            std::cout << "Row: " << std::setw(2) << row << ", Col: " << std::setw(2) << col << std::endl;
            col++;
        }

        col = 0;
        row++;
    }

    std::cout << "\n-------\n" << std::endl;

    // Using Do-While Loops
    std::cout << "Tabular data visualization with nested do-while loops:" << std::endl;

    row = 0;
    col = 0;

    do
    {
        do
        {
            std::cout << "Row: " << std::setw(2) << row << ", Col: " << std::setw(2) << col << std::endl;
            col++;
        } while (col < COLS);
        
        col = 0;
        row++;
    } while (row < ROWS);

    return 0;
}