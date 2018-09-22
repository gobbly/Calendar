#include "main.hpp"

using namespace std;

void Scheduler::options()
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
        /*
        case 2: change_plans(day, month, year); break;
        case 3: delete_plans(day, month, year); break;
        case 4: print_weekly_plans(day, month, year); break;
        case 5: print_daily_plans(day, month, year); break;
        */
    }

}

void Scheduler::add_plans(int month, int year)
{
//    vector<string> time;
    cout << "You want to add plans: \n";
    cout << "Enter start time of your activity: ";
    cin >> start_time; cout << "\n";
    cout << "Enter end time of your activity: ";
    cin >> end_time; cout << "\n";
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
