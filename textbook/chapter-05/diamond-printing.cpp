#include <iostream>

void diamond(int w);

int main() {
    diamond(9);
    return 0;
}

void diamond(int w) {
    int star{1};
    int initialSpace{(w - 1) / 2};
    int halfRange(w - initialSpace);
    for (int i{1}; i <= halfRange; ++i, --initialSpace, star += 2) {
        for (int j{1}; j <= initialSpace; ++j) {
            std::cout << ' ';
        }
        for (int j{1}; j <= star; ++j) {
            std::cout << '*';
        }
        for (int j{1}; j <= initialSpace; ++j) {
            std::cout << ' ';
        }
        std::cout << '\n';
    }
}