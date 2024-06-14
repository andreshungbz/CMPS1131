// Employee Class Header File

#ifndef CHAPTER_3_EMPLOYEE_H
#define CHAPTER_3_EMPLOYEE_H

#include <string>
#include <utility>

class Employee {
public:
    // constructor
    Employee(std::string fName, std::string lName, int mSalary);
    // function members
    // name setter
    void setName(const std::string& fName);
    // name getter
    [[nodiscard]] std::string getName() const;
    // last name setter
    void setLastName(const std::string& lName);
    // last name getter
    [[nodiscard]] std::string getLastName() const;
    // salary setter
    void setSalary(int mSalary);
    // salary getter
    [[nodiscard]] int getSalary() const;
private:
    // data members
    std::string firstName{};
    std::string lastName{};
    int monthlySalary{0};
};

#endif //CHAPTER_3_EMPLOYEE_H
