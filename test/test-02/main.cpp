#include <iostream>

void whileLoop1();
void whileToForLoop();
int whileLoop2();
int whileToDoWhileLoop();
void squareNumbers();

int main() {
    squareNumbers();
    return 0;
}

void whileLoop1() {
    int temp = 1;
    int i = 1;
    int y;
    std::cout << "Enter the value between 1-10 ";
    std::cin >> y;
    while (i < y)
    {
        temp = temp * i;
        i++;
    }
    std::cout << temp;
}

void whileToForLoop() {
    int temp{1};
    std::cout << "Enter the value between 1-10 ";
    int y;
    std::cin >> y;
    for (int i{1}; i < y; ++i) {
        temp *= i;
    }
    std::cout << temp;
}

int whileLoop2() {
    int sum = 0;
    int n = 10;
    while (n > 0) {
        sum = sum + n;
        --n;
    }
    return sum;
}

int whileToDoWhileLoop() {
    int sum{0};
    int n{10};
    do {
        sum += n;
        --n;
    } while (n > 0);
    return sum;
}

void squareNumbers() {
    int number{0};
    while (number != -1) {
        std::cout << "Enter a number (-1 to quit): ";
        std::cin >> number;

        if (number == -1) break;

        std::cout << "The square of " << number << " is " << number * number << '\n';
    }
}