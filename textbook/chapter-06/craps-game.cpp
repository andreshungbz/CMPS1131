#include <iostream>
#include <random>
#include <chrono>

unsigned int roll2Dice(std::uniform_int_distribution<> die, std::mt19937& mt);

int main() {
    // enumeration class
    enum class Status : unsigned int {CONTINUE, WON, LOST};

    // random setup
    std::random_device rd{};
    std::seed_seq ss{static_cast<std::mt19937::result_type>(std::chrono::steady_clock::now().time_since_epoch().count()),
                     rd(), rd(), rd(), rd(), rd(), rd(), rd()};
    std::mt19937 mt{ss};
    std::uniform_int_distribution<> die6{1, 6};

    unsigned int myPoint{0};
    Status gameStatus;
    unsigned int sumOfDice{roll2Dice(die6, mt)};

    switch(sumOfDice) {
        case 7:
        case 11:
            gameStatus = Status::WON;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = Status::LOST;
            break;
        default:
            gameStatus = Status::CONTINUE;
            myPoint = sumOfDice;
            std::cout << "Point is " << myPoint << std::endl;
            break;
    }

    while (Status::CONTINUE == gameStatus) {
        sumOfDice = roll2Dice(die6, mt);
        if (sumOfDice == myPoint) {
            gameStatus = Status::WON;
        } else {
            if (sumOfDice == 7) {
                gameStatus = Status::LOST;
            }
        }
    }

    if (Status::WON == gameStatus) {
        std::cout << "Player wins" << std::endl;
    } else {
        std::cout << "Player loses" << std::endl;
    }

    return 0;
}

unsigned int roll2Dice(std::uniform_int_distribution<> die, std::mt19937& mt) {
    int die1{die(mt)};
    int die2{die(mt)};
    int sum{die1 + die2};
    std::cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << std::endl;
    return sum;
}