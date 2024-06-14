// Student Class Definition

// The Student Class contains a number of data members representing some properties
// that a student object can have as well as setters and getters for each.

// Note: const reference parameters are used to obtain the security of pass-by-value
// while avoiding the expense of copying string objects.

#ifndef PROBLEM_SET_1_STUDENT_H
#define PROBLEM_SET_1_STUDENT_H

#include <string>

class Student {
public:
    // Constructor (default sets empty strings for firstName and lastName)
    explicit Student(const std::string& fn = "", const std::string& ln = "");

    // Function Members
    // firstName setter and getter
    void setFirstName(const std::string& fn);
    [[nodiscard]] const std::string& getFirstName() const;

    // lastName setter and getter
    void setLastName(const std::string& ln);
    [[nodiscard]] const std::string& getLastName() const;

    // dob setter and getter
    void setDob(const std::string& newDob);
    [[nodiscard]] const std::string& getDob() const;

    // gpa setter and getter
    void setGPA(float newGPA);
    [[nodiscard]] float getGPA() const;

    // gender setter and getter
    void setGender(char newGender);
    [[nodiscard]] char getGender() const;

    // status setter and getter
    void setStatus(char newStatus);
    [[nodiscard]] char getStatus() const;

    // id setter and getter
    void setID(const std::string& newID);
    [[nodiscard]] const std::string& getID() const;
private:
    // Data Members
    // first name
    std::string firstName;
    // last name
    std::string lastName;
    // date of birth
    std::string dob;
    // grade point average
    float gpa{};
    // gender (refers to sex and not gender identity)
    char gender{};
    // marital status
    char status{};
    // student id
    std::string id;
};

#endif // PROBLEM_SET_1_STUDENT_H
