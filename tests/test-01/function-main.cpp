// findWinner Function

#include <iostream>

void mystery(int n) {
    if (n < 10)
        std::cout << "<10\n";
    else if (n > 5)
        std::cout << ">5\n";
    else
        std::cout << "not interesting\n";
}

void findWinner(int scoreBZ, int scoreCU);

int main() {
    std::cout << "Belize: How many points did they score? ";
    int ptsBZ;
    std::cin >> ptsBZ;

    std::cout << "Cuba: How many points did they score? ";
    int ptsCU;
    std::cin >> ptsCU;

    findWinner(ptsBZ, ptsCU);
    return 0;
}

void findWinner(int scoreBZ, int scoreCU) {
    if (scoreBZ > scoreCU) {
        std::cout << "Belize won!\n";
    } else if (scoreCU > scoreBZ) {
        std::cout << "Cuba won!\n";
    } else {
        std::cout << "Draw!\n";
    }
}