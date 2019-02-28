#pragma once
#include "interface/IPlayer.h"
#include "BoardPosition.h"
#include <vector>

class Board {
private:

  std::vector<char> b_char{};
  std::vector<BoardPosition>myBoard{};


public:
    Board() : b_char('0'){}

    const std::vector<BoardPosition> FreePosition() const; //Todo returns positions that are unoccupied! I need to think what would be the best return type!!!
    void OccupyPosition(const BoardPosition& boardPosition, const IPlayer& iPlayer);
    std::vector<char> CurrentState()const;

};




/*
 * Board

This pertains to include/Board.h and src/Board.cpp

It should be a class and all functions should be public.

The job of this class is to track the state of every cell in the 3x3 grid.

There are essentially 3 possible cases:

Unoccupied
Occupied by Player 1
Occupied by Player 2
You are encouraged to use a standard library container (like std::array or std::vector) to track this, but you do not have to.
*/