Tic Tac Toe (C++)
A simple console-based Tic Tac Toe game for two players, written in C++.
Features
2-Player Mode: Play against a friend locally
Color-Coded Turns: Player 1 (X) in green, Player 2 (O) in blue
Input Validation: Prevents overwriting occupied cells
Win Detection: Checks all 8 winning combinations
Draw Detection: Declares a tie when the board is full
Turn Counter: Tracks number of moves per player
Play Again: Option to restart without relaunching
How to Play
Run the executable
Player 1 enters a number (1–9) to place X
Player 2 enters a number (1–9) to place O
First to get 3 in a row wins!
plain
Board layout:
 1 | 2 | 3
___|___|___
 4 | 5 | 6
___|___|___
 7 | 8 | 9
   |   |
Requirements
Windows (uses windows.h for console colors and cls)
C++ compiler (g++, MSVC, etc.)
Compilation
bash
g++ tic_tac_toe.cpp -o tic_tac_toe.exe
Screenshot
plain
T i c k T o e Game

   |   |
   x |   O
___|___|___
   |   |
     | x |
___|___|___
   |   |
   O |   |
   |   |
