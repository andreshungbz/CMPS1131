#include <iostream>

void sequence();
void multiples5(int end);
void fixedGame();

int main() {
    fixedGame();
    return 0;
}

void sequence() {
    int k{0}, sum{0};
    while (k < 5) {
        sum += k;
        std::cout << sum << ' ' << k << '\n';
        ++k;
    }
}

void multiples5(int end) {
    for (int i{5}; i <= end; i += 5) {
        std::cout << i << ' ';
    }
    std::cout << '\n';
}

void fixedGame() {
    char response;
    do {
        std::cout << "Would you like to continue? ";
        std::cin >> response;
    } while (response == 'y' || response == 'Y');
}