#include "Controller.h"
#include <iostream>

void Controller::PlayGame() {


  std::cout << "Select number in range 0-9\n";
  std::cout << "Please take your move\n";
  std::cin >> choice;

  auto EnumTL = BoardPosition::TOP_LEFT;

  if (choice == static_cast<int>(EnumTL)){
    player1.TakeTurn(EnumTL);
  }



}