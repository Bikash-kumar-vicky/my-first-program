#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int number, guess, attempts = 0;
    srand(time(0)); // seed the random number generator
    number = rand() % 100; // generate a random number between 0 and 99

    cout << "Welcome to the Dingo game!" << endl;
    cout << "I'm thinking of a number between 0 and 99." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess < number) {
            cout << "Too low! Try again." << endl;
        } else if (guess > number) {
            cout << "Too high! Try again." << endl;
        }
    } while (guess!= number);

    cout << "Congratulations! You found the number in " << attempts << " attempts." << endl;

    return 0;
}