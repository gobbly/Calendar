/* Calender for planning workload and assignments at university
Mostly done to learn functions and classes and try to make something
complete from scratch
*/

#include <iostream>
#include <chrono>
#include <sstream>
using namespace std;

// Check lb-stuff.com/user-input

class Date
{
public:
    int month, year;
    int daysInMonth[13];
    int get_date();
    bool isLeapYear(int);
    void set_daysInMonth();
    int print_calendar(int);
};

// User inputs a date (dd.mm.yyyy)
int Date::get_date()
{
    string line;
    // Need to implement day aswell 
    cout << "Enter date(mm.yyyy): ";
    getline(std::cin, line, '.');
    istringstream(line) >> month;
    getline(cin, line);
    istringstream(line) >> year;
    cout << "\n";
}

// Check to see if year is leapYear
bool Date::isLeapYear(int year)
{
   if (year % 4 != 0)
       return false;
   else if (year % 100 != 0)
       return true;
   else if (year % 400 != 0)
       return false;
   else
       return true;
}

// Set the correct amount of days for each month
//  TODO: Improve
void Date::set_daysInMonth()
{
    // OBS! [0] is not used, watch out for undefined behavior.
    daysInMonth[0] = 0;
    daysInMonth[1] = 31;
    daysInMonth[2] = 28;
    daysInMonth[3] = 31;
    daysInMonth[4] = 30;
    daysInMonth[5] = 31;
    daysInMonth[6] = 30;
    daysInMonth[7] = 31;
    daysInMonth[8] = 31;
    daysInMonth[9] = 30;
    daysInMonth[10] = 31;
    daysInMonth[11] = 30;
    daysInMonth[12] = 31;
}

int Date::print_calendar(int month)
{
    for (int i = 1; i <= daysInMonth[month]; i++)
    {
        cout << i << "\t";
        if (i % 7 == 0)
            cout << "\n";
    }

}

int main() 
{
    Date date;
    date.set_daysInMonth();
    date.get_date();  
    if (date.isLeapYear(date.year))
        date.daysInMonth[2] = 29;
    date.print_calendar(date.month);
    cout << "\nDays in month: " << date.daysInMonth[date.month];
    return 0;
}
    
