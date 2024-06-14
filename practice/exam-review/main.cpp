#include <iostream>
#include "Fraction.h"

void printTriangle();

int main() {
    Fraction test1{2, 4};
    Fraction test2{2, 4};
    std::cout << test1.mul(test2).toString();
    return 0;
}

void printTriangle() {
    for (int i{1}; i <= 4; ++i) {
        for (int j{1}; j <= i; ++j) {
            std::cout << '%';
            // do not print a space for the last character
            if (j != i) {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
}