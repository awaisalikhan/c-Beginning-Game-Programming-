// TicToeGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Global Constants

const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NO_ONE = 'N';

// Function Prototypes

void Instructions();
char AskYesOrNo(string Question);
int AskNumber(string Question, int High, int Low = 0);
char HumanPiece();
char OpponentPiece(char Piece);
void DisplayBoard(const vector<char>& Board);
char Winner(const vector<char>& Board);
bool IsLegal(const vector<char>& Board);
int HumanMove(const vector<char>& Board);
int ComputerMove(const vector<char>& Board, char Computer);
void AnnounceWinner(char Winner, char Computer, char Human);


int main()
{
    int move;
    const int NUM_SQUARES = 9;
    const vector<char> Board(NUM_SQUARES, EMPTY);

    Instructions();
    char CurrentHumanPiece = HumanPiece();
}


void Instructions()
{
    cout << "Welcome to the ultimate man-machine showdown: Tic-Tac-Toe. \n";
    cout << "Where human brain is pit against silicon processor\n\n";
    cout << "Make your move known by entering a number, 0 - 8. The number \n";
    cout << "corresponds to the desired board position, as illustrated: \n\n";

    cout << " 0 | 1 | 2\n;";
    cout << " 3 | 4 | 5\n;";
    cout << " 6 | 7 | 8\n;";

    cout << "Prepare yourself, human. The battle is about to begin. \n\n";
}

char HumanPiece()
{
    char human_choice = YesOrNo("Do you require the first move?");

    if (human_choice == 'y')
    {
        cout << "\nThen take the first move. You will need it.\n";
        return X;
    }

    else
    {
        cout << "\nYour bravery will be your undoing...I will gor first \n";
        return O;
    }
}

char YesOrNo(string question)
{
    char response;
    do
    {
        cout << question <<  "(y/n): ";
        cin >> response;
    } while (response != 'y' || response != 'n');
}

int AskNumber(string Question, int High, int Low)
{
    int Number;
    do
    {
        cout << Question << " ( " << Low << " - " << High << "):";
    } while (Number > High || Number < Low);
    return Number;
}

char OpponentPiece(char Piece)
{
    if (Piece == 'X')
    {
        return O;
    }
    else
    {
        return X;
    }
}

void DisplayBoard(const vector<char>& Board)
{
    cout << "\n\t" << Board[0] << " | " << Board[1] << " | " << Board[2];
    cout << "\n\t" << "-------------";
    cout << "\n\t" << Board[3] << " | " << Board[4] << " | " << Board[5];
    cout << "\n\t" << "-------------";
    cout << "\n\t" << Board[6] << " | " << Board[7] << " | " << Board[8];
    cout << "\n\t" << "-------------";
}

char Winner(const vector<char>& Board) 
{

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
