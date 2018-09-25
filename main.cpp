#include "main.hpp"

int main() 
{
    Date date;
    Scheduler schedule;
    date.set_daysInMonth();
    date.get_date();  
    if (date.isLeapYear(date.year))
        date.daysInMonth[2] = 29;
    date.print_calender(date.month);
    schedule.options(date.month, date.year);
//    schedule.print_daily_plans(schedule.day, date.month, date.year);
    
    return 0;
}
 
