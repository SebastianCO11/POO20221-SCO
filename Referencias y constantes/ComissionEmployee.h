#ifndef COMISSIONEMPLOYEE_H
#define COMISSIONEMPLOYEE_H

#include "Employee.h"
#include <iostream>

class CommissionEmployee : public Employee{
    private:
        double grossSales{};
        double cosmissionRate{};

    public:
        CommissionEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );

        void setCommissionRate( double );
        double getCommisionRate() const;

        void setGrossSales( double );
        double getGrossSales() const;

        double earnings() const override;
        void print() const override;
};

#endif