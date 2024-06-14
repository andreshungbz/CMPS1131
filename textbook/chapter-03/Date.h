#ifndef CHAPTER_3_DATE_H
#define CHAPTER_3_DATE_H

#include <string>

class Date{
public:
    //constructor
    Date(int yr, int mt, int dy)
    : year{yr}, day{dy} {
        if (mt >= 1 && mt <= 12) {
            month = {mt};
        } else {
            month = {1};
        }
    }
    // year setter
    void setYear(int yr) {
        year = {yr};
    }
    // year getter
    [[nodiscard]] int getYear() const {
        return year;
    }
    // month setter
    void setMonth(int mt) {
        if (mt >= 1 && mt <= 12) {
            month = {mt};
        }
    }
    // month getter
    [[nodiscard]] int getMonth() const {
        return month;
    }
    // day setter
    void setDay(int dy) {
        day = {dy};
    }
    // day getter
    [[nodiscard]] int getDay() const {
        return day;
    }
    // displayDate
    [[nodiscard]] std::string displayDate() const {
        return std::to_string(year) + '/' + std::to_string(month) + '/' + std::to_string(day);
    }
private:
    // data members
    int year{};
    int month{};
    int day{};
};

#endif //CHAPTER_3_DATE_H
