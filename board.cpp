
#include <board.hpp>
#include <vector>
#include <iostream>

using namespace std;


namespace tictactoe{

    // Default Constructor, no params required
    board::board() {
        // Populate the board with blank spaces (char(32))
        for (int i = 0; i < 9; i++) {
            gameBoard.push_back(' ');
        }

        // Start on player x's turn
        currentTurn = 'x';
    }


    // @Params
    // -newBoard: a partially played gameboard consisting of ' ','x', and 'o'
    board::board(vector<char> newBoard, char startTurn) {
        ///TODO: Implement fault detection for improper newBoard
        gameBoard = newBoard;

        currentTurn = startTurn;
    }


    // Gameplay and rules functions //////////////////////////

    // Check for rows of three, which would 
    // mean one of the players has one
    // Also look for tie game (all spaces full)
    bool board::gameIsOver() {
        
    }

    // The play has already been validated
    // Make a play onto the game board
    bool board::makePlay(int playPos) {
        gameBoard[playPos - 1] = currentTurn;
    }

    // Is this play invalid? (playing on an open space)
    bool board::isPlayValid(int playPos) {
        return (gameBoard[playPos - 1] == ' ');
    }

    // Switch turns to the over player (x->o, o->x)
    void board::switchTurns() {
        if (currentTurn == 'x') {
            currentTurn = 'o';
        } else {
            currentTurn = 'x';
        }
    }


    // Display, Printing, and Input functions ///////////////////

    // Display Board
    void board::displayBoard() {

        cout << "Current game board" << endl;
        cout << gameBoard[0] << "|" << gameBoard[1] << "|" << gameBoard[2] << endl;
        cout << "-+-+-" << endl;
        cout << gameBoard[3] << "|" << gameBoard[4] << "|" << gameBoard[5] << endl;
        cout << "-+-+-" << endl;        
        cout << gameBoard[6] << "|" << gameBoard[7] << "|" << gameBoard[8] << endl;   

    }

    // Show the above positional numbers for user reference
    void displayKey() {
        cout << "The positions on the board are keyed in this format:" << endl;
        cout << "1|2|3" << endl;
        cout << "-+-+-" << endl;
        cout << "4|5|6" << endl;
        cout << "-+-+-" << endl;        
        cout << "7|8|9" << endl;  
    }

    // Take a move input on cmd line, return the int
    // return -1 for invalid inputs
    int board::moveInput() {
        
        int move;

        bool valid;
        
        // Loops for repeated input until a valid move is supplied
        // returns that valid move
        do {
            displayKey();
            displayBoard();

            cout << "Please supply a valid input move:" << endl;
            cin >> move;

            valid = isPlayValid(move);

            if (!valid || move < 1 || move > 9) {
                cout << "This move is invalid. A valid move must be an integer from 1 to 9 which doesn't overlap an existing play." << endl;
            } else {
                // valid move found
                return move;
            }
        } while (true);
    }
}