#include <iostream>

int main()
{
    int day;
    int delta;
    int past;

    std::cout << "Which day is today? [1: Monday, 2: Tuesday, ..., 7: Sunday]: " << std::endl;
    std::cin >> day;

    // Only Monday (1) through Sunday (7) are valid
    if (day < 1 || day > 7)
    {
        std::cout << day << " is not a valid day!" << std::endl;
        return 1;
    }

    std::cout << "How many days have passed up to today: " << std::endl;
    std::cin >> delta;

    // Print out what day it currently is
    switch (day)
    {
        case 1:
            std::cout << "Today is Monday" << std::endl;
            break;
        
        case 2:
            std::cout << "Today is Tuesday" << std::endl;
            break;
        
        case 3:
            std::cout << "Today is Wednesday" << std::endl;
            break;
        
        case 4:
            std::cout << "Today is Thursday" << std::endl;
            break;
        
        case 5:
            std::cout << "Today is Friday" << std::endl;
            break;
        
        case 6:
            std::cout << "Today is Saturday" << std::endl;
            break;
        
        case 7:
            std::cout << "Today is Sunday" << std::endl;
            break;
    }

    // Remove full weeks from days in the past
    // This only gets the difference in the days of the week
    past = day - (delta % 7);

    // Make sure it is a valid day of the week
    if (past < 1)
    {
        past += 7;
    }

    // Print out what day of the week it was in the past
    switch (past)
    {
        case 1:
            std::cout << delta << " day(s) ago would have been a Monday" << std::endl;
            break;
        
        case 2:
            std::cout << delta << " day(s) ago would have been a Tuesday" << std::endl;
            break;
        
        case 3:
            std::cout << delta << " day(s) ago would have been a Wednesday" << std::endl;
            break;
        
        case 4:
            std::cout << delta << " day(s) ago would have been a Thursday" << std::endl;
            break;
        
        case 5:
            std::cout << delta << " day(s) ago would have been a Friday" << std::endl;
            break;
        
        case 6:
            std::cout << delta << " day(s) ago would have been a Saturday" << std::endl;
            break;
        
        case 7:
            std::cout << delta << " day(s) ago would have been a Sunday" << std::endl;
            break;
    }

    return 0;
}