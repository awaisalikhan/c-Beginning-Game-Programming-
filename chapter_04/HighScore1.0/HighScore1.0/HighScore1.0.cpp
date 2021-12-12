// HighScore1.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std
;
int main()
{
    
    vector<int>::const_iterator iter;
    // Decalring a score vector.

    vector<int> Scores;
    cout << "Creating a list of scores.";
    Scores.push_back(1500);
    Scores.push_back(2000);
    Scores.push_back(2500);

    cout << "\nHigh Scores: \n";

    for (iter = Scores.begin(); iter != Scores.end(); ++iter)
    {
        cout << *iter << endl;
    }

    cout << "\nFinding a score";
    int Score;
    cout << "\nEnter a score to find ";
    cin >> Score;

    iter = find(Scores.begin(), Scores.end(), Score);
    if (iter != Scores.end())
    {
        cout << "Score found. \n";
    }

    else
    {
        cout << "Score not found.\n";
    }

    // Shuffle The Score
    cout << "\n Shuffiling the Scores.";
    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(Scores.begin(), Scores.end());

    cout << "\nHigh Scores: \n";

    for (iter = Scores.begin(); iter != Scores.end(); ++iter)
    {
        cout << *iter << endl;
    }

    cout << "Sorting the Scores";

    sort(Scores.begin(), Scores.end());

    cout << "\nHigh Scores: \n";

    for (iter = Scores.begin(); iter != Scores.end(); ++iter)
    {
        cout << *iter << endl;
    }




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
