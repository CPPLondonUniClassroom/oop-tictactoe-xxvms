#include "HumanPlayer.h"
#include <iostream>

char HumanPlayer::Symbol() const{

  return player;

}

BoardPosition HumanPlayer::TakeTurn(const std::vector<BoardPosition>& Board_position) {


  for (auto a : Board_position){

    std::cout << static_cast<int>(a) << '\n';

  }

  std::cout << "Your move Friendo....:" << '\n';
  std::cin >> move;
  //Board_position.emplace_back(move);


/*
TakeTurn()

This function is again, an override for the interface. See the parameters and return type described in the
interface above.

The argument it takes should be used to tell the user which spaces are available and then their input should be read.
The utility.h header provides convenience functions to help you with doing this.

After you have read a valid choice from the user, you need to return it. It should not allow a player
 to select an already-occupied space.
 */
}





