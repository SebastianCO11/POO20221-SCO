#include <iostream>
#include "ComissionEmployee.h"

using namespace std;

CommissionEmployee::CommissionEmployee(const string &firstN, const string &lastN, const string &socialSN, double sales, double rate)
: Employee( firstN, lastN, socialSN ){
    setGrossSales( sales );
    setCommissionRate( rate );
}

void CommissionEmployee::setCommissionRate( double rate ){
    cosmissionRate = (( rate > 0.0 && rate < 1.0 ) ? rate : 0.0 );
}

void CommissionEmployee::setGrossSales( double sales ){
    grossSales = ( ( sales < 0.0  ) ? 0.0 : sales );
}

double CommissionEmployee::getCommisionRate() const {
    return cosmissionRate;
}

double CommissionEmployee::getGrossSales() const {
    return grossSales;
}

double CommissionEmployee::earnings() const {
    return getCommisionRate() * getGrossSales();
}

void CommissionEmployee::print() const {
    cout << "Commission Employee ";
    Employee::print();
    cout << "\nGross sales: " << getGrossSales() << " commission rate: " << getCommisionRate();
}
