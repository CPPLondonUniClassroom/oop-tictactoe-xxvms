#include "HumanPlayer.h"
#include "Board.h" //todo that does not make sense!!!

char HumanPlayer::Symbol() const{

  return player;

}

BoardPosition HumanPlayer::TakeTurn(const std::vector<BoardPosition>& free_position) {

  // print list of free position Controler will give this
  // return position picked by user
  //board.OccupyPosition(EnumBR, Player2)
  //;
  for (auto a: free_position){

    std::cout << static_cast<int>(a) << '\n';
    std::cout << " Balh\n";

  }





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





