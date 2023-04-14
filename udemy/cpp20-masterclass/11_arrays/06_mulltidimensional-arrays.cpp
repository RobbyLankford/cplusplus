#include <iostream>

int main()
{
    // Store data in arrays with dimensions greater than 1

    // 2-D array (such as tabular data)
    /*
        2-D array object (such as tabular data)
        4 rows x 3 cols = 12 ints at 4 bytes each = 48 bytes in memory
    */
    int packages [4][3] {
        { 1, 2, 3 },
        { 4, 5, 6 },
        { 7, 8, 9 },
        { 10, 11, 12 }
    };

    std::cout << "Size of packages: " << sizeof(packages) << std::endl;
    std::cout << "Size of outer part of packages: " << std::size(packages) << std::endl;

    std::cout << std::endl;

    // Print out using nested loops
    for (size_t i {0}; i < 4; i++)
    {
        for (size_t j {0}; j < 3; j++)
        {
            std::cout << "packages[" << i << "][" << j << "]: " << packages[i][j] << std::endl;
        }
    }

    std::cout << std::endl;

    // Do not want to use hard-coded values
    for (size_t i {0}; i < std::size(packages); i++)
    {
        for (size_t j {0}; j < std::size(packages[i]); j++)
        {
            std::cout << "packages[" << i << "][" << j << "]: " << packages[i][j] << std::endl;
        }
    }

    std::cout << "\n----------\n" << std::endl;

    // Higher-dimensional arrays are initiated and accessed in the same way, with more loops
    int house_block [7] [5] [3] {
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15} 
        },
        {
            {16,17,18},{19,20,21},{22,23,24},{25,26,27},{28,29,30}  
        },
        {
            { 31,32,33},{34,35,36},{37,38,39},{40,41,42},{43,44,45} 
        },
        {
             {46,47,48},{49,50,51},{52,53,54},{55,56,57},{58,59,60}  
        },
        {
             {61,62,63},{64,65,66},{67,68,69},{70,71,72},{73,74,75} 
        },
        {
            {76,77,78},{79,80,81},{82,83,84},{85,86,87},{88,89,90}  
        },
        {
             {91,92,93},{94,95,96},{97,98,99},{100,101,102},{103,104,105} 
        }
    };
    
    for (size_t i {0}; i < std::size(house_block); i++)
    {
        for (size_t j {0}; j < std::size(house_block[i]); j++)
        {
            for (size_t k {0}; k < std::size(house_block[i][j]); k++)
            {
                std::cout << "packages[" << i << "][" << j << "][" << k << "]: " << house_block[i][j][k] << std::endl;
            }
        }
    }

    std::cout << "\n----------\n" << std::endl;

    // Can omit one of the dimensions and the complier will figure it out
    const size_t num_cols {3};

    int packages2 [] [num_cols] {
        // Can add as many triplets as we want
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12},
        {13, 14, 15}
    };

    std::cout << "Size of packages2: " << sizeof(packages2) << std::endl;
    std::cout << "Size of outer part of packages2: " << std::size(packages2) << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Compiler will auto-fill any dimensions that have fewer amounts than specified
    int house_block2 [] [5] [4] {
        {
            {1, 2, 3}, {4}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}
        },
        {
            {16, 17, 18}, {19, 20, 21}, {22, 23, 24}, {25, 26, 27}, {28, 29, 30}
        },
        {
            {31, 32, 33}, {34, 35, 36}, {37, 38, 39}, {40, 41, 42}, {43, 44, 45}
        },
        {
            {46, 47, 48}, {49, 50, 51}, {52, 53, 54}, {55, 56, 57}
        }
    };

    for (size_t i {0}; i < std::size(house_block2); i++)
    {
        for (size_t j {0}; j < std::size(house_block2[i]); j++)
        {
            for (size_t k {0}; k < std::size(house_block2[i][j]); k++)
            {
                std::cout << "packages[" << i << "][" << j << "][" << k << "]: " << house_block2[i][j][k] << std::endl;
            }
        }
    }

    std::cout << std::endl;

    // Modify the data by accessing the individual array element
    house_block2[0][2][1] = 1021;

    for (size_t i {0}; i < std::size(house_block2); i++)
    {
        for (size_t j {0}; j < std::size(house_block2[i]); j++)
        {
            for (size_t k {0}; k < std::size(house_block2[i][j]); k++)
            {
                std::cout << "packages[" << i << "][" << j << "][" << k << "]: " << house_block2[i][j][k] << std::endl;
            }
        }
    }

    return 0;
}