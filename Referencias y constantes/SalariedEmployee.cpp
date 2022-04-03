#include <iostream>
#include "SalariedEmployee.h"

using namespace std;

SalariedEmployee::SalariedEmployee(const string &firstN, const string &lastN, const string &socialSN, double salary)
: Employee(firstN, lastN, socialSN){
    setWeeklySalary( salary );
}

void SalariedEmployee::setWeeklySalary(double salary){
    weeklySalary = ( salary < 0.0 ) ? 0.0 : salary;
}

void SalariedEmployee::print() const {
    cout << "Salaried employee: ";
    Employee::print();
    cout << "\nWeekly salary: " << getWeeklySalary();
}

double SalariedEmployee::getWeeklySalary() const {
    return weeklySalary;
}

double SalariedEmployee::earnings() const {
    return getWeeklySalary();
}