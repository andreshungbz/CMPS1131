// This program checks if a customer's has exceeded the credit limit on a charge account

// Receive account number, beginning balance, total charges, total credits and credit limit from user
// Calculate and display new balance and if the credit exceeded.

// Initialize account number to 0
// Declare variables for beginningBalance, charges, credits and creditLimit
// While sentinel has not been entered
//      Prompt user to enter account number and input into account (possibly sentinel)
//      If sentinel then break
//      Prompt user for beginning balance and input into beginningBalance
//      Prompt user for total charges and input into charges
//      Prompt user for total credits and input into credits
//      Prompt user for credit limit and input into creditLimit
//      Calculate newBalance = beginningBalance + charges - credit
//      Display newBalance
//      If newBalance is greater than credit limit then
//          Display account number, credit limit and newBalance
//          Display message "Credit Limit Exceeded"
//      Prompt user for next account number and input into account (possibly sentinel)
// End of program

#include <iostream>
#include <iomanip>

int main() {
    int account{0};
    double beginningBalance, charges, credits, creditLimit;

    std::cout << std::setprecision(2) << std::fixed;

    while (account > -1) {
        std::cout << "Enter account number (or -1 to quit): ";
        std::cin >> account;

        if (account < 0) break;

        std::cout << "Enter beginning balance: ";
        std::cin >> beginningBalance;
        std::cout << "Enter total charges: ";
        std::cin >> charges;
        std::cout << "Enter total credits: ";
        std::cin >> credits;
        std::cout << "Enter credit limit: ";
        std::cin >> creditLimit;

        double newBalance{beginningBalance + charges - credits};

        if (newBalance < creditLimit) {
            std::cout << "New balance is " << newBalance << "\n\n";
        } else {
            std::cout << "New balance is " << newBalance << '\n';
            std::cout << "Account:\t\t" << account << '\n';
            std::cout << "Credit Limit: " << creditLimit << '\n';
            std::cout << "Balance:\t\t" << newBalance << '\n';
            std::cout << "Credit Limit Exceeded.\n\n";
        }
    }

    return 0;
}
