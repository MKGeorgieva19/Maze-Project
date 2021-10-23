#include <iostream>
#include <conio.h>
#include "front-end.h"
#include "back-end.h"

void printMenu()
{
    int option_counter = 1;
    bool user_choice = false;

    cout << "==============================" << endl;
    cout << "             MENU             " << endl;
    cout << "==============================" << endl;
    cout << "                              " << endl;
    cout << "          -> Play            " << endl;
    cout << "             About             " << endl;
    cout << "             Team             " << endl;
    cout << "             Exit             " << endl;
    cout << "                              " << endl;
    cout << "==============================" << endl;

    while (true)
    {
        int user_input = _getch();

        system("CLS");

        // will add title function in the future

        switch (user_input)
        {
        case UP:
            if (option_counter > 1)
                option_counter -= 1;
            break;

        case DOWN:
            if (option_counter < 4)
                option_counter += 1;
            break;

        case ENTER:
            user_choice = true;
            break;
        }

        if (!user_choice)
        {
            switch (option_counter)
            {
            case 1:
                cout << "==============================" << endl;
                cout << "             MENU             " << endl;
                cout << "==============================" << endl;
                cout << "                              " << endl;
                cout << "          -> Play            " << endl;
                cout << "             About             " << endl;
                cout << "             Team             " << endl;
                cout << "             Exit             " << endl;
                cout << "                              " << endl;
                cout << "==============================" << endl;

                break;

            case 2:
                cout << "==============================" << endl;
                cout << "             MENU             " << endl;
                cout << "==============================" << endl;
                cout << "                              " << endl;
                cout << "             Play            " << endl;
                cout << "          -> About             " << endl;
                cout << "             Team             " << endl;
                cout << "             Exit             " << endl;
                cout << "                              " << endl;
                cout << "==============================" << endl;

                break;

            case 3:
                cout << "==============================" << endl;
                cout << "             MENU             " << endl;
                cout << "==============================" << endl;
                cout << "                              " << endl;
                cout << "             Play            " << endl;
                cout << "             About             " << endl;
                cout << "          -> Team             " << endl;
                cout << "             Exit             " << endl;
                cout << "                              " << endl;
                cout << "==============================" << endl;

                break;

            case 4:
                cout << "==============================" << endl;
                cout << "             MENU             " << endl;
                cout << "==============================" << endl;
                cout << "                              " << endl;
                cout << "             Play            " << endl;
                cout << "             About             " << endl;
                cout << "             Team             " << endl;
                cout << "          -> Exit             " << endl;
                cout << "                              " << endl;
                cout << "==============================" << endl;

                break;
            }
        }

        else
        {
            goToChoice(option_counter);
            break;
        }
    }
}

int goToChoice(int option)
{
    switch (option)
    {
    case 1:
        askForDifficulty();
        break;

    case 2:
        // about();
        break;

    case 3:
        // team();
        break;

    case 4:
        system("CLS");
        cout << "Thank you for playing our game! :)" << endl;
        exit(0);
    }
}

void askForDifficulty()
{
    int option_counter = 1;
    bool user_choice = false;

    cout << "==============================" << endl;
    cout << "             MENU             " << endl;
    cout << "==============================" << endl;
    cout << "                              " << endl;
    cout << "       -> Easy            " << endl;
    cout << "          Medium             " << endl;
    cout << "          Hard             " << endl;
    cout << "                              " << endl;
    cout << "==============================" << endl;

    while (true)
    {
        int user_input = _getch();

        system("CLS");

        // Where to add title function in the future

        switch (user_input)
        {
        case UP:
            if (option_counter > 1)
                option_counter -= 1;
            break;

        case DOWN:
            if (option_counter < 4)
                option_counter += 1;
            break;

        case ENTER:
            user_choice = true;
            break;
        }

        if (!user_choice)
        {
            switch (option_counter)
            {
            case 1:
                cout << "==============================" << endl;
                cout << "             MENU             " << endl;
                cout << "==============================" << endl;
                cout << "                              " << endl;
                cout << "       -> Easy            " << endl;
                cout << "          Medium             " << endl;
                cout << "          Hard             " << endl;
                cout << "                              " << endl;
                cout << "==============================" << endl;

                break;

            case 2:
                cout << "==============================" << endl;
                cout << "             MENU             " << endl;
                cout << "==============================" << endl;
                cout << "                              " << endl;
                cout << "          Easy            " << endl;
                cout << "       -> Medium             " << endl;
                cout << "          Hard             " << endl;
                cout << "                              " << endl;
                cout << "==============================" << endl;

                break;

            case 3:
                cout << "==============================" << endl;
                cout << "             MENU             " << endl;
                cout << "==============================" << endl;
                cout << "                              " << endl;
                cout << "          Easy            " << endl;
                cout << "          Medium             " << endl;
                cout << "       -> Hard             " << endl;
                cout << "                              " << endl;
                cout << "==============================" << endl;

                break;
            }
        }

        else
        {
            //createBoard(option_counter);
            break;
        }
    }
}

void about()
{
    // about information
}

void team()
{
    // team information
}