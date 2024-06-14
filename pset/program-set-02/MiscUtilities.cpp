// [CMPS1131-1] Principles of Programming 1 / Section 1
// Program Set 2 / Andres Hung / Date Due: November 19, 2023

// MiscUtilities Functions Implementation
// additional functions used in Miscellaneous.cpp

#include "MiscUtilities.h"
#include <iostream>

void multiplicationFeedback(bool positive, int number) {
    if (positive) {
        // feedback for correct answers
        switch (number) {
            case 1:
                std::cout << "Very good!\n";
                break;
            case 2:
                std::cout << "Excellent!\n";
                break;
            case 3:
                std::cout << "Nice work!\n";
                break;
            case 4:
                std::cout << "Keep up the good work!\n";
                break;
            default:
                break;
        }
    } else {
        // feedback for incorrect answers
        switch (number) {
            case 1:
                std::cout << "No. Please try again.\n";
                break;
            case 2:
                std::cout << "Wrong. Try once more.\n";
                break;
            case 3:
                std::cout << "Don't give up!\n";
                break;
            case 4:
                std::cout << "No. Keep trying.\n";
                break;
            default:
                break;
        }
    }
}

void calculateManager() {
    std::cout << "Greetings, Manager\n";

    // do not permit negative values
    double weeklyPay{-1};
    while (weeklyPay < 0) {
        std::cout << "What is your weekly salary? $";
        std::cin >> weeklyPay;
    }

    std::cout << "Your pay for this week is therefore $" << weeklyPay << "\n";
}

void calculateHourlyWorker() {
    // relevant constants
    const int hourlyOvertimeThreshold{40};
    const double hourlyOvertimeRate{1.5};

    std::cout << "Greetings, Hourly Worker\n";

    // do not permit negative values
    int hours{-1};
    while (hours < 0) {
        std::cout << "How many hours did you work this week? ";
        std::cin >> hours;
    }

    double hourlyRate{-1};
    while (hourlyRate < 0) {
        std::cout << "What is your hourly wage? $";
        std::cin >> hourlyRate;
    }

    // extra hours is set to 0 in case there is no overtime
    int extraHours{hours > hourlyOvertimeThreshold ? hours - hourlyOvertimeThreshold : 0};
    double weeklyPay{((hours - extraHours) * hourlyRate) + (extraHours * hourlyRate * hourlyOvertimeRate)};
    std::cout << "Your pay for this week is therefore $" << weeklyPay << "\n";
}

void calculateCommissionWorker() {
    // relevant constants
    const int commissionFlatRate{250};
    const double commissionSalesRate{0.057};

    std::cout << "Greetings, Commission Worker\n";

    // do not permit negative values
    int grossSales{-1};
    while (grossSales < 0) {
        std::cout << "What is your gross sales this week? $";
        std::cin >> grossSales;
    }

    double weeklyPay{commissionFlatRate + (grossSales * commissionSalesRate)};
    std::cout << "Your pay for this week is therefore $" << weeklyPay << '\n';
}

void calculatePieceworker() {
    std::cout << "Greetings, Pieceworker\n";

    // do not permit negative values
    int pieces{-1};
    while (pieces < 0) {
        std::cout << "How many of your assigned item did you sell this week? ";
        std::cin >> pieces;
    }

    double pieceSaleValue{-1};
    while (pieceSaleValue < 0) {
        std::cout << "How much money do you earn per item sale? $";
        std::cin >> pieceSaleValue;
    }

    double weeklyPay{pieces * pieceSaleValue};
    std::cout << "Your pay for this week is therefore $" << weeklyPay << '\n';
}