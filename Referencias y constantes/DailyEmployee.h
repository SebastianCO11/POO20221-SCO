#ifndef DAILYEMPLOYEE
#define DAILYEMPLOYEE

#include <string>
#include "Employee.h"

class DailyEmployee : public Employee{
    private:
        double dailyWage{};
        double day{};

    public:
        static const int daysPerWeek = 5;

        DailyEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0);

        void setDailyWage( double );
        double getDailyWage() const;

        void setDays( double );
        double getDays() const;

        double earnings() const override;
        void print() const override;
};


#endif
