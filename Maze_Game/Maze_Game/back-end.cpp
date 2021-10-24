#include <iostream>
#include <conio.h>
#include "front-end.h"
#include "back-end.h"

int currentX = 1, currentY = 0;

char** createMaze(unsigned difficulty) // Curent maze design is temporary
{
    unsigned max_size = 40;
    char** maze = 0;
    maze = new char* [max_size];

    for (unsigned i = 0; i < max_size; i++)
    {
        maze[i] = new char[max_size];
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

            for (unsigned i = 0; i < max_size; i++)
            {
                for (unsigned j = 0; j < max_size; j++)
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

            for (unsigned i = 0; i < max_size; i++)
            {
                for (unsigned j = 0; j < max_size; j++)
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

    maze[currentX][currentY] = '\2';

    while (!win)
    {
        displayMaze(maze, rows, cols);

        makeMove(maze);
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

char** makeMove(char** maze)
{
    int user_input = _getch();

    system("CLS");

    // will add title function in the future

    switch (user_input)
    {
    case UP:
        if (maze[currentX - 1][currentY] == ' ' && currentX != 0)
        {
            maze[currentX][currentY] = ' ';
            currentX -= 1;
            maze[currentX][currentY] = '\2';
        }
        break;

    case DOWN:
        if (maze[currentX + 1][currentY] == ' ')
        {
            maze[currentX][currentY] = ' ';
            currentX += 1;
            maze[currentX][currentY] = '\2';
        }
        break;

    case LEFT:
        if (maze[currentX][currentY - 1] == ' ' && currentY != 0)
        {
            maze[currentX][currentY] = ' ';
            currentY -= 1;
            maze[currentX][currentY] = '\2';
        }
        break;

    case RIGHT:
        if (maze[currentX][currentY + 1] == ' ')
        {
            maze[currentX][currentY] = ' ';
            currentY += 1;
            maze[currentX][currentY] = '\2';
        }
        break;
    }

    return maze;
}


// make a win function that also shows the number of your turns