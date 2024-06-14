// circle.cpp

#include "circle.h"

Circle::Circle(double r) {
    setRadius(r);
}

void Circle::setRadius(double r) {
    radius = r < 0.0 ? 0.0 : r;
}

double Circle::getRadius() const {
    return radius;
}

double Circle::area() const {
    constexpr double pi{3.14159};
    return pi * (radius * radius);
}

double Circle::circumference() const {
    constexpr double pi{3.14159};
    return 2 * pi * radius;
}
