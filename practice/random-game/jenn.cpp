#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // set the random number seed, can use 0 or nullptr
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // generate random number from 1 to 100 inclusive
    int randomNumber{1 + std::rand() % 100};
    int guess{0};
    int numberOfGuesses{0};
    // use a bool value to control game continue
    bool game{true};

    while (guess != randomNumber && game) {
        std::cout << "Please guess a number (1 - 100): ";
        std::cin >> guess;

        // skip guess if it is outside the range
        if (guess < 1 || guess > 100) continue;

        // increment guess
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
                randomNumber = 1 + std::rand() % 100;
                guess = 0;
                numberOfGuesses = 0;
            } else {
                // this will end the loop
                game = false;
            }
        }
    }
}
