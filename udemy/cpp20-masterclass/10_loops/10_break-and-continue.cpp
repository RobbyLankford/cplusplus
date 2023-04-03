#include <iostream>

int main()
{
    // `break`: breaks out of the loop immediately and go to code after the loop
    // `continue`: skips a single iteration of the loop

    const size_t COUNT {20};

    // Using a for loop
    for (size_t i {0}; i < COUNT; i++)
    {
        if (i == 5)
        {
            // Skip this iteration
            continue;
        }

        if (i == 11)
        {
            // Break out of the loop
            break;
        }

        std::cout << "i: " << i << std::endl;
    }

    std::cout << "For loop done!" << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Using a while loop
    size_t i {0};

    while (i < COUNT)
    {
        if (i == 5)
        {
            // Very important to increment i, otherwise an infinite loop happens
            i++;
            
            // Skip this iteration
            continue;
        }

        if (i == 11)
        {
            // Break out of the loop
            break;
        }

        std::cout << "i: " << i << std::endl;
        i++;
    }

    std::cout << "While loop done!" << std::endl;

    std::cout << "\n----------\n" << std::endl;

    // Using a do while loop
    i = 0;

    do
    {
        if (i == 5)
        {
            // Very important to increment i, otherwise an infinite loop happens
            i++;

            // Skip this iteration
            continue;
        }

        if (i == 11)
        {
            // Break out of the loop
            break;
        }

        std::cout << "i: " << i << std::endl;
        i++;
    } while (i < COUNT);

    std::cout << "Do-while loop done!" << std::endl;
    
    return 0;
}