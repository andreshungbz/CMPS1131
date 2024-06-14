#include <iostream>
#include "Date.h"

void dateDemo(Date date);

int main() {
    Date date1{18, 9, 2023};

    std::cout << "Initial Date\n";
    dateDemo(date1);

    date1.setDay(19);
    date1.setMonth(10);
    date1.setYear(2024);

    std::cout << "\nUpdated Date\n";
    dateDemo(date1);

    return 0;
}

void dateDemo(Date date) {
    std::cout << "Date: ";
    date.displayDate();
    std::cout << '\n';

    std::cout << "Day: " << date.getDay() << ", Month: " << date.getMonth() << ", Year: "
        << date.getYear() << '\n';
}
