#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playGame() {
    // Seed random number generator
    srand(static_cast<unsigned>(time(0)));
    int randomNumber = rand() % 100 + 1; // Generate a number between 1 and 100
    int attempts = 5;                    // Maximum number of attempts
    int guess;                           // Player's guess
    bool won = false;                    // Tracks if the player wins

    cout << "Welcome to Orankiiey’s Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "You have " << attempts << " attempts to guess the correct number." << endl;

    // Game loop
    for (int i = 1; i <= attempts; ++i) {
        cout << "Attempt " << i << ": Enter your guess number: ";
        cin >> guess;

        // Validate input
        if (guess < 1 || guess > 100) {
            cout << "Please enter any number between 1 and 100!" << endl;
            --i; // Deduct attempt if input is invalid
            continue;
        }

        if (guess == randomNumber) {
            cout << "Congratulations! You have  guessed the correct number: " << randomNumber << "!" << endl;
            won = true;
            break;
        } else if (guess < randomNumber) {
            cout << "Too low! Please try again." << endl;
        } else {
            cout << "Too high! Please try again." << endl;
        }
    }

    if (!won) {
        cout << "Sorry, you've used all your attempts. The correct number is: " << randomNumber << "." << endl;
    }

    cout << "Thank you for playing Orankiiey’s Guessing Game!" << endl;
}

int main() {
    playGame();
    return 0;
}
