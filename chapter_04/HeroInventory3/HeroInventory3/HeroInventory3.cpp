// HeroInventory3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    // Declaring the inventory
    vector<string> Inventory;
    Inventory.push_back("Sword");
    Inventory.push_back("Armor");
    Inventory.push_back("Shield");

    // A constant iterator
    vector<string>::iterator MyIterator;
    vector<string>::const_iterator Iter;

    // Looping through each item in the array
    cout << "Your Items :\n";
    for (Iter = Inventory.begin(); Iter != Inventory.end(); ++Iter)
    {
        cout << *Iter << endl;
    }

    cout << "\nYou trade your sword for battle axe" << endl;
    MyIterator = Inventory.begin();
    *MyIterator = "Battle axe";

    cout << "Your Items :\n";
    for (Iter = Inventory.begin(); Iter != Inventory.end(); ++Iter)
    {
        cout << *Iter << endl;
    }

    cout << "\n The item name " << *MyIterator << " has " << MyIterator->size() << "letters in it";

    cout << "\nYou recover a crossbow from a slain enemy";
    Inventory.insert(Inventory.begin(), "crossbow");
    

    cout << "\n You amror is destroyed in a fierce battle" << endl;
    Inventory.erase(Inventory.begin() + 2);

    cout << "Your Items :\n";
    for (Iter = Inventory.begin(); Iter != Inventory.end(); ++Iter)
    {
        cout << *Iter << endl;
    }

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
