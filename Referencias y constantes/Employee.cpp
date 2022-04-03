#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(const string &firstN, const string &lastN, const string &socialSN):
    firstName(firstN), lastName(lastN), socialSecurityNumber(socialSN){

}

void Employee::setFirstName(const string &firstN){
    firstName = firstN;
}

void Employee::setLastName(const string &lastN){
    lastName = lastN;
}

void Employee::setSocialSecurityNumber(const string &socialSN) {
    socialSecurityNumber = socialSN;
}

string Employee::getFirstName() const {
    return firstName;
}

string Employee::getLastName() const {
    return lastName;
}

string  Employee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}

void Employee::print() const {
    cout << getFirstName() << " " << getLastName() << "\nSocial Security Number: " << getSocialSecurityNumber() << "\n";
}


