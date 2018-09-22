#include <string>

class Scheduler
{
public:
    int day, month, year;
    int start_time, end_time;
    int choice;
    std::string plans;
    void options();
    void add_plans(int, int);
    void print_weekly_plans();
    void print_daily_plans();
};
