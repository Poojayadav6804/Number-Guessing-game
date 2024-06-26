#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void guessingGame()
{
    srand(static_cast<unsigned int>(time(0)));
    
    // Generate any number between 1 and 100
    int numberToGuess = rand() % 100 + 1;
    int guess = 0;
    
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    
    while (guess != numberToGuess) {
        // Get the user's guess
        cout << "Please enter your guess: ";
        cin >> guess;
        
        // Provide hints such as "Too high" or "Too low"
        if (guess < numberToGuess) {
            cout << "Too low!" << endl;
        } else if (guess > numberToGuess) {
            cout << "Too high!" << endl;
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
        }
    }
}

int main() {
    guessingGame();
    return 0;
}