// Point Class Implementation (Point.cpp)

#include "Point.h"

Point::Point(int x, int y) : xcoordinate{x}, ycoordinate{y} {
    if (x < 0) {
        xcoordinate = 0;
    }
    if (y < 0) {
        ycoordinate = 0;
    }
}

void Point::setX(int x) {
    xcoordinate = (x < 0) ? 0 : x;
}

int Point::getX() const {
    return xcoordinate;
}

void Point::setY(int y) {
    ycoordinate = (y < 0) ? 0 : y;
}

int Point::getY() const {
    return ycoordinate;
}

void Point::moveRight(int x) {
    setX(getX() + x);
}

void Point::moveUp(int y) {
    setY(getY() + y);
}

void Point::display() const {
    std::cout << '(' << getX() << ',' << getY() << ')';
}