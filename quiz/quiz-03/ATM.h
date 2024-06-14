// ATM Class Header File (ATM.h)

#ifndef QUIZ_2_ATM_H
#define QUIZ_2_ATM_H

#include <string>

class ATM {
public:
    ATM(std::string newNumber, int newRate, float newBalance);
    void setAccountNumber(std::string newNumber);
    [[nodiscard]] std::string getAccountNumber() const;
    void setInterestRate(int newRate);
    [[nodiscard]] int getInterestRate() const;
    void setBalance(float newBalance);
    [[nodiscard]] float getBalance() const;
    [[nodiscard]] float getEarnedInterest() const;
private:
    std::string accountNumber;
    int interestRate{};
    float balance{};
};

#endif // QUIZ_2_ATM_H
