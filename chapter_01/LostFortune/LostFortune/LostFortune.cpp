// LostFortune.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    // We are declaring, a bunch of variables.
    const int  GOLD_PIECES = 900;
    int adventurer, killed, survivor;
    string leader;

    
    // This is a simple game input, where we are displaying some output and taking some inputs.
    cout << "Welcome to Lost Fortune. \n\n";
    cout << "Please Enter the following for your personalized adventure. \n";
    
    cout << "Enter the number of adventurer: ";
    cin >> adventurer;

    cout << "Enter the number of killed: ";
    cin >> killed;

    survivor = adventurer - killed;

    cout << "Enter your last name: ";
    cin >> leader;

    // The game story

    cout << "\nA brave group of " << adventurer << "set out on a quest.";
    cout << "-- in search of the lost treasure of the Ancient Dwarves.";
    cout << "The group was led by that legendary rogue, " << leader << ".\n";
    cout << "\nAlong the way, a band of marauding ogres ambushed the party.";
    cout << "All fought bravely under the commond of " << leader << ", and ogres were defeated, but at a cost.";
    cout << "Of the adventurrers, " << killed << ", were vanquised,";
    cout << "leaving just " << survivor << " in the groupd .\n";
    cout << "\nThe party was about to give up all hope.";
    cout << "But while laying the deceased to rest, ";
    cout << "they stumbled upon the buried fortune. ";
    cout << "So the adventureres split " << GOLD_PIECES << " gold pieces.";
    cout << leader << " held on the extra " << (GOLD_PIECES % survivor);
    cout << " pieces to keep things fair of cours. \n";
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
