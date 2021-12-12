// InventoryReferencer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string& RefToElement(vector<string>& Inventory, int i);
int main()
{
    vector<string> Inventory = { "Sword", "Armor", "Shield" };

    cout << "Sending the returned refernce to cout: \n";
    cout << RefToElement(Inventory, 1);

    cout << "\nAssigning the returned reference to another reference";
    string& rStr = RefToElement(Inventory, 0);

    cout << "\nThe retured reference assigned to sStr: " << rStr;

    rStr = "Club";

    cout << "\nThe changed inventory through returned reference " << Inventory[0];
}


string& RefToElement(vector<string>& Inventory, int i)
{
    return Inventory[i];
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
