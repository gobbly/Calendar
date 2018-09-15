/* Calender for planning workload and assignments at university
Mostly done to learn functions and classes and try to make something
complete from scratch
*/

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Date
{
public:
    int day, month, year, startDay;
    int daysInMonth[12];
    void get_date();
    bool isLeapYear(int);
    void set_daysInMonth();
    void print_calender(int);
    void add_plans(int, int, int);
    void change_plans(int, int, int);
    void delete_plans(int, int, int);
};

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

void Date::add_plans(int day, int month, int year)
{
    cout << "\nYou want to add plans for " << day << "." << month << "." << year << "\n";
}
void Date::change_plans(int day, int month, int year)
{
    cout << "\nYou want to change plans for " << day << "." << month << "." << year << "\n";
}
void Date::delete_plans(int day, int month, int year)
{
    cout << "\nYou want to delete plans for " << day << "." << month << "." << year << "\n";
}

int main() 
{
    Date date;
    date.set_daysInMonth();
    date.get_date();  
    if (date.isLeapYear(date.year))
        date.daysInMonth[2] = 29;
    date.print_calender(date.month);
    cout << "Enter a day of the month: ";
    cin >> date.day;
    cout << "\nWhat do you want to do?\n";
    cout << "1. Add plans\n";
    cout << "2. Change plans\n";
    cout << "3. Delete plans\n";
    cout << "4. Print calender again\n";
    cout << "5. Enter new month\n";
    cout << "6. Enter new day\n";
    cout << "Enter option: ";
    int options;
    cin >> options;
    switch(options) {
        case 1: date.add_plans(date.day, date.month, date.year); break; 
        case 2: date.change_plans(date.day, date.month, date.year); break; 
        case 3: date.delete_plans(date.day, date.month, date.year); break; 
        case 4: date.print_calender(date.month); break; 
    }
    
    return 0;
}
    
