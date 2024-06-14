#include <iostream>

void classStatistics1();
void classStatistics2(int grades);

int main() {
    classStatistics2(10);
    return 0;
}

void classStatistics1() {
    char grade{'A'};
    while (true) {
        std::cout << "Enter a letter grade (Enter X to End): ";
        std::cin >> grade;
        if (grade == 'X') break;
        switch (grade) {
            case 'P':
                std::cout << "Well done! You have passed the course.\n";
                break;
            case 'F':
                std::cout << "Failed the course.\n";
                break;
            default:
                std::cout << "Not a valid grade.\n";
        }
    }
}

void classStatistics2(int grades) {
    int aCount{0};
    int bCount{0};
    int cCount{0};
    int dCount{0};
    int fCount{0};
    int invalidCount{0};

    for (;grades > 0; --grades) {
        std::cout << "Enter a letter grade: ";
        char grade;
        std::cin >> grade;

        switch (grade) {
            case 'A':
                ++aCount;
                break;
            case 'B':
                ++bCount;
                break;
            case 'C':
                ++cCount;
                break;
            case 'D':
                ++dCount;
                break;
            case 'F':
                ++fCount;
                break;
            default:
                ++invalidCount;
        }
    }

    std::cout << "\nA - " << aCount << " students\n"
        << "B - " << bCount << " students\n"
        << "C - " << cCount << " students\n"
        << "D - " << dCount << " students\n"
        << "F - " << fCount << " students\n"
        << "Invalid Entry - " << invalidCount << '\n';
}