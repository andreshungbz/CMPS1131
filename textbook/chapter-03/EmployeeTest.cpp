// Employee Class Test

#include <iostream>
#include "Employee.h"

void displayEmployee(const Employee& employee);

int main() {
    std::cout << "\nInitial Employees\n\n";

    Employee johnDoe{"John", "Doe", 2000};
    Employee janeDoe{"Jane", "Doe", 2500};

    displayEmployee(johnDoe);
    displayEmployee(janeDoe);

    std::cout << "\nAfter 10% Raise\n\n";

    johnDoe.setSalary(static_cast<int>(johnDoe.getSalary() * 1.1));
    janeDoe.setSalary(static_cast<int>(janeDoe.getSalary() * 1.1));

    displayEmployee(johnDoe);
    displayEmployee(janeDoe);

    return 0;
}

void displayEmployee(const Employee& employee) {
    std::cout << "Employee: " << employee.getName() << ' ' << employee.getLastName() << "'s yearly salary is $" << employee.getSalary() * 12 << '\n';
}