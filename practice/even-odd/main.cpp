#include <iostream>

int main()
{
    std::cout << "Even Odd Number Determiner\n\n";

    // step 1: get an integer from the user
    std::cout << "Enter an integer: ";
    int number{};
    std::cin >> number;

    // step 2: determine if the integer is even or odd and display result
    if (number % 2 == 0) {
        std::cout << number << " is an even number.\n";
    } else {
        std::cout << number << " is an odd number.\n";
    }

    return 0;
}