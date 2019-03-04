#include "Board.h"

const std::vector<BoardPosition> Board::FreePosition() const {

  std::vector<BoardPosition> local_copy{};

  // todo how to check if position is free?
  // I have to figure out what I need to do here exactly at the moment this
  // is a mess
  for (auto a : b_char) {

    if (a == 0) {
      local_copy.emplace_back(BoardPosition::TOP_LEFT);

    } else {
      continue;
    }
  }

  return local_copy;
  /*
  FreePositions()
  This function should be const accessible. It should return a std::vector
  of BoardPosition elements.

  It should return only the elements that are currently unoccupied. This
  function must not result in any change to class data members (making it
  const accessible will prevent accidentally doing this)*/
}
void Board::OccupyPosition(const BoardPosition &boardPosition,
                           const HumanPlayer &humanPlayer) {

  // todo use unique ptr to IPlayer to store the square used
  // todo throw exception when player tries to move on occupied square!!!!!
  if (boardPosition == BoardPosition::TOP_LEFT) {

    if (b_char.at(0) == 0) {
      if (humanPlayer.Symbol() == 'X') {

        b_char.at(0) = 'X';
      } else {
        b_char.at(0) = 'O';
      }
    } else {
      throw std::invalid_argument("this place was taken Kabum TOP_LEFT");
    }

  } else if (boardPosition == BoardPosition::TOP_MIDDLE) {
    if (b_char.at(1) == 0) {
      if (humanPlayer.Symbol() == 'X') {

        b_char.at(1) = 'X';
      } else {
        b_char.at(1) = 'O';
      }
    } else {
      throw std::invalid_argument("this place was taken Kabum TOP_MIDDLE");
    }

  } else if (boardPosition == BoardPosition::TOP_RIGHT) {

    if (b_char.at(2) == 0) {
      if (humanPlayer.Symbol() == 'X') {

        b_char.at(2) = 'X';
      } else {
        b_char.at(2) = 'O';
      }
    } else {
      throw std::invalid_argument("this place was taken Kabum TOP_RIGHT");
    }

  } else if (boardPosition == BoardPosition::MIDDLE_LEFT) {

    if (b_char.at(3) == 0) {

      if (humanPlayer.Symbol() == 'X') {

        b_char.at(3) = 'X';
      } else {
        b_char.at(3) = 'O';
      }
    } else {
      throw std::invalid_argument("this place was taken Kabum MIDDLE_LEFT");
    }

  } else if (boardPosition == BoardPosition::CENTER) {

    if (b_char.at(4) == 0) {

      if (humanPlayer.Symbol() == 'X') {

        b_char.at(4) = 'X';
      } else {
        b_char.at(4) = 'O';
      }
    } else {
      throw std::invalid_argument("this place was taken Kabum CENTER");
    }

  } else if (boardPosition == BoardPosition::MIDDLE_RIGHT) {

    if (b_char.at(5) == 0) {

      if (humanPlayer.Symbol() == 'X') {

        b_char.at(5) = 'X';
      } else {
        b_char.at(5) = 'O';
      }
    } else {
      throw std::invalid_argument("this place was taken Kabum MIDDLE_RIGHT");
    }

  } else if (boardPosition == BoardPosition::BOTTOM_LEFT) {
    if (b_char.at(6) == 0) {

      if (humanPlayer.Symbol() == 'X') {

        b_char.at(6) = 'X';
      } else {
        b_char.at(6) = 'O';
      }
    } else {
      throw std::invalid_argument("this place was taken Kabum BOTTOM_LEFT");
    }

  } else if (boardPosition == BoardPosition::BOTTOM_MIDDLE) {
    if (b_char.at(7) == 0) {
      if (humanPlayer.Symbol() == 'X') {

        b_char.at(7) = 'X';
      } else {
        b_char.at(7) = 'O';
      }

    } else {
      throw std::invalid_argument("this place was taken Kabum BOTTOM_MIDDLE");
    }
  } else if (boardPosition == BoardPosition::BOTTOM_RIGHT) {
    if (b_char.at(8) == 0) {

      if (humanPlayer.Symbol() == 'X') {

        b_char.at(8) = 'X';
      } else {
        b_char.at(8) = 'O';
      }
    }
  } else {
    throw std::invalid_argument("this place was taken Kabum BOTTOM_RIGHT");
  }

  /*
    OccupyPosition()
    This function is used to tell the Board that a player wishes to occupy a
    square.

     It should take two arguments:

    a const reference to a BoardPosition
    a const reference to an IPlayer
    It should not return anything.

    It should first check that the requested BoardPosition is already occupied.
    If it is occupied, you should throw an exception, or if you don't know what
    that is, print an error out so you can read it. Strictly speaking, you don't
    need to implement this safety check, but you will have a better chance to
    catch any bugs you write later on.

    Assuming it is unoccupied, it should mark the requested position as owned by
    the player. You are free to do this however you wish. It is suggested that
    you may wish to store a pointer to the IPlayer, but you don't have to; the
    point is that you need to reliably track who owns the spot.*/
}

std::vector<char> Board::CurrentState() const {

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
