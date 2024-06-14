// driver program main.cpp

#include <iostream>
#include <iomanip>
#include "circle.h"

int main() {
    // set consistent precision
    std::cout << std::fixed << std::setprecision(2);

    // using constructor
    Circle c{-1.0};
    std::cout << "Initial Circle Object Radius: " << c.getRadius() << '\n';

    // using setter and getter
    c.setRadius(10.0);
    std::cout << "Updated Circle Object Radius: " << c.getRadius() << '\n';

    // demonstrate area and circumference methods
    std::cout << "Circle Object Area: " << c.area() << '\n';
    std::cout << "Circle Object Circumference: " << c.circumference() << '\n';

    return 0;
}
