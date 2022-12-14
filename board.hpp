using namespace std;

#include <vector>
#include <string>

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
            string gameIsOver();

            // The play has already been validated
            // Make a play onto the game board
            void makePlay(int playPos);

            // Is this play invalid? (playing on an open, valid space)
            bool isPlayValid(int playPos);

            // Switch turns to the over player (x->o, o->x)
            void switchTurns();


            // Display, Printing, and Input functions ///////////////////

            // Display Board
            void displayBoard();

            // 1 | 2 | 3
            // 4 | 5 | 6
            // 7 | 8 | 9

            // Show the above positional numbers for user reference
            void displayKey();

            // Take a move input on cmd line, return the int
            // return -1 for invalid inputs
            int moveInput();

            // get the 'currentTurn' var as string
            string whoseTurn();







        private:
            // The gameplay board
            vector<char> gameBoard;

            // Will alternate between x & o
            char currentTurn;
    };
}