#include <iostream>

int main() {
    std::cout << "Bar-Chart Printing Program\n";
    std::cout << "Enter 5 numbers between 1 and 30:\n";

    int counter{0};
    int values[5] {};
    while (counter < 5) {
        std::cout << "Enter a number: ";
        int number;
        std::cin >> number;

        if (number >= 1 && number <= 30) {
            values[counter] = number;
            ++counter;
        }
    }

    std::cout << '\n';

    for (int i{0}; i < 5; ++i) {
        for (int j{0}; j < values[i]; ++j) {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    return 0;
}
