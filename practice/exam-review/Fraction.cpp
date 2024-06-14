#include "Fraction.h"

Fraction::Fraction() {
    numerator = 1;
    denominator = 1;
}

Fraction::Fraction(int num, int denom) {
    numerator = num;
    denominator = denom;
}

int Fraction::getNumerator() {
    return numerator;
}

int Fraction::getDenominator() {
    return denominator;
}

Fraction Fraction::add(Fraction other) {
    int otherNum{other.getNumerator()};
    int otherDenom{other.getDenominator()};

    // for common denominators, numerators can be regularly added
    if (denominator == otherDenom) {
        return Fraction{(numerator + otherNum), denominator};
    } else {
        const int lowerDenom{denominator < otherDenom ? denominator : otherDenom};
        const int higherDenom{denominator > otherDenom ? denominator : otherDenom};

        // working denominator based on higher one
        int commonDenom{higherDenom};

        // increase the multiples of the common denominator until the lower one is a factor
        while (commonDenom % lowerDenom != 0) {
            commonDenom += higherDenom;
        }

        int numSum = (commonDenom / denominator) + (commonDenom / otherDenom);
        return Fraction{numSum, commonDenom};
    }
}

Fraction Fraction::mul(Fraction other) {
    int numProduct{numerator * other.getNumerator()};
    int denomProduct{denominator * other.getDenominator()};

    return Fraction{numProduct, denomProduct}.reduce();
}

std::string Fraction::toString() {
    return std::to_string(numerator) + '/' + std::to_string(denominator);
}

Fraction Fraction::reduce() {
    // reducing is not needed when either numerator or denominator is 1
    if (numerator == 1 || denominator == 1) {
        return Fraction{numerator, denominator};
    } else {
        const int lower{numerator < denominator ? numerator : denominator};
        const int higher{numerator > denominator ? numerator : denominator};
        int reducingFactor{lower};

        // find the highest number that can reduce both numerator and denominator
        // if reduction isn't possible reducingFactor becomes 1
        while (true) {
            if (higher % reducingFactor == 0 && lower % reducingFactor == 0)
                break;
            reducingFactor /= 2;
        }

        // return reduced fraction
        return Fraction{(numerator / reducingFactor), (denominator / reducingFactor)};
    }
}