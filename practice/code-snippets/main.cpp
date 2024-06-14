#include <iostream>

void oneToNine();
void fourToZero();
void adder();
void evenNumbers();

int main() {
    evenNumbers();
    return 0;
}

void oneToNine() {
    int y{1};
    while (y <= 9) {
        std::cout << y;
        ++y;
    }
}

void fourToZero() {
    int y{4};
    while (y >= 0) {
        std::cout << y;
        --y;
    }
}

void adder() {
    int k{0}, sum{0};
    while (k < 5) {
        k++;
        sum += k;
        std::cout << sum << k << '\n';
    }
}

void evenNumbers() {
    int y{1};
    while (y <= 19) {
        if (y % 2 == 0) {
            std::cout << y;
            if (y % 6 == 0) {
                std::cout << '\n';
            } else {
                std::cout << ' ';
            }
        }
        ++y;
    }
}