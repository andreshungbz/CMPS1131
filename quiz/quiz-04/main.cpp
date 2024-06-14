// main.cpp

#include <iostream>

void fizzMultiples(int num);
int evenAverage();

int main() {
    int average{evenAverage()};
    std::cout << "The average of even numbers is: " << average << '\n';
    return 0;
}

void fizzMultiples(int num) {
    int counter{1};
    while (counter <= num) {
        if (counter % 3 == 0) {
            std::cout << "@@@\n";
        } else {
            std::cout << "###\n";
        }
        ++counter;
    }
}

int evenAverage() {
    int number{1};
    int sum{0};
    int numCount{0};

    while (number > 0) {
        std::cout << "Enter an integer (0 to end): ";
        std::cin >> number;
        if (number < 1) break;

        if (number % 2 == 0) {
            sum += number;
            ++numCount;
        }
    }

    return (numCount != 0 ? (sum / numCount) : 0);
}