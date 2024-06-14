#include <iostream>
#include <string>

std::string digit_to_name(int digit);

int main() {
    for (int i{0}; i <= 10; ++i) {
        std::string test{digit_to_name(i)};
        std::cout << i << " is " << test << '\n';
    }
    return 0;
}

std::string digit_to_name(int digit) {
    switch (digit) {
        case 1:
            return "one";
        case 2:
            return "two";
        case 3:
            return "three";
        case 4:
            return "four";
        case 5:
            return "five";
        case 6:
            return "six";
        case 7:
            return "seven";
        case 8:
            return "eight";
        case 9:
            return "nine";
        default:
            return "digit error";
    }
}
