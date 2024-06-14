#include <iostream>
#include <iomanip>
#include "Student.h"

using namespace std;

void display(const Student& student);

int main() {
    Student test{"John", "Doe", 90, 100, 70};
    cout << fixed << setprecision(2);
    display(test);

    test.setFirstName("Jane");
    test.setLastName("Roe");
    test.setExamGrade1(60);
    test.setExamGrade2(70);
    test.setExamGrade3(80);

    cout << endl;
    display(test);
    return 0;
}

void display(const Student& student) {
    cout << "Student: " << student.getFirstName() << ' ' << student.getLastName() << endl;
    cout << "Grades: " << student.getExamGrade1() << ' ' << student.getExamGrade2() << ' '
        << student.getExamGrade3() << endl;
    cout << "Average of Grades: " << student.getAverage() << endl;
}