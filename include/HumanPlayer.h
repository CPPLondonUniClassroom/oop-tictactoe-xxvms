#pragma once

#include "interface/IPlayer.h"
#include <iostream>
// todo IF I add here #include "Board.h" I get error that HumanPlayer is not a type

class HumanPlayer : public IPlayer{
private:
    char player{};
    int move{};

public:
  HumanPlayer(const char playerXO): player(playerXO){}
  char Symbol() const override;
  BoardPosition TakeTurn(const BoardPosition& board_position) override;

};

/*

HumanPlayer()

The constructor should take a char which it will need to store in its instance. You can generally expect that you will be given either an X/O for this value, but you don't need to check.

Symbol()

This function is of course the override for the interface. It should simply return the char that you stored when your constructor was called.

TakeTurn()

This function is again, an override for the interface. See the parameters and return type described in the interface above.

The argument it takes should be used to tell the user which spaces are available and then their input should be read. The utility.h headerprovides convenience functions to help you with doing this.

After you have read a valid choice from the user, you need to return it. It should not allow a player to select an already-occupied space.

 */