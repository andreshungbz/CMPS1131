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

    if (average >= 90) {            // step 2: if average >= 90, print A
        printGrade('A');
    } else if (average >= 80) {     // step 3: else if average >= 80, print B
        printGrade('B');
    } else if (average >= 70) {     // step 4: else if average >= 70, print C
        printGrade('C');
    } else {                        // step 5: else, print F
        printGrade('F');
    }

    return 0;
}
