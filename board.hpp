using namespace std;

#include <vector>

namespace tictactoe {
    class board {
        public:

            // Default constructor
            board();

            // Construct a game in progress
            board(vector<char> newBoard, char startTurn);


            // Gameplay and rules functions //////////////////////////

            // Check for rows of three, which would 
            // mean one of the players has one
            // Also look for tie game (all spaces full)
            bool gameIsOver();

            // The play has already been validated
            // Make a play onto the game board
            bool makePlay(int playPosition);

            // Is this play invalid? (playing on an open, valid space)
            bool isPlayValid();

            // Switch turns to the over player (x->o, o->x)
            void switchTurns();


            // Display, Printing, and Input functions ///////////////////

            // Display Board
            void displayBoard();

            // 1 | 2 | 3
            // 4 | 5 | 6
            // 7 | 8 | 9

            // Take a move input on cmd line, return the int
            // return -1 for invalid inputs
            int moveInput();







        private:
            // The gameplay board
            vector<char> gameBoard;

            // Will alternate between x & o
            char currentTurn;
    };
}