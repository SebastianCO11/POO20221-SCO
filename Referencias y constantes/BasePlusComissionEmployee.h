#ifndef BASEPLUSEMPLOYEE_H
#define BASEPLUSEMPLOYEE_H

#include <string>
#include "ComissionEmployee.h"

using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee{
    private:
        double baseSalary{};

    public:
        BasePlusCommissionEmployee(const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0);

        void setBaseSalary( double );
        double getBaseSalary() const;

        double earnings() const override;
        void print() const override;
};

#endif