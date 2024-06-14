#include <iostream>

int main()
{
    std::cout << "Area of Square Calculator\n\n";

    // step 1: get length value from user
    std::cout << "Enter the length of one side of the square (m): ";
    double length{};
    std::cin >> length;

    // step 2: display the calculated area
    std::cout << "The area of the square is " << length * length << " square meters.\n";

    return 0;
}