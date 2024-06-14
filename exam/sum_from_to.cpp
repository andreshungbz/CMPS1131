// sum_from_to function

#include <iostream>
#include <utility>

int sum_from_to(int, int);

int main() {
    std::cout << sum_from_to(4, 7) << '\n';
    std::cout << sum_from_to(-3, 1) << '\n';
    std::cout << sum_from_to(7, 4) << '\n';
    std::cout << sum_from_to(9, 9) << '\n';

    return 0;
}

int sum_from_to(int first, int last) {

    int sum{0};

    // swap values if first is larger than last
    if (first > last) {
        std::swap(first, last);
    }

    for (int i{first}; i <= last; ++i) {
        // get the absolute value for negative numbers
        if (std::abs(i) % 2 == 1) {
            sum += i;
        }
    }

    return sum;
}
