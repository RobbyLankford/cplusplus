#include <iostream>

int main()
{
    // The comma operator combines two or more expressions into a single expression
    // The value of the operation is the value of its right-most operand

    int increment {5};
    
    int number1 {10};
    int number2 {20};
    int number3 {25};

    int result = (number1 *= ++increment, number2 - (++increment), number3 += ++increment);

    // 10 * (5 + 1) = 10 * 6 = 60
    std::cout << "number1: " << number1 << std::endl; 

    // 20, because nothing was ever assigned to number2 (but increment is now 6 + 1 = 7)
    std::cout << "number2: " << number2 << std::endl; 

    // 25 + (7 + 1) = 25 + 8 = 33
    std::cout << "number3: " << number3 << std::endl; 

    // Variable number3 is assigned to result
    std::cout << "result: " << result << std::endl;

    return 0;
}