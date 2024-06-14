// Square Class Implementation (Square.cpp)

#include "Square.h"

Square::Square(int s) {
    setSide(s);
}

void Square::setSide(int s) {
    side = (s < 0) ? 0 : s;
}

int Square::getSide() const {
    return side;
}

int Square::getArea() const {
    return side * side;
}