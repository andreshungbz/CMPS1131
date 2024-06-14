#include <iostream>
#include "Account.h"

void displayAccount(const Account& account);

int main() {
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    displayAccount(account1);
    displayAccount(account2);

    std::cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount{};
    std::cin >> depositAmount;
    std::cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount);

    displayAccount(account1);
    displayAccount(account2);

    std::cout << "\n\nEnter deposit amount for account2: ";
    std::cin >> depositAmount;
    std::cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount);

    displayAccount(account1);
    displayAccount(account2);

    std::cout << "\n\nEnter withdraw amount for account1: ";
    int withdrawAmount{};
    std::cin >> withdrawAmount;
    std::cout << "subtracting " << withdrawAmount << " from account1 balance\n";
    account1.withdraw(withdrawAmount);

    displayAccount(account1);
    displayAccount(account2);
    return 0;
}

void displayAccount(const Account& account) {
    std::cout << "\nAccount: " << account.getName() << " balance is $" << account.getBalance();
}