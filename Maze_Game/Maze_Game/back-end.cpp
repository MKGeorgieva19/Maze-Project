#include <iostream>
#include <conio.h>      // Used for _getch()
#include "front-end.h"
#include "back-end.h"

int currentX = 1, currentY = 1;
int endX, endY;
int turns = 0;

char** createMaze(unsigned difficulty) // Creates maze according to the difficulty
{
    unsigned max_size = 400;
    char** maze;                // Maze is a dynamic matrix
    maze = new char* [max_size];

    for (unsigned i = 0; i < max_size; i++)
    {
        maze[i] = new char[max_size];
    }

    switch (difficulty)
    {
        case 1: // Easy maze
        {
            char temp_maze[18][25] = {
                { '.' , '.', '.' , '.', '.', '.' , '.', '.' , '.', '.', '.' , '.', '.' , '.', '.', '.' , '.', '.' , '.', '.', '.' , '.', '.' , '.', '.'},
                { ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ':'},
                { ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ';' , '.', '-', '.' , '-', '.' , '-', '.', ';' , ' ', ' ' , ' ', ':'},
                { ':' , '.', '-' , '.', '-', '.' , '-', '.' , '-', '.', '-' , '.', ';' , ' ', ' ', ' ' , ':', ' ' , ' ', ' ', ':' , ' ', ' ' , ' ', ':'},
                { ':' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ' ', ' ' , ':', ' ' , ' ', ' ', ':' , ' ', ' ' , ' ', ':'},
                { ':' , ' ', ' ' , ' ', ':', ' ' , ' ', ' ' , ';', '-', '.' , '-', '.' , ' ', ' ', ' ' , ':', ' ' , ' ', ' ', ';' , ' ', ' ' , ' ', ':'},
                { ':' , ' ', ' ' , ' ', ':', ' ' , ' ', ' ' , ':', ' ', ' ' , ' ', ' ' , ' ', ' ', ' ' , ':', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ':'},
                { ':' , ' ', ' ' , ' ', ':', ' ' , ' ', ' ' , ';', '.', '-' , '.', '-' , '.', '-', '.' , ':', '-' , '.', '-', ';' , ' ', ' ' , ' ', ':'},
                { ':' , ' ', ' ' , ' ', ':', ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ' ', ':' , ' ', ' ' , ' ', ':'},
                { ':' , ' ', ' ' , ' ', ';', '.' , '-', '.' , '-', '.', '-' , '.', '-' , ';', ' ', ' ' , ' ', '.' , '-', '.', ';' , ' ', ' ' , ' ', ':'},
                { ':' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ':', ' ', ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ':'},
                { ':' , '-', '.' , '-', ';', ' ' , ' ', ' ' , ';', ' ', ' ' , ' ', ' ' , ';', '-', '.' , '-', '.' , '-', '.', '-' , '.', '-' , '.', ':'},
                { ':' , ' ', ' ' , ' ', ':', ' ' , ' ', ' ' , ':', ' ', ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ':'},
                { ':' , ' ', ' ' , ' ', ':', ' ' , ' ', ' ' , ';', '-', '.' , '-', '.' , '-', '.', '-' , '.', '-' , '.', '-', ';' , ' ', ' ' , ' ', ':'},
                { ':' , ' ', ' ' , ' ', ':', ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ' ', ':' , ' ', ' ' , ' ', ':'},
                { ':' , ' ', ' ' , ' ', ':', '-' , '.', '-' , '.', '-', '.' , '-', '.' , '-', '.', '-' , '.', '-' , '.', '-', ';' , ' ', ' ' , ' ', ':'},
                { ':' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ' ', ' ' , ' ', ' ' , ' ', ' '},
                { ':' , '.', '.' , '.', '.', '.' , '.', '.' , '.', '.', '.' , '.', '.' , '.', '.', '.' , '.', '.' , '.', '.', '.' , '.', '.' , '.', '.'}
            };

            for (unsigned i = 0; i < 18; i++)
            {
                for (unsigned j = 0; j < 25; j++)
                {
                    maze[i][j] = temp_maze[i][j];
                }
            }

            endX = 16;
            endY = 24;

            return maze;
            break;
        }

        case 2: // Medium maze
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

        case 3: // Hard maze
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
            return 18;
            break;
        case 2:
            break;
        case 3:
            break;
    }

    return 0;
}

int getMazeCols(int difficulty)
{
    switch (difficulty)
    {
    case 1:
        return 25;
        break;
    case 2:
        break;
    case 3:
        break;
    }

    return 0;
}

void game(char** maze, int rows, int cols)
{
    bool win = false;

    maze[currentX][currentY] = '\2';

    while (!win)
    {
        displayMaze(maze, rows, cols);

        makeMove(maze);

        if (checkIfWon(maze))
        {
            displayMaze(maze, rows, cols);
            printWinMessage();
            win = true;
        }
    }

    resetGame(maze, rows);
}

void displayMaze(char** maze, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        cout << "              ";

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

    switch (user_input)
    {
        case UP:
            if (maze[currentX - 1][currentY] == ' ' && currentX != 0)
            {
                maze[currentX][currentY] = ' ';
                currentX -= 1;
                maze[currentX][currentY] = '\2';
                turns++;
            }
            break;

        case DOWN:
            if (maze[currentX + 1][currentY] == ' ')
            {
                maze[currentX][currentY] = ' ';
                currentX += 1;
                maze[currentX][currentY] = '\2';
                turns++;
            }
            break;

        case LEFT:
            if (maze[currentX][currentY - 1] == ' ' && currentY != 0)
            {
                maze[currentX][currentY] = ' ';
                currentY -= 1;
                maze[currentX][currentY] = '\2';
                turns++;
            }
            break;

        case RIGHT:
            if (maze[currentX][currentY + 1] == ' ')
            {
                maze[currentX][currentY] = ' ';
                currentY += 1;
                maze[currentX][currentY] = '\2';
                turns++;
            }
            break;
    }

    return maze;
}

bool checkIfWon(char** maze)
{
    if (maze[endX][endY] != ' ')
    {
        return true;
    }

    return false;
}

void printWinMessage()
{
    cout << endl;
    cout << "Congratualtions! You escaped the maze!" << endl;
    cout << "You took " << turns << " turns!" << endl;
}

void resetGame(char** maze, int rows)
{
    currentX = 1;
    currentY = 0;
    turns = 0;

    for (int i = 0; i < rows; ++i)
    {
        delete[] maze[i];
    }

    delete[] maze;

    returnToMenu();
}

void returnToMenu()
{
    cout << endl;
    cout << "Do you want to go to the main menu?" << endl;
    cout << "Press \"Enter\" to go to the menu or \"Esc\" to exit the program" << endl;

    bool flag = false;  // Keeps track if enter or esc was pressed

    while (!flag)
    {
        int user_input = _getch();  // Get user input without kaving to press enter

        // will add title function in the future

        switch (user_input)
        {
        case ENTER:                            // The user pressed the up arrow
            system("CLS");
            printMenu();
            flag = true;
            break;

        case ESC:                          // The user pressed the down arrow
            system("CLS");
            cout << "Thank you for playing our game! :)" << endl;
            exit(0);
        }
    }
}