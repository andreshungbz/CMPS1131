#include "Date.h"

Date::Date(int d, int m, int y) {
    setDay(d);
    setMonth(m);
    setYear(y);
}

void Date::setDay(int d) {
    if (d > 0 && d <= 31) {
        day = d;
    } else {
        day = 1;
    }
}

int Date::getDay() const {
    return day;
}

void Date::setMonth(int m) {
    if (m > 0 && m <= 12) {
        month = m;
    } else {
        month = 1;
    }
}

int Date::getMonth() const {
    return month;
}

void Date::setYear(int y) {
    year = y;
}

int Date::getYear() const {
    return year;
}

void Date::displayDate() const {
    std::cout << std::to_string(month) + '/' + std::to_string(day) + '/' + std::to_string(year);
}