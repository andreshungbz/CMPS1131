// ATM Class Implementation (ATM.cpp)

#include "ATM.h"

ATM::ATM(std::string newNumber, int newRate, float newBalance) {
    setAccountNumber(newNumber);
    setInterestRate(newRate);
    setBalance(newBalance);
}

void ATM::setAccountNumber(std::string newNumber) {
    accountNumber = newNumber;
}

std::string ATM::getAccountNumber() const {
    return accountNumber;
}

void ATM::setInterestRate(int newRate) {
    interestRate = (newRate < 0) ? 0 : newRate;
}

int ATM::getInterestRate() const {
    return interestRate;
}

void ATM::setBalance(float newBalance) {
    balance = (newBalance < 0.0f) ? 0.0f : newBalance;
}

float ATM::getBalance() const {
    return balance;
}

float ATM::getEarnedInterest() const {
    return balance * interestRate / 100;
}