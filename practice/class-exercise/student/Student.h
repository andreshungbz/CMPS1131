#ifndef STUDENT_STUDENT_H
#define STUDENT_STUDENT_H

#include <string>
using std::string;

class Student {
public:
    Student(string fn, string ln, int g1, int g2, int g3);
    string getFirstName() const;
    void setFirstName(string fn);
    string getLastName() const;
    void setLastName(string ln);
    int getExamGrade1() const;
    void setExamGrade1(int grade);
    int getExamGrade2() const;
    void setExamGrade2(int grade);
    int getExamGrade3() const;
    void setExamGrade3(int grade);
    double getAverage() const;
private:
    string firstName;
    string lastName;
    int examGrade1;
    int examGrade2;
    int examGrade3;
};

#endif // STUDENT_STUDENT_H
