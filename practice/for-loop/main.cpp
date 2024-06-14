#include <iostream>

void adder();
void testing();

int main() {
    adder();
    return 0;
}

void adder() {
    int k{0}, sum{0};
    for (;k < 5;) {
        ++k;
        sum += k;
        std::cout << sum << "\t\t" << k << '\n';
    }
}

void testing() {
    int k{3};
    while (k > 0) {
        std::cout << "testing";
        --k;
    }
}