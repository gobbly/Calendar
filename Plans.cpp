#include "main.hpp"

using namespace std;

void Scheduler::options(int month, int year)
{
    cout << "\n What do you want to do?\n";
    cout << "1. Add plans\n";
    cout << "2. Change plans\n";
    cout << "3. Delete plans\n";
    cout << "4. Print plans for week\n";
    cout << "5. Print daily plans\n";
    cin >> choice;
    switch(choice) {
        case 1: add_plans(month, year); break;
//        case 2: change_plans(day, month, year); break;
//        case 3: delete_plans(day, month, year); break;
//        case 4: print_weekly_plans(day, month, year); break;
//        case 5: print_daily_plans(day, month, year); break;
    }

}

struct Time {
    int hour, minute;
};

void Scheduler::get_time()
{
    cout << "Enter starting time(<hour> <minute>): ";
    Time start, end;
    cin >> start.hour; 
    cin >> start.minute;
    cout << "Enter ending time(<hour> <minute>): ";
    cin >> end.hour;
    cin >> end.minute;
    vector<int> time = {8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
    
//    int tempHours = end.hour - start.hour;
    for (unsigned int i = 0; i < time.size(); i++) {
        if (start.hour == time[i]) {
            cout << "\n" << start.hour << ":";
            if (start.minute < 10) cout << '0';
            cout << start.minute;
            cout << "-" << end.hour << ":";
            if (end.minute < 10) cout << '0';
            cout << end.minute << "\n";
            cout << "\n" << plans;
        }
    
    }
}

void Scheduler::add_plans(int month, int year)
{
    cout << "Enter day: "; cin >> day;
    cout << "\nYou want to add plans for " << day << "." << month << "." << year << "\n";
    get_time();
    cout << "What are your plans?\n";
    cin >> plans;
}


/*vector<string> time = {"08:00", "09:00", "10:00", "11:00", "12:00", "13:00"
                           "14:00", "15:00", "16:00", "17:00", "18:00", "19:00"
                           "20:00", "21:00", "22:00", "23:00", "24:00"};
    i
void Scheduler::change_plans(int day, int month, int year)
{
    cout << "CHANGE PLANS\n";
}
void Scheduler::delete_plans(int day, int month, int year)
{
    cout << "DELETE PLANS\n";
}
void Scheduler::print_weekly_plans()
{
    cout << "PRINT WEEKLY\n";
}
void Scheduler::print_daily_plans(int day, int month, int year)
{
}
*/
