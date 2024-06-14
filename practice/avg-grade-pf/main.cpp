#include <iostream>

// function for printing grade letter
void printGrade(char grade) {
    std::cout << "Your grade is " << grade << ".\n";
}

int main() {
    // step 1: read average grade from user
    std::cout << "Enter your average grade: ";
    double average{};
    std::cin >> average;

    if (average >= 70) {        // step 2: if average >= 70, print A
        printGrade('P');
    } else {                    // step 3: else, print F
        printGrade('F');
    }

    return 0;
}
