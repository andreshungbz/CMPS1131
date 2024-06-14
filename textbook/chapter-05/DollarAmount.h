#ifndef CHAPTER_5_DOLLARAMOUNT_H
#define CHAPTER_5_DOLLARAMOUNT_H

#include <string>
#include <cmath>

class DollarAmount {
public:
    explicit DollarAmount(int64_t value);
    int64_t getPennies() const;
    void add(DollarAmount right);
    void subtract(DollarAmount right);
    void addInterest(int rate, int divisor);
    std::string toString() const;
private:
    int64_t amount{0};
};

#endif //CHAPTER_5_DOLLARAMOUNT_H
