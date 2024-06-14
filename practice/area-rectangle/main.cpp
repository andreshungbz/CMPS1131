#include <iostream>

int main()
{
    std::cout << "Area of Rectangle Calculator\n\n";

    // step 1: get height value from user
    std::cout << "Enter rectangle height (m): ";
    double height{};
    std::cin >> height;

    // step 2: get width value from user
    std::cout << "Enter rectangle width (m): ";
    double width{};
    std::cin >> width;

    // step 3: display calculated area
    std::cout << "The area of the rectangle is " << height * width << " square meters.\n";

    return 0;
}