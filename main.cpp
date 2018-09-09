/* Calender for planning workload and assignments at university
Mostly done to learn functions and classes and try to make something
complete from scratch
#include <chrono>
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

// Check lb-stuff.com/user-input

class Date
{
public:
    int month, year, startDay;
    int daysInMonth[13];
    int get_date();
    bool isLeapYear(int);
    void set_daysInMonth();
    int findDayOfWeek(int);
    //int print_calendar(int, int);
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

int Date::findDayOfWeek(int month)
{
    vector<string> weekday = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    cout << weekday[0] << "\t" << weekday[1] << "\t" << weekday[2] << "\t" << weekday[3]
         << "\t" << weekday[4] << "\t" << weekday[5] << "\t" << weekday[6] << "\n";
    int findDay = 0;
    int startDay = 0;
    for (int i = 1; i <= month; i++)
    {
        findDay += daysInMonth[i];
    }
    if (month == 1)
        startDay = 0;
    else
        startDay = findDay % 7;
    
    switch (month) {
        case 2:  cout << setw(startDay*8+1); break; 
        case 3:  cout << setw(startDay*8+1); break; 
        case 4:  cout << setw(startDay*8+1); break; 
        case 5:  cout << setw(startDay*8+1); break; 
        case 6:  cout << setw(startDay*8+1); break; 
        case 7:  cout << setw(startDay*8+1); break; 
        case 8:  cout << setw(startDay*8+1); break; 
        case 9:  cout << setw(startDay*8+1); break; 
        case 10: cout << setw(startDay*8+1); break; 
        case 11: cout << setw(startDay*8+1); break; 
        case 12: cout << setw(startDay*8+1); break; 
    }
    // 02, 03, 11 working    
    // And now 02, 10, 
    for (int i = 1; i <= daysInMonth[month]; i++)
    {
        cout << i << "\t";
        for (int y = 0; y <= 6; y++)
        {
            size_t found = weekday[y].find(weekday[6]);
            if (found != string::npos)
            {
                cout << "\n";
            }
        }
    }

        /*
        if (i <= 7 && i % (startDay+1) == 0) 
        {
            cout << "\n";
        }
        else if (i <= 14 && i % (startDay+8) == 0)
        {
            cout << "\n";
        }
        else if (i <= 21 && i % (startDay+15)  == 0)
        {
            cout << "\n";
        }
        
        else if (i <= 28 && i % (startDay+22) == 0)
        {
            cout << "\n";
        }
        */

    cout << "\nStartDay: " << startDay << "\nFindDay: " << findDay;
}
/*
int Date::print_calendar(int month, int startDay)
{
}
*/
int main() 
{
    Date date;
    date.set_daysInMonth();
    date.get_date();  
    if (date.isLeapYear(date.year))
        date.daysInMonth[2] = 29;
    date.findDayOfWeek(date.month);
//    date.print_calendar(date.month, date.startDay);
    cout << "\nDays in month: " << date.daysInMonth[date.month];
    return 0;
}
    
