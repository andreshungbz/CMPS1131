// This program calculates gas mileage of a trip and that of all trips

// Initialize variables
// Receive miles and gallons input from user
// Calculate and display gas mileage for the individual trip and all trips

// Declare variables for miles and gallons
// Initialize variables for total miles, total gallons and total mpg to 0
// While sentinel has not been entered
//      Prompt user to enter miles
//      Input miles (possibly sentinel)
//      If sentinel then break
//      Prompt user to enter gallons
//      Input gallons
//      Calculate miles per gallon trip and store in variable mpg
//      Add miles to total miles
//      Add gallons to total gallons
//      Calculate and update mpg for total trips
//      Display mpg
//      Display total mpg
//      Input miles for next trip (possibly sentinel)
// End of program

#include <iostream>

int main() {
    int miles{0}, gallons;
    int totalMiles{0}, totalGallons{0};
    double totalMPG;

    std::cout << std::fixed;

    while (miles > -1) {
        std::cout << "Enter miles driven (-1 to quit): ";
        std::cin >> miles;

        if (miles < 0) break;

        std::cout << "Enter gallons used: ";
        std::cin >> gallons;

        double MPG{static_cast<double>(miles) / gallons};
        totalMiles += miles;
        totalGallons += gallons;
        totalMPG = {static_cast<double>(totalMiles) / totalGallons};

        std::cout << "MPG this trip: " << MPG << '\n';
        std::cout << "Total MPG: " << totalMPG << "\n\n";
    }

    return 0;
}
