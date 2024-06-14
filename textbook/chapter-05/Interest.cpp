#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    std::cout << std::fixed << std::setprecision(2);

    double principal{1000.00};
    double rate{0.05};
    double calcRate{1.0 + rate};

    std::cout << "Initial principal: $" << principal << '\n';
    std::cout << "    Interest rate:    " << rate << '\n';

    std::cout << "\nYear" << std::setw(20) << "Amount on deposit\n";

    for (unsigned int year{1}; year <= 10; year++) {
        double amount = principal * std::pow(calcRate, year);
        std::cout << std::setw(4) << year << std::setw(10) << '$' << amount << '\n';
    }

    return 0;
}
