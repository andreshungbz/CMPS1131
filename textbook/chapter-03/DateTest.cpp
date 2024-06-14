#include <iostream>
#include "Date.h"

int main() {
    Date date{2023, 9, 3};

    std::cout << "Initial Date: " << date.displayDate() << '\n';
    std::cout << "Year: " << date.getYear() << ", Month: " << date.getMonth() << ", Day: " << date.getDay() << "\n\n";

    date.setYear(2024);
    date.setMonth(10);
    date.setDay(4);

    std::cout << "Updated Date: " << date.displayDate() << '\n';
    return 0;
}
