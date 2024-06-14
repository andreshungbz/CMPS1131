#include <iostream>

// function declarations

// returns area of a square
double getAreaOfSquare(double side);

// returns last digit of a number
int getLastDigit(int age);

// returns true if number is even, false otherwise
bool isEven(int number);

// returns true if number is odd, false otherwise
bool isOdd(int number);

// prints character c n times separated by spaces
void multiPrint(int n, char c);

// returns the larger of two numbers
double max2(double num1, double num2);

// returns true if number is a multiple of 5, false otherwise
bool isMultipleOfFive(int number);

// prints "FizzBuzz" if number is a multiple of 3 and 5, the number otherwise
void fizzBuzz(int number);

int main() {
    std::cout << "Function Practice" << '\n';

    // function tests
    std::cout << "Area of square of side length 5 is: " << getAreaOfSquare(5) << '\n';

    std::cout << "The last digit of person's age 18 is: " << getLastDigit(18) << '\n';

    std::cout << "Even Number Check: 4 is " << (isEven(4) ? "even\n" : "not even\n");
    std::cout << "Even Number Check: 7 is " << (isEven(7) ? "even\n" : "not even\n");

    std::cout << "Odd Number Check: 3 is " << (isOdd(3) ? "odd\n" : "not odd\n");
    std::cout << "Odd Number Check: 8 is " << (isOdd(8) ? "odd\n" : "not odd\n");

    std::cout << "Multi-printing 5 %s: ";
    multiPrint(5, '%');

    std::cout << "The larger of numbers 3 and 5 is: " << max2(3, 5) << '\n';

    std::cout << "Multiple of 5 Checker: 15 is " << (isMultipleOfFive(15) ? "a multiple\n" : "not a multiple\n");
    std::cout << "Multiple of 5 Checker: 16 is " << (isMultipleOfFive(16) ? "a multiple\n" : "not a multiple\n");

    std::cout << "FizzBuzz Checker: 15 outputs ";
    fizzBuzz(15);
    std::cout << "FizzBuzz Checker: 16 outputs ";
    fizzBuzz(16);

    return 0;
}

// function definitions

double getAreaOfSquare(double side) {
    return side * side;
}

int getLastDigit(int age) {
    return age % 10;
}

bool isEven(int number) {
    return number % 2 == 0;
}

bool isOdd(int number) {
    return number % 2 != 0;
}

void multiPrint(int n, char c) {
    for (int i = 0; i < n; i++) {
        std::cout << c << ' ';
    }
    std::cout << '\n';
}

double max2(double num1, double num2) {
    if (num1 > num2) {
        return num1;
    }
    return num2;
}

bool isMultipleOfFive(int number) {
    return number % 5 == 0;
}

void fizzBuzz(int number) {
    if (isMultipleOfFive(number) && number % 3 == 0) {
        std::cout << "FizzBuzz" << '\n';
    } else {
        std::cout << number << '\n';
    }
}