// Converter Class Implementation

#include "Converter.h"

// generateUsername function
std::string Converter::generateUsername(std::string fn, const std::string& ln) {
    // fn[0] accesses the first character of string fn
    return fn[0] + ln;
}

// getTitle function
std::string Converter::getTitle(char gender, char status) {
    if (gender == 'f') {
        if (status == 's') {
            return "Ms.";
        } else {
            return "Mrs.";
        }
    } else {
        return "Mr.";
    }
}

// convertGPAtoGrade function
std::string Converter::convertGPAtoGrade(float gpa) {
    if (gpa == 4.0) {
        return "A";
    } else if (gpa < 4.0 && gpa >= 3.7) {
        return "A-";
    } else if (gpa < 3.7 && gpa >= 3.3) {
        return "B+";
    } else if (gpa < 3.3 && gpa >= 3.0) {
        return "B";
    } else if (gpa < 3.0 && gpa >= 2.7) {
        return "B-";
    } else if (gpa < 2.7 && gpa >= 2.3) {
        return "C+";
    } else if (gpa < 2.3 && gpa >= 2.0) {
        return "C";
    } else if (gpa < 2.0 && gpa >= 1.7) {
        return "C-";
    } else if (gpa < 1.7 && gpa >= 1.3) {
        return "D+";
    } else if (gpa < 1.3 && gpa >= 1.0) {
        return "D";
    } else if (gpa < 1.0 && gpa >= 0.7) {
        return "D-";
    } else {
        return "F";
    }
}