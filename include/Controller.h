#pragma once
#include "Renderer.h"
#include "Board.h"
#include "interface/IPlayer.h"

class Controller {
private:
    IPlayer &player1, &player2; // Creating players
    Renderer renderer;
    int choice = 20;
    Board &board_A;
    bool no_victory = true;
    bool p1 = true;

public:
    Controller(IPlayer& Player1, IPlayer& Player2, Renderer renderer, Board& board): player1(Player1), player2(Player2), board_A(board){}

    void PlayGame();
    void victory(const IPlayer& iPlayer);

};

/*
Controller

This pertains to include/Controller.h and src/Controller.cpp

The controller orchestrates the game and is aware of a few different classes in order to achieve that goal.

Controller()

The constructor will need a few arguments. All of these should be stored in its instance.

2x IPlayer - You must use either references or pointers since these are an interface. They represent Player1 and Player2.

IRenderer - This will again need to be a reference or pointer. This will be used to render the state of the board onto the screen.

Board - The controller will take care of dumping the board to the screen via the Renderer and informing the board of players wishing to occupy a particular space as part of gameplay.

Again, all of the above needs to be stored in the Controller instance.

PlayGame()

This kicks off gameplay. The basic game loop is as follows:

Ask Player1 to make a move by calling their IPlayer instance.
Update the board with Player1's move.
Use the Renderer to print the new state of the board to the screen.
Check if Player1 has won the game. If they have, let them know and return.
Ask Player2 to make a move in the same manner as for Player1.
Again use the Renderer to print the new state of the board.
Check if Player2 has won the game. If they have, let them know and return.
Bear in mind, there are 9 squares, so Player 2 gets one less square to place than Player 1.

You must not optimise away the call to Player1 for the final turn. If you wish to optimise it, you should do that in the HumanPlayer class.

 */