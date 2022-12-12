
#include <board.hpp>
#include <vector>

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
    bool board::makePlay(int playPosition) {

    }

    // Is this play invalid? (playing on an open, valid space)
    bool board::isPlayValid() {

    }

    // Switch turns to the over player (x->o, o->x)
    void board::switchTurns() {

    }


    // Display, Printing, and Input functions ///////////////////

    // Display Board
    void board::displayBoard() {

    }

    // 1 | 2 | 3
    // 4 | 5 | 6
    // 7 | 8 | 9

    // Take a move input on cmd line, return the int
    // return -1 for invalid inputs
    int board::moveInput() {

    }
}