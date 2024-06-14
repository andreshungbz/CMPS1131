#include <iostream>

void fizzBuzz(int num);

int main() {
    std::cout << "Output of fizzBuzz(10): ";
    fizzBuzz(10);
    std::cout << "\nOutput of fizzBuzz(15): ";
    fizzBuzz(15);
    return 0;
}

void fizzBuzz(int num) {
    if (num % 3 == 0) {
        std::cout << "Fizz";
    } else {
        std::cout << num;
    }
}