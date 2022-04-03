#include <iostream>
#include "HourlyEmployee.h"


using namespace std;

HourlyEmployee::HourlyEmployee(const string &firstN, const string &lastN, const string &socialSN, double hourlyWage, double hoursWorked) :
Employee(firstN, lastN, socialSN) {
    setWage(hourlyWage);
    setHours(hoursWorked);
}

void HourlyEmployee::setWage(double hourlyWage) {
    wage = ( hourlyWage < 0.0 ? 0.0 : hourlyWage );
}

void HourlyEmployee::setHours(double hoursWorked) {
    hours = ((( hoursWorked >= 0.0 ) && ( hoursWorked <= hoursPerWeek )) ? hoursWorked : 0.0 );
}

void HourlyEmployee::print() const {
    cout << "Hourly employee: ";
    Employee::print();
    cout << "\nHourly wage: " << getWage() << " hours worked: " << getHours();
}

double HourlyEmployee::getWage() const {
    return wage;
}

double HourlyEmployee::getHours() const {
    return hours;
}

double HourlyEmployee::earnings() const {
    if ( getHours() <= 40 ) {
        return getWage() * getHours();
    }
    else{
        return 40 * getWage() + (( getHours() - 40 ) * getWage() * 1.5 );
    }
}