// start of Fraction.h

#ifndef EXAM_REVIEW_FRACTION_H
#define EXAM_REVIEW_FRACTION_H

#include <string>

class Fraction {
public:
    Fraction();
    Fraction(int num, int denom);
    int getNumerator();
    int getDenominator();
    Fraction add(Fraction other);
    Fraction mul(Fraction other);
    std::string toString();
    Fraction reduce();
private:
    int numerator{0};
    int denominator{0};
};

#endif // EXAM_REVIEW_FRACTION_H

// end of Fraction.h