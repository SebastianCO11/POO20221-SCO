#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"
#include <iostream>

class HourlyEmployee : public Employee{
    private:
        double wage{}; // sueldo
        double hours{};

    public:
        static const int hoursPerWeek = 168;

        HourlyEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );

        void setWage( double );
        double getWage() const;

        void setHours( double );
        double getHours() const;

        double earnings() const override;
        void print() const override;
};

#endif