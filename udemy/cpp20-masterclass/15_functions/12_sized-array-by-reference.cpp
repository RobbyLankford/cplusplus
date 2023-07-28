#include <iostream>

/*
    The complier WIIL enforce sizes given to input arrays
*/

const int size {10};

// scores passed by reference and no longer need an argument for size of the array
double sum(const double (&scores)[size]);

int main()
{
    // Must use length 10 array
    double student_scores[size] {0.0, 10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0};
    double sum_result = sum(student_scores);

    std::cout << "Result is " << sum_result << std::endl;

    return 0;
}

double sum(const double (&scores)[size])
{
    double sum {0};
    for (size_t i {0}; i < std::size(scores); i++)
    {
        sum += scores[i];
    }

    return sum;
}