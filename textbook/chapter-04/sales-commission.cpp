// This program calculates a salesperson's earnings for a week

// Initialize variables
// Receive gross sales of the week from user
// Calculate and display salary

// Initialize weeklySalary to 200.00
// Initialize commissionRate to 0.09
// Initialize sales to 0.0
// Set decimal precision
// While sentinel has not been entered
//      Prompt user for sales and input (possibly sentinel)
//      If sentinel then break
//      Calculate totalWeeklySalary = weeklySalary + (sales * commissionRate)
//      Display totalWeeklySalary
//      Prompt user for next sales (possibly sentinel)
// End of program

#include <iostream>
#include <iomanip>

int main() {
    double const weeklySalary{200};
    double const commissionRate{0.09};
    double sales{0};

    std::cout << std::setprecision(2) << std::fixed;

    while (sales > -1) {
        std::cout << "Enter sales in dollars (-1 to end): ";
        std::cin >> sales;

        if (sales < 0) break;

        double totalWeeklySalary{weeklySalary + (sales * commissionRate)};
        std::cout << "Salary is: $" << totalWeeklySalary << "\n\n";
    }
    return 0;
}
