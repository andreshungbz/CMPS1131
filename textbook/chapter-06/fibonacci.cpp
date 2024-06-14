#include <iostream>

unsigned long fibonacci(unsigned long);

int main() {
    for (unsigned int i{0}; i <= 10; ++i) {
        std::cout << "fibonacci(" << i << ") = " << fibonacci(i) << '\n';
    }
    return 0;
}

unsigned long fibonacci(unsigned long number) {
    if ((number == 0) || (number == 1)) {
        return number;
    } else {
        return fibonacci(number - 1) + fibonacci(number - 2);
    }
}