// Employee Class Implementation

#include "Employee.h"

// constructor
Employee::Employee(std::string fName, std::string lName, int mSalary)
    : firstName{std::move(fName)}, lastName{std::move(lName)} {
        if (mSalary > 0) {
        monthlySalary = {mSalary};
    }
}
// function members
// name setter
void Employee::setName(const std::string& fName) {
    firstName = {fName};
}
// name getter
std::string Employee::getName() const {
    return firstName;
}
// last name setter
void Employee::setLastName(const std::string& lName) {
    lastName = {lName};
}
// last name getter
std::string Employee::getLastName() const {
    return lastName;
}
// salary setter
void Employee::setSalary(int mSalary) {
    if (mSalary > 0) {
        monthlySalary = {mSalary};
    }
}
// salary getter
int Employee::getSalary() const {
    return monthlySalary;
}