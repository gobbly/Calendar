#include "main.hpp"

int main() 
{
    Date date;
    date.set_daysInMonth();
    date.get_date();  
    if (date.isLeapYear(date.year))
        date.daysInMonth[2] = 29;
    date.print_calender(date.month);
    
    return 0;
}
 
