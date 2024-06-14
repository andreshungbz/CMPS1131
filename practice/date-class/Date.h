#ifndef DATE_CLASS_DATE_H
#define DATE_CLASS_DATE_H

#include <iostream>
#include <string>

class Date {
public:
    Date(int d, int m, int y);
    void setDay(int d);
    int getDay() const;
    void setMonth(int m);
    int getMonth() const;
    void setYear(int y);
    int getYear() const;
    void displayDate() const;
private:
    int day;
    int month;
    int year;
};

#endif // DATE_CLASS_DATE_H
