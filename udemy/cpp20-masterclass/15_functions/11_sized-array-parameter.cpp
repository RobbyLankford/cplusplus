#include <iostream>

/*
    The complier WILL NOT enforce any sizes given to input arrays
*/

const int size {5};

double sum(double scores[size], size_t count);

int main()
{   
    // Using fewer than 5 is fine, no complier error or warning
    double student_scores1[] {10.0, 20.0, 30.0, 40.0}; 
    double sum_result = sum(student_scores1, size);
    
    std::cout << "The result is: " << sum_result << std::endl;

    // Using more than 5 is also fine, but the function will only use the first 5 values
    double student_scores2[] {10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0};
    sum_result = sum(student_scores2, size);

    std::cout << "The result is: " << sum_result << std::endl;

    return 0;
}

double sum(double scores[size], size_t count)
{
    double sum {0};
    for (size_t i {0}; i < count; i++)
    {
        sum += scores[i];
    }

    return sum;
}