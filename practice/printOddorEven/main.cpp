#include <iostream>

void printOddorEven(int number);

int main() {
    std::cout << "Output of printOddorEven(10): ";
    printOddorEven(10);
    std::cout << "Output of printOddorEven(15): ";
    printOddorEven(15);
    return 0;
}

void printOddorEven(int number) {
    std::cout << "Number " << number << " is " << ((number % 2 == 0) ? "even\n" : "odd\n");
}