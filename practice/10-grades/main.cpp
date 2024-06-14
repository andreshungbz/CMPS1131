#include <iostream>

int main() {
    int count{1};
    int total{0};
    while (count <= 10) {
        std::cout << "Enter a grade: ";
        int grade;
        std::cin >> grade;
        total += grade;
        ++count;
    }
    double average{static_cast<double>(total) / 10};
    std::cout << average << '\n';
    return 0;
}
