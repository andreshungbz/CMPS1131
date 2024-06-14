#include <iostream>
#include <iomanip>

int main() {
    double const straightTime{40};
    double const extraRate{1.5};
    double hourlyRate{0};
    double hours{0};
    double salary;

    std::cout << std::setprecision(2) << std::fixed;

    while (hours > -1) {
        std::cout << "Enter hours worked (-1 to end): ";
        std::cin >> hours;
        if (hours < 0) break;

        std::cout << "Enter hourly rate of the employee ($00.00): ";
        std::cin >> hourlyRate;

        if (hours <= straightTime) {
            salary = hours * hourlyRate;
        } else {
            double extraHours{hours - straightTime};
            salary = (hours - extraHours) * hourlyRate + extraHours * (hourlyRate * extraRate);
        }

        std::cout << "Salary is $" << salary << "\n\n";
    }
}
