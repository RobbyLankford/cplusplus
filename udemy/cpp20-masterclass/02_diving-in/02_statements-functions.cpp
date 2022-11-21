#include <iostream>

int addNumbers(int first_number, int second_number) 
{
    int sum = first_number + second_number;
    return sum;
}

int main() 
{
    int first_number {13};
    int second_number {7};

    std::cout << "First number: " << first_number << std::endl; // 13
    std::cout << "Second number: " << second_number << std::endl; // 7

    int sum = first_number + second_number;
    std::cout << "Sum: " << sum << std::endl; // 20

    sum = addNumbers(first_number, second_number);
    std::cout << "Sum: " << sum << std::endl; // 20

    std::cout << "Sum: " << addNumbers(30, 54) << std::endl; // 84

    return 0;
}