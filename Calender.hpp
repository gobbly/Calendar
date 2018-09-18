class Date
{
public:
    int month, year;
    int daysInMonth[13];
    void get_date();
    bool isLeapYear(int);
    void set_daysInMonth();
    void print_calender(int);
};

