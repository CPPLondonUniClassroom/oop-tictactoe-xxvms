#pragma once
#include "BoardPosition.h"
#include <vector>

class IPlayer{

    virtual char Symbol() const = 0;
    virtual BoardPosition TakeTurn(const std::vector<BoardPosition>& Board_position) = 0;
};

/*

IPlayer

This pertains to include/interface/IPlayer.h

It should be a class with two public member functions:


Symbol()

This should be a const accessible, pure virtual function.

It should not take any arguments. It should return a char.


TakeTurn()

This should be a pure virtual function.

It should take one argument: a const reference to an std::vector of BoardPosition

The BoardPosition enum is defined in include/BoardPosition.h

*/


