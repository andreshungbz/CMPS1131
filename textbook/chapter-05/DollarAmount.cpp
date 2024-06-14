#include "DollarAmount.h"

DollarAmount::DollarAmount(int64_t value) : amount{value} {}

int64_t DollarAmount::getPennies() const {
    return amount;
}

void DollarAmount::add(DollarAmount right) {
    amount += right.amount;
}

void DollarAmount::subtract(DollarAmount right) {
    amount -= right.amount;
}

void DollarAmount::addInterest(int rate, int divisor) {
    DollarAmount interest{(amount * rate + divisor / 2) / divisor};
    add(interest);
}

std::string DollarAmount::toString() const {
    std::string dollars{std::to_string(amount / 100)};
    std::string cents{std::to_string(std::abs(amount % 100))};
    return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
}