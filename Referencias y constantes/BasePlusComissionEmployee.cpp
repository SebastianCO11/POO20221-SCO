#include <iostream>
#include "BasePlusComissionEmployee.h"

using namespace std;

BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &firstN, const string &lastN, const string &socialSN, double sales, double rate,
                                                       double salary) : CommissionEmployee( firstN, lastN, socialSN, sales, rate ) {
    setBaseSalary( salary );
}

void BasePlusCommissionEmployee::setBaseSalary( double salary ){
    baseSalary = (( salary < 0.0 ) ? 0.0 : salary );
}

double BasePlusCommissionEmployee::getBaseSalary() const {
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings() const {
    return getBaseSalary() + ( getCommisionRate() * getGrossSales() );
    // return getBaseSalary() + CommissionEmployee::eranings();
}

void BasePlusCommissionEmployee::print() const {
    cout << "Base salaried ";
    CommissionEmployee::print();
    cout << " base salary: " << getBaseSalary();
}