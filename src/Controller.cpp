#include "Controller.h"
#include <iostream>

void Controller::PlayGame() {

  renderer.RenderBoard(board_A.CurrentState());


  while (no_victory) {
    auto& free_pos = board_A.FreePosition();
    std::cout << "Free slots: \n";
    for (auto a : free_pos) {

      std::cout << static_cast<int>(a) << ", ";
    }
    std::cout << "\nSelect number in range 0-8\n";
    std::cout << "Please take your move:";
    std::cin >> choice;

    if (p1){
      board_A.OccupyPosition(static_cast<BoardPosition>(choice), player1);
      renderer.RenderBoard(board_A.CurrentState());
      victory(player1);

      p1 = false;
    } else {
      board_A.OccupyPosition(static_cast<BoardPosition>(choice), player2);
      renderer.RenderBoard(board_A.CurrentState());
      victory(player2);

      p1 = true;
    }

  }

}
void Controller::victory(const IPlayer &iPlayer) {

  if (board_A.CurrentState().at(0) == iPlayer.Symbol() && board_A.CurrentState().at(1) == iPlayer.Symbol() && board_A.CurrentState().at(2) == iPlayer.Symbol()){
    std::cout << "Victory!\n";
    no_victory = false;
  } else if(board_A.CurrentState().at(0) == iPlayer.Symbol() && board_A.CurrentState().at(3) == iPlayer.Symbol() && board_A.CurrentState().at(6) == iPlayer.Symbol()) {
    std::cout << "Victory!\n";
    no_victory = false;
  } else if(board_A.CurrentState().at(0) == iPlayer.Symbol() && board_A.CurrentState().at(4) == iPlayer.Symbol() && board_A.CurrentState().at(8) == iPlayer.Symbol()) {
    std::cout << "Victory!\n";
    no_victory = false;
  } else if(board_A.CurrentState().at(1) == iPlayer.Symbol() && board_A.CurrentState().at(4) == iPlayer.Symbol() && board_A.CurrentState().at(7) == iPlayer.Symbol()) {
    std::cout << "Victory!\n";
    no_victory = false;
  } else if(board_A.CurrentState().at(2) == iPlayer.Symbol() && board_A.CurrentState().at(5) == iPlayer.Symbol() && board_A.CurrentState().at(8) == iPlayer.Symbol()) {
    std::cout << "Victory!\n";
    no_victory = false;
  } else if(board_A.CurrentState().at(3) == iPlayer.Symbol() && board_A.CurrentState().at(4) == iPlayer.Symbol() && board_A.CurrentState().at(5) == iPlayer.Symbol()) {
    std::cout << "Victory!\n";
    no_victory = false;
  } else if(board_A.CurrentState().at(6) == iPlayer.Symbol() && board_A.CurrentState().at(7) == iPlayer.Symbol() && board_A.CurrentState().at(8) == iPlayer.Symbol()) {
    std::cout << "Victory!\n";
    no_victory = false;
  } else if(board_A.CurrentState().at(2) == iPlayer.Symbol() && board_A.CurrentState().at(4) == iPlayer.Symbol() && board_A.CurrentState().at(6) == iPlayer.Symbol()) {
    std::cout << "Victory!\n";
    no_victory = false;
  }
}