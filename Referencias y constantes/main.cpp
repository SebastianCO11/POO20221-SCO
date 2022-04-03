#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "ComissionEmployee.h"
#include "BasePlusComissionEmployee.h"
#include "DailyEmployee.h"

using namespace std;

int main() {
    cout << fixed << setprecision( 2 );

    vector < Employee * > employees( 5 );

    employees[ 0 ] = new SalariedEmployee( "Jhon", "Smith", "111-11-1111", 800 );
    employees[ 1 ] = new HourlyEmployee( "Karen", "Price", "222-22-2222", 16.75, 40 );
    employees[ 2 ] = new CommissionEmployee( "Sue", "Jhones", "333-33-3333", 10000, .06 );
    employees[ 3 ] = new BasePlusCommissionEmployee( "Bob", "Lewis", "444-44-4444", .04, 300 );
    employees[ 4 ] = new DailyEmployee( "Evan", "Harris", "55-55-5555", 3, 60 );

    for(auto & employee : employees) {
        employee->print();
        cout << endl;

        auto *derivedPtr = dynamic_cast < BasePlusCommissionEmployee * > ( employee );

        if (derivedPtr != nullptr) {
            double oldBaseSalary = derivedPtr->getBaseSalary();
            cout << "old base salary: $" << oldBaseSalary << endl;
            derivedPtr->setBaseSalary(1.10 * oldBaseSalary);
            cout << "New base salary with 10% increase is: $" << derivedPtr->getBaseSalary() << endl;
        }

        cout << "earned $" << employee->earnings() << "\n\n";
    }

    for( size_t j = 0; !employees.empty(); j++ ){
        cout << "Deleting objetc of: " << typeid( *employees[j]).name() << endl;
        delete employees[j];
    }
    return 0;
}
