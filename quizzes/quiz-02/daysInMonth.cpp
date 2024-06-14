#include <iostream>

int daysInMonth(int month);

int main() {
    for (int i{1}; i <= 12; ++i) {
        std::cout << "The number of days in month " << i << " is: " << daysInMonth(i) << '\n';
    }
    return 0;
}

int daysInMonth(int month) {
    switch (month) {
        case 2:
            return 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        default:
            return 0;
    }
}