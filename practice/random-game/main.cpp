#include <iostream>
#include <random>

void randomGuessingGame();

int main() {
    randomGuessingGame();
    return 0;
}

void randomGuessingGame() {
    // random setup
    std::random_device rd{};
    std::seed_seq ss{rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd()};
    std::mt19937 mt{ss};
    std::uniform_int_distribution<> range{1, 100};

    int randomNumber{range(mt)};
    int guess{0};
    int numberOfGuesses{0};
    bool game{true};

    while (guess != randomNumber && game) {
        std::cout << "Please guess a number (1 - 100): ";
        std::cin >> guess;

        // skip guess if it is outside the range
        if (guess < 1 || guess > 100) continue;

        ++numberOfGuesses;

        if (guess < randomNumber) {
            std::cout << "Your guess is too low. Try again.\n";
        } else if (guess > randomNumber) {
            std::cout << "Your guess is too high. Try again.\n";
        } else {
            std::cout << "You have guessed " << randomNumber << " correctly in " << numberOfGuesses << " guesses!\n\n";

            char response;
            std::cout << "Would you like to continue (y/n): ";
            std::cin >> response;

            if (response == 'y' || response == 'Y') {
                // reset the game state
                randomNumber = range(mt);
                guess = 0;
                numberOfGuesses = 0;
            } else {
                game = false;
            }
        }
    }
}