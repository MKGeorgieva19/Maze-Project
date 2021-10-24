#include <iostream>
#include "front-end.h"
#include "back-end.h"

char** createMaze(unsigned difficulty) // Curent maze design is temporary
{
    unsigned size = 40;
    char** maze = 0;
    maze = new char* [size];

    for (unsigned i = 0; i < size; i++)
    {
        maze[i] = new char[size];
    }

    switch (difficulty)
    {
        case 1: // Only case one is set up correctly for now because of testing
        {
            char temp_maze[13][19] = {
            {'.','-','-','.','-','-','.','-','-','.','-','-','.','-','-','.','-','-','.'},
            {' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ','|'},
            {':',' ',' ',':','-','-',':',' ',' ',':',' ',' ',':',' ',' ',':',' ',' ',':'},
            {'|',' ',' ','|',' ',' ',' ',' ',' ','|',' ',' ','|',' ',' ',' ',' ',' ','|'},
            {':',' ',' ',':',' ',' ',':',' ',' ',':','-','-',':','-','-',':','-','-',':'},
            {'|',' ',' ','|',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','|'},
            {':',' ',' ',':',' ',' ',':','-','-',':','-','-',':','-','-',':',' ',' ',':'},
            {'|',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ','|',' ',' ','|'},
            {':',' ',' ',':','-','-',':','-','-',':',' ',' ',':',' ',' ',':',' ',' ',':'},
            {' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ','|',' ',' ','|',' ',' ','|'},
            {':','-','-',':',' ',' ',':',' ',' ',':','-','-',':',' ',' ',':',' ',' ',':'},
            {'|',' ',' ',' ',' ',' ',' ',' ',' ','|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
            {':','-','-',':','-','-',':','-','-',':','-','-',':','-','-',':','-','-',':'},
            };

            for (unsigned i = 0; i < 13; i++)
            {
                for (unsigned j = 0; j < 19; j++)
                {
                    maze[i][j] = temp_maze[i][j];
                }
            }

            return maze;
            break;
        }

        case 2:
        {
            char temp_maze[10][10] = {
                { '-' , '-', '-' , '-', '-' , '-', '-' , '-', '-' , '-'},
                { ' ' , ' ', ' ' , ' ', '|' , ' ', ' ' , ' ', ' ' , '|'},
                { '|' , '-', '-' , ' ', ' ' , ' ', '_' , '_', ' ' , '|'},
                { '|' , ' ', '|' , ' ', '|' , ' ', '|' , '|', ' ' , '|'},
                { '|' , ' ', '|' , ' ', '|' , ' ', '|' , '|', '-' , '|'},
                { '|' , ' ', '|' , ' ', '|' , ' ', '|' , '|', ' ' , '|'},
                { '|' , ' ', '|' , ' ', '|' , ' ', '|' , '|', ' ' , ' '},
                { '|' , ' ', '|' , ' ', '|' , '-', '|' , '|', ' ' , '|'},
                { '|' , ' ', ' ' , ' ', ' ' , ' ', ' ' , ' ', ' ' , '|'},
                { '-' , '-', '-' , '-', '-' , '-', '-' , '-', '-' , '-'}
            };

            for (unsigned i = 0; i < size; i++)
            {
                for (unsigned j = 0; j < size; j++)
                {
                    maze[i][j] = temp_maze[i][j];
                }
            }

            return maze;
            break;
        }

        case 3:
        {
            char temp_maze[10][10] = {
                { '-' , '-', '-' , '-', '-' , '-', '-' , '-', '-' , '-'},
                { ' ' , ' ', ' ' , ' ', '|' , ' ', ' ' , ' ', ' ' , '|'},
                { '|' , '-', '-' , ' ', ' ' , ' ', '_' , '_', ' ' , '|'},
                { '|' , ' ', '|' , ' ', '|' , ' ', '|' , '|', ' ' , '|'},
                { '|' , ' ', '|' , ' ', '|' , ' ', '|' , '|', '-' , '|'},
                { '|' , ' ', '|' , ' ', '|' , ' ', '|' , '|', ' ' , '|'},
                { '|' , ' ', '|' , ' ', '|' , ' ', '|' , '|', ' ' , ' '},
                { '|' , ' ', '|' , ' ', '|' , '-', '|' , '|', ' ' , '|'},
                { '|' , ' ', ' ' , ' ', ' ' , ' ', ' ' , ' ', ' ' , '|'},
                { '-' , '-', '-' , '-', '-' , '-', '-' , '-', '-' , '-'}
            };

            for (unsigned i = 0; i < size; i++)
            {
                for (unsigned j = 0; j < size; j++)
                {
                    maze[i][j] = temp_maze[i][j];
                }
            }

            return maze;
            break;
        }
    }

    return maze;
}

int getMazeRows(int difficulty)
{
    switch (difficulty)
    {
    case 1:
        return 13;
    }
}

int getMazeCols(int difficulty)
{
    switch (difficulty)
    {
    case 1:
        return 19;
    }
}

void game(char** maze, int rows, int cols)
{
    bool win = false;

    while (!win)
    {
        displayMaze(maze, rows, cols);

        win = true; // just to see if maze prints out

        // makeMove(maze);
    }

    // da naprawq funkciq deto samo izwejda mazeto

    // drugoto ot taq funkciq da sa wuwejdane i checkowe
}

void displayMaze(char** maze, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << maze[i][j];
        }

        cout << endl;
    }
}