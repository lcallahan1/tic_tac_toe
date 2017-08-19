// Tic-Tac-Toe pratice project
#include <iostream>
using namespace std;

void startGame();
void displayBoard();
void initializeBoard();

char board[3][3];

int main()
{
    cout << "Let's play!" << endl;
    startGame();

    return 0;
}

void initializeBoard() 
{   for(int j = 0; j < 3; j++){
        for(int i =0; i <3; i++)
        {
            board[j][i] = '_';
        }
}
}

void startGame() 
{
    initializeBoard();
    displayBoard();
    for(int turn = 0; turn < 9; turn++)
    {
        int row, column;
        char player;
        cout << "which row?\n";
        cin >> row;
        cout << "which column?\n";
        cin >> column;
        cout << "X or O?\n";
        cin >> player;

        board[row][column] = player; //updating board with turns
        displayBoard(); // call function to re-display board after each turn
    }
}

void displayBoard()
{
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++)
        {
            cout << " " << board[j][i] << " ";

        }
        cout << endl;
    }
 
}

// XXX
// XXX
// XXX
// 

// _ _ _
// XXX
// XXX