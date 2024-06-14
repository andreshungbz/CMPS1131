#include <iostream>
#include <iomanip>
#include <random>

int main() {
    std::random_device rd{};
    std::seed_seq ss{rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd()};
    std::mt19937 mt{ss};
    std::uniform_int_distribution<> die6{1, 6};

    for (unsigned int i{1}; i <= 10; ++i) {
        std::cout << std::setw(10) << die6(mt);
        if (i % 5 == 0) {
            std::cout << std::endl;
        }
    }
    return 0;
}
