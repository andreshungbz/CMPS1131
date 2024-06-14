#include "Student.h"
#include <utility>

Student::Student(std::string fn, std::string ln, int g1, int g2, int g3)
    : firstName{std::move(fn)}, lastName{std::move(ln)}, examGrade1{g1}, examGrade2{g2}, examGrade3{g3} {}

string Student::getFirstName() const {
    return firstName;
}

void Student::setFirstName(std::string fn) {
    firstName = std::move(fn);
}

string Student::getLastName() const {
    return lastName;
}

void Student::setLastName(std::string ln) {
    lastName = std::move(ln);
}

int Student::getExamGrade1() const {
    return examGrade1;
}

void Student::setExamGrade1(int grade) {
    examGrade1 = grade;
}

int Student::getExamGrade2() const {
    return examGrade2;
}

void Student::setExamGrade2(int grade) {
    examGrade2 = grade;
}

int Student::getExamGrade3() const {
    return examGrade3;
}

void Student::setExamGrade3(int grade) {
    examGrade3 = grade;
}

double Student::getAverage() const {
    return static_cast<double>(examGrade1 + examGrade2 + examGrade3) / 3;
}