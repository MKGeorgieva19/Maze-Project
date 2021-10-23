#include <iostream>
#include <conio.h>
#include "front-end.h"
#include "back-end.h"

void printMenu()
{
    // The names of variables are not final!

    int option_counter = 0;
    bool user_choice = false;

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
            if (option_counter != 0)
                user_choice = true;
            else
                option_counter++;
            break;

        default:
            if (option_counter == 0)
                option_counter++;
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
                cout << "       -> Play            " << endl;
                cout << "          About             " << endl;
                cout << "          Team             " << endl;
                cout << "          Exit             " << endl;
                cout << "                              " << endl;
                cout << "==============================" << endl;

                break;

            case 2:
                cout << "==============================" << endl;
                cout << "             MENU             " << endl;
                cout << "==============================" << endl;
                cout << "                              " << endl;
                cout << "          Play            " << endl;
                cout << "       -> About             " << endl;
                cout << "          Team             " << endl;
                cout << "          Exit             " << endl;
                cout << "                              " << endl;
                cout << "==============================" << endl;

                break;

            case 3:
                cout << "==============================" << endl;
                cout << "             MENU             " << endl;
                cout << "==============================" << endl;
                cout << "                              " << endl;
                cout << "          Play            " << endl;
                cout << "          About             " << endl;
                cout << "       -> Team             " << endl;
                cout << "          Exit             " << endl;
                cout << "                              " << endl;
                cout << "==============================" << endl;


                break;

            case 4:
                cout << "==============================" << endl;
                cout << "             MENU             " << endl;
                cout << "==============================" << endl;
                cout << "                              " << endl;
                cout << "          Play            " << endl;
                cout << "          About             " << endl;
                cout << "          Team             " << endl;
                cout << "       -> Exit             " << endl;
                cout << "                              " << endl;
                cout << "==============================" << endl;


                break;
            }
        }

        else
        {
            // goToChoice(option_counter);
            break;
        }
    }
}