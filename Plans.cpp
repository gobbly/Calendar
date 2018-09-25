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
    cout << start.hour << ":" << start.minute << "\n";
    cout << end.hour << ":" << end.minute << "\n";
}

void Scheduler::add_plans(int month, int year)
{
//    vector<string> time;
    cout << "HEY YOU\n";
    cout << "Enter day: "; cin >> day;
    cout << "\nYou want to add plans for " << day << "." << month << "." << year << "\n";
    get_time();
    cout << "What are your plans?\n";
    cin >> plans;
}
/*
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
void Scheduler::print_daily_plans()
{
    cout << "PRINT DAILY\n";
}
*/
