#include <string>

class Scheduler
{
public:
    int day, month, year;
    int start_time, end_time;
    int choice;
    std::string plans;
    void options(int, int);
    void get_time();
    void add_plans(int, int);
    void print_weekly_plans();
    void print_daily_plans();
};
