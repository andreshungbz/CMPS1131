#include <iostream>
#include <iomanip>
#include <string>
#include "DollarAmount.h"

int main() {
    DollarAmount d1{12345};
    DollarAmount d2{1576};

    std::cout << "After adding d2 (" << d2.toString() << ") into d1 ("
        << d1.toString() << "), d1 = ";
    d1.add(d2);
    std::cout << d1.toString() << '\n';

    std::cout << "After subtracting d2 (" << d2.toString() << ") from d1 ("
        << d1.toString() << "), d1 = ";
    d1.subtract(d2);
    std::cout << d1.toString() << '\n';

    std::cout << "After subtracting d1 (" << d1.toString() << ") from d2 ("
        << d2.toString() << "), d1 = ";
    d2.subtract(d1);
    std::cout << d2.toString() << "\n\n";

    std::cout << "Enter integer interest rate and divisor. For example:\n"
        << "for     2%, enter:    2 100 \n"
        << "for   2.3%, enter:   23 1000\n"
        << "for  2.37%, enter:  237 10000\n"
        << "for 2.375%, enter: 2375 100000\n> ";
    int rate;
    int divisor;
    std::cin >> rate >> divisor;

    DollarAmount balance{100000};
    std::cout << "\nInitial balance: " << balance.toString() << '\n';
    std::cout << "\nYear" << std::setw(20) << "Amount on deposit\n";

    for (unsigned int year{1}; year <= 10; year++) {
        balance.addInterest(rate, divisor);
        std::cout << std::setw(4) << year << std::setw(10) << balance.toString() << '\n';
    }

    return 0;
}
