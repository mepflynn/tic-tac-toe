// Standard Lib Includes
#include <iostream>

// Local Includes
#include "board.hpp"

// Namespace Declarations
using namespace tictactoe;
using namespace std;

// GAME PLAY MODES /////////////////////////////////////////////////////////////////

void normalMode() {
    // Initialize an empty gameboard
    board gameBoard = board();

    // Loop variables
    int move;
    string gameState;

    // Introduce the game
    cout << "Hello, and welcome to tictactoe" << endl;
    cout << "The game is played via the following key, use these nums to target your moves:" << endl;

    gameBoard.displayKey();

    cout << "You can always input 'key' instead of your move if you want a reminder" << endl;


    // Loop successive playerturns, checking for gameOver state after each
    while (true) {
        // Show gamestate
        gameBoard.displayBoard();

        cout << "Player " << gameBoard.whoseTurn() << "'s turn." << endl << "Please input a move (1-9)" << endl;

        do {
            move = gameBoard.moveInput();
        } while (!gameBoard.isPlayValid(move));

        // Move has been validated, play it
        ///TODO: move needs to -= 1 possibly? checkm moveInput()
        gameBoard.makePlay(move);

        // Did that move end the game?
        gameState = gameBoard.gameIsOver();
        
        if (gameState == "x") {
            cout << "Player x wins! Suck on them eggs, player o." << endl;
            return;
        } else if (gameState == "o") {
            cout << "Player o wins! Pucker up, player x." << endl;
            return;
        } else if (gameState == "tie") {
            cout << "Tie game! So, ultimately, you both lose." << endl;
            return;
        } else if (gameState == "game_not_over") {
            // Switch turns and re-loop
            gameBoard.switchTurns();
        } else {
            cout << "Error: Gamestate not recognized. Look for bug in gameIsOver(). Exiting." << endl;
            return;
        }
        
    }
}   

    ////////////////////////////////////////////////////////////////////////////////

    // HELPER FUNCTIONS ////////////////////////////////////////////////////////////


    

int main(int argc, char** argv) {
    // MODES:
    // 0 - normal mode (blank board, both human players)
    //
    // 1 - CPU mode (blank board, robot opponent)
    //
    // 2 - partial start (input an in-progress board, both human players)
    //
    // 3 - partial against CPU (in-progress board, against robot opponent)

    ///TODO: Currently only implementing normal mode

    // First argument denotes gamemode choice
    int gameMode = stoi(argv[1]);

    
    if (gameMode == 0) {
        // NORMAL MODE
        normalMode();
    } else {
        cout << "NOT YET IMPLEMENTED OR INVALID MODE #, EXITING" << endl;
        return 1;
    }

}
