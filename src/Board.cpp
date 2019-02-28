#include "Board.h"
#include <iostream>

const std::vector<BoardPosition> Board::FreePosition() const{

  std::vector<BoardPosition> local_copy = myBoard;

  //todo how to check if position is free?

  return local_copy;
  /*
      FreePositions()
      This function should be const accessible. It should return a std::vector
     of BoardPosition elements.

      It should return only the elements that are currently unoccupied. This
     function must not result in any change to class data members (making it
     const accessible will prevent accidentally doing this)*/

}
void Board::OccupyPosition(const BoardPosition& boardPosition, const IPlayer& iPlayer){


   //todo use unique ptr to IPlayer to store the square used
  //todo throw exception when player tries to move on occupied square!!!!!
/*
    OccupyPosition()
 This function is used to tell the Board that a player wishes to occupy a square.

     It should take two arguments:

    a const reference to a BoardPosition
    a const reference to an IPlayer
    It should not return anything.

    It should first check that the requested BoardPosition is already occupied. If it is occupied, you should
    throw an exception, or if you don't know what that is, print an error out so you can read it. Strictly speaking,
    you don't need to implement this safety check, but you will have a better chance to catch any bugs you write
    later on.

    Assuming it is unoccupied, it should mark the requested position as owned by the player. You are free to do this
    however you wish. It is suggested that you may wish to store a pointer to the IPlayer, but you don't have to;
    the point is that you need to reliably track who owns the spot.*/
}


std::vector<char> Board::CurrentState()const{

  return b_char;
  /*
  CurrentState()

  This function is used to "dump" the current state of the board. We will use it
  to render the board.

  It should be const accessible. It should not take any arguments.

  It should return an std::vector of char elements. Each element should contain
  either the player's character (namely, an X or an O) or, if unoccupied, that
  particular position should be set to zero.
   */
}

