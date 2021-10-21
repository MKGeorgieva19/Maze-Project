#include <iostream>
#include <conio.h>
#include "front-end.h"
#include "back-end.h"

void printMenu()
{
    // The names of variables are not final!

    bool first_start = true;
    int option_counter = 0;
    bool user_choice = false;

    while (true)
    {
        int user_input = _getch();

        system("CLS");
        
        // Where to add title function in the future

        // Might try to separate the switch and getch into a seperate function in the future

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
            if(option_counter > 0)
                user_choice = true;
            option_counter++;
            break;
        default:
            break;
        }

        cout << "==============================" << endl;
        cout << "             MENU             " << endl;
        cout << "==============================" << endl;
        cout << "                              " << endl;


        switch (option_counter)
        {
        case 1:
            cout << "       -> Play            " << endl;
            cout << "          About             " << endl;
            cout << "          Team             " << endl;
            cout << "          Exit             " << endl;

            if (user_choice == true)
                cout << "play()"; // just for testing
            break;

        case 2:
            cout << "          Play            " << endl;
            cout << "       -> About             " << endl;
            cout << "          Team             " << endl;
            cout << "          Exit             " << endl;

            if (user_choice == true)
                cout << "about()"; // just for testing
            break;

        case 3:
            cout << "          Play            " << endl;
            cout << "          About             " << endl;
            cout << "       -> Team             " << endl;
            cout << "          Exit             " << endl;

            if (user_choice == true)
                cout << "team()"; // just for testing
            break;

        case 4:
            cout << "          Play            " << endl;
            cout << "          About             " << endl;
            cout << "          Team             " << endl;
            cout << "       -> Exit             " << endl;

            if (user_choice == true)
            {
                cout << "exit()"; // just for testing
                /*
                    system("CLS");
                    cout << "Thank you for playing our game! :)" << endl;
                    exit(0);
                */
            }
            break;
        }
        cout << "                              " << endl;
        cout << "==============================" << endl;
    }
}