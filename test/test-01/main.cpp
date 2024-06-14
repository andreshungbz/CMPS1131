// Square Class Driver Program (main.cpp)

#include <iostream>
#include "Square.h"

void displaySquare(Square square);

int main() {
    Square squareObj{5};
    std::cout << "Initial Square Object\n";
    displaySquare(squareObj);
    squareObj.setSide(-1);
    std::cout << "\nUpdated Square Object\n";
    displaySquare(squareObj);
    return 0;
}

void displaySquare(Square square) {
    std::cout << "Square Side is " << square.getSide() << " and Area is " << square.getArea() << '\n';
}