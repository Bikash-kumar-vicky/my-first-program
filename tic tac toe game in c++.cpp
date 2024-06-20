#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to draw the Tic Tac Toe board
   cout << "-------------" << endl;
    for (int i void drawBoard(const vector<vector<char>>& board) {
 = 0; i < 3; ++i) {
        cout << "| ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " | ";
        }
        cout << endl << "-------------" << endl;
    }
}

// Function to check if there is a winner
char checkWinner(const vector<vector<char>>& board) {
    // Check rows
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return board[i][0];
    }
    // Check columns
    for (int j = 0; j < 3; ++j) {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
            return board[0][j];
    }
    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return board[0][0];
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return board[0][2];
    // If no winner
    return ' ';
}

// Function to check if the board is full
bool isBoardFull(const vector<vector<char>>& board) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ')
                return false;
        }
    }
    return true;
}

// Main function to play the game
int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));
    bool isPlayer1 = true;
    char winner = ' ';
    int row, col;

    cout << "Welcome to Tic Tac Toe!" << endl;
    cout << "Player 1: X, Player 2: O" << endl;

    while (winner == ' ' && !isBoardFull(board)) {
        drawBoard(board);
        if (isPlayer1)
            cout << "Player 1's turn (X): ";
        else
            cout << "Player 2's turn (O): ";
        cin >> row >> col;

        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            cout << "Invalid move! Try again." << endl;
            continue;
        }

        if (isPlayer1)
            board[row - 1][col - 1] = 'X';
        else
            board[row - 1][col - 1] = 'O';

        winner = checkWinner(board);
        isPlayer1 = !isPlayer1;
    }

    drawBoard(board);

    if (winner != ' ')
        cout << "Player " << ((winner == 'X') ? 1 : 2) << " wins!" << endl;
    else
        cout << "It's a draw!" << endl;

    return 0;
}
