#include <iostream>

/*
    Values to arguments that are included by default when function is called.
    Removes need to pass values when calling functions if they are used often.
    Only need to specify in the function declaration, not in the definition.
*/

void compute(int age = 27, double weight = 72.4, double distance = 12.5);
void greet_teacher(std::string_view name = "Teacher", int homeworks = 12, int exams = 4, 
                   double pass_rate = 0.5, std::string_view dep = "Computer Science");

int main()
{
    // Call compute with no arguments (all defaults)
    compute();

    // Call compute with other arguments, overwriting defaults
    compute(25, 100.3, 7.0);

    std::cout << std::endl;

    // More function calls
    greet_teacher();
    greet_teacher("Mr. Bean");
    greet_teacher("Mr. Smith", 7);
    greet_teacher("Mr. Walker", 7, 3);
    greet_teacher("Mr. Johnson", 10, 7, 0.7);
    greet_teacher("Mr. Williams", 7, 3, 0.3, "Mathematics");

    return 0;
}

void compute(int age, double weight, double distance)
{
    std::cout << "Doing computations on age: " << age 
              << ", weight: " << weight 
              << ", and distance: " << distance << std::endl;
}

void greet_teacher(std::string_view name, int homeworks, int exams, double pass_rate, std::string_view dept)
{
    std::cout << "Good morning " << name << "!" << std::endl;
    std::cout << "In the past semester, we had " << homeworks << "homeworks and "
              << exams << " exams. The pass rate was around: " << pass_rate << std::endl;
    std::cout << "The best performing department is: " << dept << std::endl;
    std::cout << std::endl;
}