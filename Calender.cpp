#include "main.hpp"

// User inputs a date (mm.yyyy)
void Date::get_date()
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

void Date::print_calender(int month)
{
    int findDay = 0;
    int startDay = 0;
    vector<string> weekday = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    cout << weekday[0] << "\t" << weekday[1] << "\t" << weekday[2] << "\t" << weekday[3] << "\t";
    cout << weekday[4] << "\t" << weekday[5] << "\t" << weekday[6] << "\n";

    for (int i = 1; i <= month; i++)
    {
        findDay += daysInMonth[i];
    }

    if (month == 1)
        startDay = 0;
    else
        startDay = (findDay-daysInMonth[month]) % 7;
   
    // So that the days are printed on the correct place in calender the first week 
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
    
    // prints calender
    for (int i = 1; i <= daysInMonth[month]; i++)
    {
        cout << i << "\t";
        if ((startDay+i) % 7 == 0)
            cout << "\n";

    }
    cout << "\n\n\n";
}


