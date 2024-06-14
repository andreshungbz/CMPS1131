// Program specifications are kinda confusing on this one!
// Given the following, function printLetterGrade returns message and grade letter at the same time
// despite saying it "returns the letter grade", which suggests just grade letter and not the message.
//
// When printLetterGrade (150) is called the following will be the output
// Grade specified is not valid

#include <iostream>
#include <string>

std::string printLetterGrade(int grade);

int main() {
    std::cout << "printLetterGrade(92): " << printLetterGrade(92) << '\n';
    std::cout << "printLetterGrade(69): " << printLetterGrade(69) << '\n';
    std::cout << "printLetterGrade(150): " << printLetterGrade(150) << '\n';
    return 0;
}

std::string printLetterGrade(int grade) {
    std::string message{"Your letter grade is: "};

    if (grade <= 100 && grade >= 95) {
        message += "A+";
    } else if (grade < 95 && grade >= 90) {
        message += "A";
    } else if (grade < 90 && grade >= 85) {
        message += "B+";
    } else if (grade < 85 && grade >= 80) {
        message += "B";
    } else if (grade < 80 && grade >= 75) {
        message += "C+";
    } else if (grade < 75 && grade >= 70) {
        message += "C";
    } else if (grade < 70 && grade >= 65) {
        message += "D+";
    } else if (grade < 65 && grade >= 60) {
        message += "D";
    } else if (grade < 60 && grade >= 0) {
        message += "F";
    } else {
        message = "Grade specified is not valid";
    }

    return message;
}