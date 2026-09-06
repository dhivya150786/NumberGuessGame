#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int main()
{
    int secretNumber;
    int guess;
    int attempts = 0;
    char playAgain;

    // Initialize random number generator
    srand(static_cast<unsigned int>(time(0)));

    cout << "=====================================\n";
    cout << "       NUMBER GUESSING GAME\n";
    cout << "=====================================\n";

    do
    {
        // Generate a random number between 1 and 100
        secretNumber = rand() % 100 + 1;
        attempts = 0;

        cout << "\nI have selected a number between 1 and 100.\n";
        cout << "Try to guess it!\n";

        while (true)
        {
            cout << "\nEnter your guess: ";

            // Validate input
            if (!(cin >> guess))
            {
                cout << "Invalid input! Please enter a number.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            // Check range
            if (guess < 1 || guess > 100)
            {
                cout << "Please enter a number between 1 and 100.\n";
                continue;
            }

            attempts++;

            if (guess < secretNumber)
            {
                cout << "Too low! Try a higher number.\n";
            }
            else if (guess > secretNumber)
            {
                cout << "Too high! Try a lower number.\n";
            }
            else
            {
                cout << "\nCongratulations! 🎉\n";
                cout << "You guessed the correct number: "
                    << secretNumber << "\n";
                cout << "Number of attempts: " << attempts << "\n";
                break;
            }
        }

        cout << "\nDo you want to play again? (Y/N): ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "\n=====================================\n";
    cout << "       Thanks for playing!\n";
    cout << "=====================================\n";

    return 0;
}

