// Converter Class Definition

// The Converter Class contains a number of function members to compliment the Student Class.

// Note: keyword static gives the functions internal linkage

#ifndef PROGRAM_SET_1_CONVERTER_H
#define PROGRAM_SET_1_CONVERTER_H

#include <string>

class Converter {
public:
    // Function Members
    // generates username in the format "fn[0]ln"
    static std::string generateUsername(std::string fn, const std::string& ln);
    // returns title based on gender and status ("Mr.", "Ms.", "Mrs.")
    static std::string getTitle(char gender, char status);
    // returns grade symbol based on gpa ("F", range "D-" to "A")
    static std::string convertGPAtoGrade(float gpa);
};

#endif // PROGRAM_SET_1_CONVERTER_H
