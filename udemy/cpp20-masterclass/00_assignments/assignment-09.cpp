#include <iostream>
#include <iomanip>

int main()
{
    /*
        This program prompts the user for a year and the first weekday of the year.
        It then prints out the calendar for a specified year.
    */
    
    const unsigned int date_width {6};
    
    unsigned int year;
    unsigned int first_day;
    unsigned int num_days;
    unsigned int month_start;

    unsigned int week_day {0};
    
    std::cout << "Enter a year: ";
    std::cin >> year;

    std::cout << "Enter the first day of the year [1: Monday, ..., 7: Sunday] ";
    std::cin >> first_day;
    
    std::cout << std::endl;
    std::cout << "Calendar for " << year << std::endl;

    month_start = first_day;

    // Print out information for each month
    for (int month = 1; month <= 12; month++)
    {
        // 1. Print out month name and set the number of days
        switch (month)
        {
            case 1:
                std::cout << "--January " << year << "--" << std::endl;
                num_days = 31;
                break;

            case 2:
                std::cout << "--February " << year << "--" << std::endl;

                // Leap years
                if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
                {
                    num_days = 29;
                }
                else
                {
                    num_days = 28;
                }

                break;
            
            case 3:
                std::cout << "--March " << year << "--" << std::endl;
                num_days = 31;
                break;
            
            case 4:
                std::cout << "--April " << year << "--" << std::endl;
                num_days = 30;
                break;
            
            case 5:
                std::cout << "--May " << year << "--" << std::endl;
                num_days = 31;
                break;
            
            case 6:
                std::cout << "--June " << year << "--" << std::endl;
                num_days = 30;
                break;
            
            case 7:
                std::cout << "--July " << year << "--" << std::endl;
                num_days = 31;
                break;
            
            case 8:
                std::cout << "--August " << year << "--" << std::endl;
                num_days = 31;
                break;
            
            case 9:
                std::cout << "--September " << year << "--" << std::endl;
                num_days = 30;
                break;
            
            case 10:
                std::cout << "--October " << year << "--" << std::endl;
                num_days = 31;
                break;
            
            case 11:
                std::cout << "--November " << year << "--" << std::endl;
                num_days = 30;
                break;
            
            case 12:
                std::cout << "--December " << year << "--" << std::endl;
                num_days = 31;
                break;
        }

        // 2. Print day name headers for current month
        std::cout << std::setw(date_width) << "Mon"
                  << std::setw(date_width) << "Tue"
                  << std::setw(date_width) << "Wed"
                  << std::setw(date_width) << "Thu"
                  << std::setw(date_width) << "Fri"
                  << std::setw(date_width) << "Sat"
                  << std::setw(date_width) << "Sun" << std::endl;
        
        // 3. Print empty spaces for days not in start of month (may not be any)
        for (unsigned int i {1}; i < month_start; i++)
        {
            // Print a blank day
            std::cout << std::setw(date_width) << "";
            week_day++;

            if (week_day == 7)
            {
                // Move to the next week
                std::cout << std::endl;
                week_day = 0;
            }
        }

        // 4. Print the actual days that are in the month
        for (unsigned int i {1}; i <= num_days; i++)
        {
            // Print the day's date
            std::cout << std::setw(date_width) << i;
            week_day++;

            if (week_day == 7)
            {
                // Move to the next week
                std::cout << std::endl;
                week_day = 0;
            }
        }

        // 5. Prepare for the next month to be printed
        month_start = week_day + 1;
        week_day = 0;
        std::cout << "\n\n";
    }

    return 0;
}