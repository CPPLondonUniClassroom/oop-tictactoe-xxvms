cmake_minimum_required(VERSION 3.13)
project(NoughtsAndCrosses)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_HEADERS include/interface/IRenderer.h include/Renderer.h include/interface/IPlayer.h include/Controller.h include/BoardPosition.h include/Board.h include/HumanPlayer.h include/utility.h)
set(PROJECT_SOURCES src/Board.cpp src/Renderer.cpp src/Controller.cpp src/HumanPlayer.cpp)
#set(PROJECT_TESTS )# add my tests

add_executable(NoughtsAndCrosses src/main.cpp ${PROJECT_HEADERS} ${PROJECT_SOURCES})
target_include_directories(NoughtsAndCrosses PRIVATE include)

add_executable(CorssANDOes_test ${PROJECT_HEADERS} ${PROJECT_SOURCES} Test/catch.hpp Test/testmain.cpp)
target_include_directories(CorssANDOes_test PRIVATE include Test)
