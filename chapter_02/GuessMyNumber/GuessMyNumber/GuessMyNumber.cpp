// GuessMyNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;


int main()
{
    // Setting the random seed

    srand(static_cast<unsigned int>(time(0)));

    // Get a random Secret Number between 1 and 100.
    int SecretNumber = rand() % 100 + 1;

    int Tries = 0;
    int Guess;

    cout << "\nWelcome to Guess My Number \n\n";

    do {

        cout << "Enter a guess: ";
        cin >> Guess;

        ++Tries;

        if (Guess > SecretNumber)
        {
            cout << "Too High \n\n";
        }

        else if (Guess < SecretNumber)
        {
            cout << "Too Low \n\n";
        }

        else
        {
            cout << "\nThat`s it! you got it in " << Tries << " guess!\n";
        }

    }

    while (Guess != SecretNumber);

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
