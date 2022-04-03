#include <iostream>
#include "DailyEmployee.h"

DailyEmployee::DailyEmployee(const string &firstN, const string &lastN, const string &socialSN, double daysWorked, double wage)
: Employee(firstN, lastN, socialSN){
    setDailyWage(wage);
    setDays(daysWorked);
}

void DailyEmployee::setDailyWage( double wage ){
    dailyWage = ( wage < 0.0 ? 0.0 : wage );
}

void DailyEmployee::setDays( double daysWorked ){
    day = ((( daysWorked >= 2.0 ) && ( daysWorked <= daysPerWeek )) ? daysWorked : 0.0 );
}

double DailyEmployee::getDailyWage() const {
    return dailyWage;
}

double DailyEmployee::getDays() const {
    return day;
}

double DailyEmployee::earnings() const {
    if( getDays() > 0 ){
        return getDailyWage() * getDays();
    }
    else{
        return getDailyWage();
    }
}

void DailyEmployee::print() const {
    cout << "Daily employee: ";
    Employee::print();
    cout << "\nDayle wage: " << getDailyWage() << " days worked: " << getDays();
}
