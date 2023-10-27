#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    cout << endl;

    cout << "------------------------\n";
    cout << "| Number Guessing Game |\n";
    cout << "------------------------\n";

    cout << endl;

    cout << "Try to Guess the Number between 1 and 100!\n";

    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1;

    int guess = 0;
    int attempts = 0;


    do {
        cout << "\nEnter Your Guess: ";
        cin >> guess;

        attempts++;

        if (guess < secretNumber) {
            cout << "Too low! Try again.\n";
        }
        else if (guess > secretNumber) {
            cout << "Too high! Try again.\n";
        }
        else {
            cout << "\nCongratulations! You guessed the number in " << attempts << " attempts.\n";
        }

    } while (guess != secretNumber);

    return 0;
}
