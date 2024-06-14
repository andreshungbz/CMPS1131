// Point Class Driver Program (main.cpp)

#include <iostream>
#include "Point.h"

int main() {
    // create a point object using the default constructor
    Point pointA;

    std::cout << "Initial Point: ";
    pointA.display();
    std::cout << '\n';

    // call the set function to set the xcoordinate for pointA
    pointA.setX(2);
    // call the set function to set the ycoordinate for pointA
    pointA.setY(3);

    // call the display function which should display pointA example in the format (5,6)
    std::cout << "Updated Point: ";
    pointA.display();
    std::cout << '\n';

    // call the function to moveRight with a value
    pointA.moveRight(4);
    // call the function to moveUp with a value
    pointA.moveUp(5);

    // call the display function which should display pointA
    std::cout << "Moved Point: ";
    pointA.display();
    std::cout << '\n';

    return 0;
}
