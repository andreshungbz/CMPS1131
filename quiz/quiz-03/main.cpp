// ATM Class Driver Program (main.cpp)

#include <iostream>
#include "ATM.h"

int main() {
    ATM atmObj{"123456789", 5, 10000.0};

    std::cout << "ATM Object: Account Number " << atmObj.getAccountNumber() << ", Interest Rate: "
        << atmObj.getInterestRate() << ", Balance: $" << atmObj.getBalance() << '\n';

    atmObj.setAccountNumber("100000001");

    std::cout << "ATM Object has new Account Number: " << atmObj.getAccountNumber() << '\n';
    std::cout << "ATM Object has Earned Interest: $" << atmObj.getEarnedInterest() << '\n';

    return 0;
}
