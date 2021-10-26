#pragma once

#include "front-end.h"

using namespace std;

#define ENTER	  13
#define UP        72
#define LEFT      75
#define RIGHT     77
#define DOWN      80

char** createMaze(unsigned difficulty);

int getMazeRows(int difficulty);

int getMazeCols(int difficulty);

void game(char** maze, int rows, int cols);

void displayMaze(char** maze, int rows, int cols);

char** makeMove(char** maze);

bool checkIfWon(char** maze);

void printWinMessage(int turns);

void resetGame(char** maze, int rows);