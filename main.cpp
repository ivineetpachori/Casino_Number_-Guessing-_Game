#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main() {
    int range = 100;         // Range of numbers from 1 to 100
    int maxAttempts = 5;     // Number of attempts allowed
    int numberToGuess;
    int guess;

    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
    numberToGuess = rand() % range + 1;       // Generate a random number within the specified range

    cout << "Welcome to the Casino Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and " << range << "." << endl;
    cout << "You have " << maxAttempts << " attempts to guess the correct number." << endl;

    for (int attempt = 1; attempt <= maxAttempts; ++attempt) {
        cout << "Attempt " << attempt << ": Enter your guess: ";
        cin >> guess;

        if (guess < 1 || guess > range) {
            cout << "Please enter a number between 1 and " << range << "." << endl;
            --attempt; // Don't count invalid guesses towards the attempt limit
            continue;
        }

        if (guess == numberToGuess) {
            cout << "Congratulations! You guessed the correct number!" << endl;
            return 0;
        } else if (guess < numberToGuess) {
            cout << "The number is higher than " << guess << "." << endl;
        } else {
            cout << "The number is lower than " << guess << "." << endl;
        }
    }

    cout << "Sorry, you've used all your attempts. The correct number was " << numberToGuess << "." << endl;
    return 0;
}
