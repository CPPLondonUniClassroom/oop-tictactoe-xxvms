#define CATCH_CONFIG_MAIN
#include "Board.h"
#include "Controller.h"
#include "HumanPlayer.h"
#include "Renderer.h"
#include "catch.hpp"
#include <algorithm>
#include <iostream> //todo remove not used headers
Renderer renderer;


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
    HumanPlayer Player1{'O'};
    HumanPlayer Player2{'X'};
    THEN("Default construct the board returns 0 on all of the fields"){
      Board board{};

      REQUIRE(board.CurrentState().at(0) == 0);
      REQUIRE(board.CurrentState().at(1) == 0);
      REQUIRE(board.CurrentState().at(2) == 0);
      REQUIRE(board.CurrentState().at(3) == 0);
      REQUIRE(board.CurrentState().at(4) == 0);
      REQUIRE(board.CurrentState().at(5) == 0);
      REQUIRE(board.CurrentState().at(6) == 0);
      REQUIRE(board.CurrentState().at(7) == 0);
      REQUIRE(board.CurrentState().at(8) == 0);
      REQUIRE(board.CurrentState().at(9) == 0);
      REQUIRE(board.CurrentState().at(10) == 0);


      REQUIRE_FALSE(board.CurrentState().at(0) != 0);
      REQUIRE_FALSE(board.CurrentState().at(1) != 0);
      REQUIRE_FALSE(board.CurrentState().at(2) != 0);
      REQUIRE_FALSE(board.CurrentState().at(3) != 0);
      REQUIRE_FALSE(board.CurrentState().at(4) != 0);
      REQUIRE_FALSE(board.CurrentState().at(5) != 0);
      REQUIRE_FALSE(board.CurrentState().at(6) != 0);
      REQUIRE_FALSE(board.CurrentState().at(7) != 0);
      REQUIRE_FALSE(board.CurrentState().at(8) != 0);

    }
  }
}

SCENARIO("Another way to check Board - Vector"){

  GIVEN("Board is created in line"){

    Board board{};
    THEN(" I am adding expected vector of chars"){
      std::vector<char> expected = { 0, 0, 0, 0, 0, 0, 0, 0, 0};

      CHECK_THAT(board.CurrentState(), !Catch::UnorderedEquals(expected));
      //CHECK_THAT(board.CurrentState(), Catch::UnorderedEquals(expected));
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