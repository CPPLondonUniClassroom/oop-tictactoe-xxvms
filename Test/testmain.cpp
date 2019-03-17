#define CATCH_CONFIG_MAIN
#include "Board.h"
#include "Controller.h"
#include "HumanPlayer.h"
#include "Renderer.h"
#include "catch.hpp"
#include <algorithm>
#include <iostream> //todo remove not used headers

/*

SCENARIO("Instantiating a Player"){
  GIVEN("Default constructed players"){

    HumanPlayer Player1{'O'};
    HumanPlayer Player2{'X'};

    REQUIRE(Player1.Symbol() == 'O');
    REQUIRE(Player2.Symbol() == 'X');
    REQUIRE_FALSE(Player1.Symbol() == 'X');
    REQUIRE_FALSE(Player2.Symbol() == 'O');
  }
}

SCENARIO("Creating an empty board"){
  GIVEN("Default constructed players"){
    //HumanPlayer Player1{'O'};
    //HumanPlayer Player2{'X'};
    THEN("Default construct the board returns 0 on all of the fields"){
      Board board{};

      REQUIRE(board.CurrentState().at(0) == '0');
      REQUIRE(board.CurrentState().at(1) == '1');
      REQUIRE(board.CurrentState().at(2) == '2');
      REQUIRE(board.CurrentState().at(3) == '3');
      REQUIRE(board.CurrentState().at(4) == '4');
      REQUIRE(board.CurrentState().at(5) == '5');
      REQUIRE(board.CurrentState().at(6) == '6');
      REQUIRE(board.CurrentState().at(7) == '7');
      REQUIRE(board.CurrentState().at(8) == '8');


      REQUIRE_FALSE(board.CurrentState().at(0) != '0');
      REQUIRE_FALSE(board.CurrentState().at(1) != '1');
      REQUIRE_FALSE(board.CurrentState().at(2) != '2');
      REQUIRE_FALSE(board.CurrentState().at(3) != '3');
      REQUIRE_FALSE(board.CurrentState().at(4) != '4');
      REQUIRE_FALSE(board.CurrentState().at(5) != '5');
      REQUIRE_FALSE(board.CurrentState().at(6) != '6');
      REQUIRE_FALSE(board.CurrentState().at(7) != '7');
      REQUIRE_FALSE(board.CurrentState().at(8) != '8');

      SECTION("Checking if the size of the board is == to 9"){

        REQUIRE(board.CurrentState().size() == 9);
      }


    }
  }
}

SCENARIO("Another way to check Board - Vector"){

  GIVEN("Board is created in line"){

    Board board{};
    THEN(" I am adding expected vector of chars"){
      std::vector<char> expected = { '0', '1', '2', '3', '4', '5', '6', '7', '8'};

      CHECK_THAT(board.CurrentState(), Catch::UnorderedEquals(expected));

    }
  }



}

SCENARIO("Occupy Positions on the board for Player1"){

  GIVEN("Default board is created and Player1, set short Enum names "){

    Board board{};
    HumanPlayer Player1{'X'};

    //fake implementation of user

    auto EnumTL = BoardPosition::TOP_LEFT;
    auto EnumTM = BoardPosition::TOP_MIDDLE;
    auto EnumTR = BoardPosition::TOP_RIGHT;
    auto EnumML = BoardPosition::MIDDLE_LEFT;
    auto EnumC = BoardPosition::CENTER;
    auto EnumMR = BoardPosition::MIDDLE_RIGHT;
    auto EnumBL = BoardPosition::BOTTOM_LEFT;
    auto EnumBM = BoardPosition::BOTTOM_MIDDLE;
    auto EnumBR = BoardPosition::BOTTOM_RIGHT;


    THEN("Fill all squares with Player 1 X") {


      board.OccupyPosition(EnumTL, Player1);
      board.OccupyPosition(EnumTM, Player1);
      board.OccupyPosition(EnumTR, Player1);
      board.OccupyPosition(EnumML, Player1);
      board.OccupyPosition(EnumC, Player1);
      board.OccupyPosition(EnumMR, Player1);
      board.OccupyPosition(EnumBL, Player1);
      board.OccupyPosition(EnumBM, Player1);
      board.OccupyPosition(EnumBR, Player1);

      THEN(" Render the board") {
        Renderer ren;
        ren.RenderBoard(board.CurrentState());
      }
    }
  }
}

SCENARIO("Occupy Positions on the board for Player2") {

  GIVEN("Default board is created and Player2, set short Enum names ") {

    Board board{};
    HumanPlayer Player2{'O'};

    auto EnumTL = BoardPosition::TOP_LEFT;
    auto EnumTM = BoardPosition::TOP_MIDDLE;
    auto EnumTR = BoardPosition::TOP_RIGHT;
    auto EnumML = BoardPosition::MIDDLE_LEFT;
    auto EnumC = BoardPosition::CENTER;
    auto EnumMR = BoardPosition::MIDDLE_RIGHT;
    auto EnumBL = BoardPosition::BOTTOM_LEFT;
    auto EnumBM = BoardPosition::BOTTOM_MIDDLE;
    auto EnumBR = BoardPosition::BOTTOM_RIGHT;

    THEN("Fill all squares with Player 2 0") {

      CHECK_NOTHROW(board.OccupyPosition(EnumTL, Player2));
      CHECK_NOTHROW(board.OccupyPosition(EnumTM, Player2));
      CHECK_NOTHROW(board.OccupyPosition(EnumTR, Player2));
      CHECK_NOTHROW(board.OccupyPosition(EnumML, Player2));
      CHECK_NOTHROW(board.OccupyPosition(EnumC, Player2));
      CHECK_NOTHROW(board.OccupyPosition(EnumMR, Player2));
      CHECK_NOTHROW(board.OccupyPosition(EnumBL, Player2));
      CHECK_NOTHROW(board.OccupyPosition(EnumBM, Player2));
      CHECK_NOTHROW(board.OccupyPosition(EnumBR, Player2));

      THEN(" Render the board") {

        Renderer ren;
        ren.RenderBoard(board.CurrentState());
      }
    }
  }
}
*/
SCENARIO("Testing user input"){
    GIVEN("Default board is created, Player1 and Renderer"){
        Board board{};
        HumanPlayer Player1{'X'};
        HumanPlayer Player2{'O'};

        Renderer renderer{};

        Controller controller{Player1, Player2, renderer, board};

        THEN("use Human Player to execute this"){
        std::cout << "Renderer in action\n";
        controller.PlayGame();
        controller.PlayGame();

            THEN("Render the board"){

                renderer.RenderBoard(board.CurrentState());

            }
        }

    }
}

/*
main()

This pertains to src/main.cpp

This should be simple:

Construct a HumanPlayer for Player1
Construct a HumanPlayer for Player2
Construct a Renderer
Construct a Controller and give it the above 3 things.
Call PlayGame() on the Controller you constructed.
*/