#include <iostream>

int main()
{
    std::cout << "Celsius to Fahrenheit Converter\n\n";

    // step 1: get celsius value from user
    std::cout << "Enter temperature value in Celsius (°C): ";
    double celsius{};
    std::cin >> celsius;

    // step 2: display calculated fahrenheit value
    std::cout << celsius << "°C in degrees Fahrenheit: " << (celsius * 9 / 5) + 32 << "°F\n";

    return 0;
}