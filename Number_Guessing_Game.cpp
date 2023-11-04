#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int tries = 0;
    bool hasGuessedCorrectly = false;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I'm thinking of a number between 1 and 100. Can you guess it?" << std::endl;

    while (!hasGuessedCorrectly) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        tries++;

        if (guess == secretNumber) {
            hasGuessedCorrectly = true;
            std::cout << "Congratulations! You guessed the number " << secretNumber << " in " << tries << " tries." << std::endl;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Too high! Try again." << std::endl;
        }
    }

    return 0;
}
