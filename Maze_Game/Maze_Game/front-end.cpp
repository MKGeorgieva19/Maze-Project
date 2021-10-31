#include <iostream>
#include <conio.h>
#include "front-end.h"
#include "back-end.h"

void printMenu()    // Print menu and take user input
{
    int option_counter = 1;
    bool user_choice = false;

    // Prints out the (default) menu 

    cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
    cout << "*     ___________                                                                     __                    *" << endl;
    cout << "*    |   _____   |                  ___    ___                 __                    |  |                   *" << endl;
    cout << "*    |  |     |  |      __________  \\  \\  /  /  __________    |  |_______            |  |                   *" << endl;
    cout << "*    |  |_____|  |     |   ____   |  \\  \\/  /  |   ____   |   |   ____   |    _______|  |                   *" << endl;
    cout << "*    |   ______   |    |  |____|  |   \\    /   |  |    |  |   |  |    |  |   |   ____   |                   *" << endl;
    cout << "*    |  |      |  |    |   _______|    |  |    |  |    |  |   |  |    |  |   |  |    |  |                   *" << endl;
    cout << "*    |  |______|  |    |  |_______     |  |    |  |____|  |   |  |    |  |   |  |____|  |                   *" << endl;
    cout << "*    |____________|    |__________|    |__|    |__________|   |__|    |__|   |__________|                   *" << endl;
    cout << "*       __       __                                                                                         *" << endl;
    cout << "*      |  |     |  |                          ___________________                  ____________________     *" << endl;
    cout << "*     _|  |_    |  |          __________     |                   |___________     |                    |    *" << endl;
    cout << "*    |_    _|   |  |_____    |   ____   |    |   ~~~~~~~~~~~~                |    |      ~~~~~~~~      |    *" << endl;
    cout << "*      |  |     |   __   |   |  |____|  |    |       Menu         _______    |    |   {==> Play <==}   |    *" << endl;
    cout << "*      |  |     |  |  |  |   |   _______|    |   ~~~~~~~~~~~~    |       |   |    |      ~~~~~~~~      |    *" << endl;
    cout << "*      |  |_    |  |  |  |   |  |_______     |___________________|       |   |    |     ~~~~~~~~~      |    *" << endl;
    cout << "*      |____|   |__|  |__|   |__________|                                |   |    |    {  Rules  }     |    *" << endl;
    cout << "*                                           __     __     _______________|   |    |     ~~~~~~~~~      |    *" << endl;
    cout << "*                                    __    |  |   |  |   |                   |    |      ~~~~~~~~      |    *" << endl;
    cout << "*      ___    ____    ___    _______|  |   |  |   |  |   |    _______________|    |     {  Team  }     |    *" << endl;
    cout << "*      \\  \\  /    \\  /  /   |   ____   |   |  |   |  |   |   |                    |      ~~~~~~~~      |    *" << endl;
    cout << "*       \\  \\/  /\\  \\/  /    |  |    |  |   |  |   |  |   |   |____________________|      ~~~~~~~~      |    *" << endl;
    cout << "*        \\    /  \\    /     |  |____|  |   |  |   |  |   |                              {  Exit  }     |    *" << endl;
    cout << "*         \\__/    \\__/      |_______   |   |  |   |  |   |                               ~~~~~~~~      |    *" << endl;
    cout << "*                                   |__|   |__|   |__|   |_____________________________________________|    *" << endl;
    cout << "*                                                                                                           *" << endl;
    cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;

    while (true)
    {
        int user_input = _getch();  // Get user input without kaving to press enter

        system("CLS");

        // will add title function in the future

        switch (user_input)
        {
        case UP:                            // The user pressed the up arrow
            if (option_counter > 1)
                option_counter -= 1;
            break;

        case DOWN:                          // The user pressed the down arrow
            if (option_counter < 4)
                option_counter += 1;
            break;

        case ENTER:                         // The user pressed enter
            user_choice = true;
            break;
        }

        if (!user_choice)
        {
            switch (option_counter)         // Prints out the different phases of the menu
            {
            case 1:
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
                cout << "*     ___________                                                                     __                    *" << endl;
                cout << "*    |   _____   |                  ___    ___                 __                    |  |                   *" << endl;
                cout << "*    |  |     |  |      __________  \\  \\  /  /  __________    |  |_______            |  |                   *" << endl;
                cout << "*    |  |_____|  |     |   ____   |  \\  \\/  /  |   ____   |   |   ____   |    _______|  |                   *" << endl;
                cout << "*    |   ______   |    |  |____|  |   \\    /   |  |    |  |   |  |    |  |   |   ____   |                   *" << endl;
                cout << "*    |  |      |  |    |   _______|    |  |    |  |    |  |   |  |    |  |   |  |    |  |                   *" << endl;
                cout << "*    |  |______|  |    |  |_______     |  |    |  |____|  |   |  |    |  |   |  |____|  |                   *" << endl;
                cout << "*    |____________|    |__________|    |__|    |__________|   |__|    |__|   |__________|                   *" << endl;
                cout << "*       __       __                                                                                         *" << endl;
                cout << "*      |  |     |  |                          ___________________                  ____________________     *" << endl;
                cout << "*     _|  |_    |  |          __________     |                   |___________     |                    |    *" << endl;
                cout << "*    |_    _|   |  |_____    |   ____   |    |   ~~~~~~~~~~~~                |    |      ~~~~~~~~      |    *" << endl;
                cout << "*      |  |     |   __   |   |  |____|  |    |       Menu         _______    |    |   {==> Play <==}   |    *" << endl;
                cout << "*      |  |     |  |  |  |   |   _______|    |   ~~~~~~~~~~~~    |       |   |    |      ~~~~~~~~      |    *" << endl;
                cout << "*      |  |_    |  |  |  |   |  |_______     |___________________|       |   |    |     ~~~~~~~~~      |    *" << endl;
                cout << "*      |____|   |__|  |__|   |__________|                                |   |    |    {  Rules  }     |    *" << endl;
                cout << "*                                           __     __     _______________|   |    |     ~~~~~~~~~      |    *" << endl;
                cout << "*                                    __    |  |   |  |   |                   |    |      ~~~~~~~~      |    *" << endl;
                cout << "*      ___    ____    ___    _______|  |   |  |   |  |   |    _______________|    |     {  Team  }     |    *" << endl;
                cout << "*      \\  \\  /    \\  /  /   |   ____   |   |  |   |  |   |   |                    |      ~~~~~~~~      |    *" << endl;
                cout << "*       \\  \\/  /\\  \\/  /    |  |    |  |   |  |   |  |   |   |____________________|      ~~~~~~~~      |    *" << endl;
                cout << "*        \\    /  \\    /     |  |____|  |   |  |   |  |   |                              {  Exit  }     |    *" << endl;
                cout << "*         \\__/    \\__/      |_______   |   |  |   |  |   |                               ~~~~~~~~      |    *" << endl;
                cout << "*                                   |__|   |__|   |__|   |_____________________________________________|    *" << endl;
                cout << "*                                                                                                           *" << endl;
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;

                break;

            case 2:
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
                cout << "*     ___________                                                                     __                    *" << endl;
                cout << "*    |   _____   |                  ___    ___                 __                    |  |                   *" << endl;
                cout << "*    |  |     |  |      __________  \\  \\  /  /  __________    |  |_______            |  |                   *" << endl;
                cout << "*    |  |_____|  |     |   ____   |  \\  \\/  /  |   ____   |   |   ____   |    _______|  |                   *" << endl;
                cout << "*    |   ______   |    |  |____|  |   \\    /   |  |    |  |   |  |    |  |   |   ____   |                   *" << endl;
                cout << "*    |  |      |  |    |   _______|    |  |    |  |    |  |   |  |    |  |   |  |    |  |                   *" << endl;
                cout << "*    |  |______|  |    |  |_______     |  |    |  |____|  |   |  |    |  |   |  |____|  |                   *" << endl;
                cout << "*    |____________|    |__________|    |__|    |__________|   |__|    |__|   |__________|                   *" << endl;
                cout << "*       __       __                                                                                         *" << endl;
                cout << "*      |  |     |  |                          ___________________                  ____________________     *" << endl;
                cout << "*     _|  |_    |  |          __________     |                   |___________     |                    |    *" << endl;
                cout << "*    |_    _|   |  |_____    |   ____   |    |   ~~~~~~~~~~~~                |    |      ~~~~~~~~      |    *" << endl;
                cout << "*      |  |     |   __   |   |  |____|  |    |       Menu         _______    |    |     {  Play  }     |    *" << endl;
                cout << "*      |  |     |  |  |  |   |   _______|    |   ~~~~~~~~~~~~    |       |   |    |      ~~~~~~~~      |    *" << endl;
                cout << "*      |  |_    |  |  |  |   |  |_______     |___________________|       |   |    |     ~~~~~~~~~      |    *" << endl;
                cout << "*      |____|   |__|  |__|   |__________|                                |   |    | {==>  Rules  <==}  |    *" << endl;
                cout << "*                                           __     __     _______________|   |    |     ~~~~~~~~~      |    *" << endl;
                cout << "*                                    __    |  |   |  |   |                   |    |      ~~~~~~~~      |    *" << endl;
                cout << "*      ___    ____    ___    _______|  |   |  |   |  |   |    _______________|    |     {  Team  }     |    *" << endl;
                cout << "*      \\  \\  /    \\  /  /   |   ____   |   |  |   |  |   |   |                    |      ~~~~~~~~      |    *" << endl;
                cout << "*       \\  \\/  /\\  \\/  /    |  |    |  |   |  |   |  |   |   |____________________|      ~~~~~~~~      |    *" << endl;
                cout << "*        \\    /  \\    /     |  |____|  |   |  |   |  |   |                              {  Exit  }     |    *" << endl;
                cout << "*         \\__/    \\__/      |_______   |   |  |   |  |   |                               ~~~~~~~~      |    *" << endl;
                cout << "*                                   |__|   |__|   |__|   |_____________________________________________|    *" << endl;
                cout << "*                                                                                                           *" << endl;
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;

                break;

            case 3:
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
                cout << "*     ___________                                                                     __                    *" << endl;
                cout << "*    |   _____   |                  ___    ___                 __                    |  |                   *" << endl;
                cout << "*    |  |     |  |      __________  \\  \\  /  /  __________    |  |_______            |  |                   *" << endl;
                cout << "*    |  |_____|  |     |   ____   |  \\  \\/  /  |   ____   |   |   ____   |    _______|  |                   *" << endl;
                cout << "*    |   ______   |    |  |____|  |   \\    /   |  |    |  |   |  |    |  |   |   ____   |                   *" << endl;
                cout << "*    |  |      |  |    |   _______|    |  |    |  |    |  |   |  |    |  |   |  |    |  |                   *" << endl;
                cout << "*    |  |______|  |    |  |_______     |  |    |  |____|  |   |  |    |  |   |  |____|  |                   *" << endl;
                cout << "*    |____________|    |__________|    |__|    |__________|   |__|    |__|   |__________|                   *" << endl;
                cout << "*       __       __                                                                                         *" << endl;
                cout << "*      |  |     |  |                          ___________________                  ____________________     *" << endl;
                cout << "*     _|  |_    |  |          __________     |                   |___________     |                    |    *" << endl;
                cout << "*    |_    _|   |  |_____    |   ____   |    |   ~~~~~~~~~~~~                |    |      ~~~~~~~~      |    *" << endl;
                cout << "*      |  |     |   __   |   |  |____|  |    |       Menu         _______    |    |     {  Play  }     |    *" << endl;
                cout << "*      |  |     |  |  |  |   |   _______|    |   ~~~~~~~~~~~~    |       |   |    |      ~~~~~~~~      |    *" << endl;
                cout << "*      |  |_    |  |  |  |   |  |_______     |___________________|       |   |    |     ~~~~~~~~~      |    *" << endl;
                cout << "*      |____|   |__|  |__|   |__________|                                |   |    |    {  Rules  }     |    *" << endl;
                cout << "*                                           __     __     _______________|   |    |     ~~~~~~~~~      |    *" << endl;
                cout << "*                                    __    |  |   |  |   |                   |    |      ~~~~~~~~      |    *" << endl;
                cout << "*      ___    ____    ___    _______|  |   |  |   |  |   |    _______________|    |  {==>  Team  <==}  |    *" << endl;
                cout << "*      \\  \\  /    \\  /  /   |   ____   |   |  |   |  |   |   |                    |      ~~~~~~~~      |    *" << endl;
                cout << "*       \\  \\/  /\\  \\/  /    |  |    |  |   |  |   |  |   |   |____________________|      ~~~~~~~~      |    *" << endl;
                cout << "*        \\    /  \\    /     |  |____|  |   |  |   |  |   |                              {  Exit  }     |    *" << endl;
                cout << "*         \\__/    \\__/      |_______   |   |  |   |  |   |                               ~~~~~~~~      |    *" << endl;
                cout << "*                                   |__|   |__|   |__|   |_____________________________________________|    *" << endl;
                cout << "*                                                                                                           *" << endl;
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;

                break;

            case 4:
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
                cout << "*     ___________                                                                     __                    *" << endl;
                cout << "*    |   _____   |                  ___    ___                 __                    |  |                   *" << endl;
                cout << "*    |  |     |  |      __________  \\  \\  /  /  __________    |  |_______            |  |                   *" << endl;
                cout << "*    |  |_____|  |     |   ____   |  \\  \\/  /  |   ____   |   |   ____   |    _______|  |                   *" << endl;
                cout << "*    |   ______   |    |  |____|  |   \\    /   |  |    |  |   |  |    |  |   |   ____   |                   *" << endl;
                cout << "*    |  |      |  |    |   _______|    |  |    |  |    |  |   |  |    |  |   |  |    |  |                   *" << endl;
                cout << "*    |  |______|  |    |  |_______     |  |    |  |____|  |   |  |    |  |   |  |____|  |                   *" << endl;
                cout << "*    |____________|    |__________|    |__|    |__________|   |__|    |__|   |__________|                   *" << endl;
                cout << "*       __       __                                                                                         *" << endl;
                cout << "*      |  |     |  |                          ___________________                  ____________________     *" << endl;
                cout << "*     _|  |_    |  |          __________     |                   |___________     |                    |    *" << endl;
                cout << "*    |_    _|   |  |_____    |   ____   |    |   ~~~~~~~~~~~~                |    |      ~~~~~~~~      |    *" << endl;
                cout << "*      |  |     |   __   |   |  |____|  |    |       Menu         _______    |    |     {  Play  }     |    *" << endl;
                cout << "*      |  |     |  |  |  |   |   _______|    |   ~~~~~~~~~~~~    |       |   |    |      ~~~~~~~~      |    *" << endl;
                cout << "*      |  |_    |  |  |  |   |  |_______     |___________________|       |   |    |     ~~~~~~~~~      |    *" << endl;
                cout << "*      |____|   |__|  |__|   |__________|                                |   |    |    {  Rules  }     |    *" << endl;
                cout << "*                                           __     __     _______________|   |    |     ~~~~~~~~~      |    *" << endl;
                cout << "*                                    __    |  |   |  |   |                   |    |      ~~~~~~~~      |    *" << endl;
                cout << "*      ___    ____    ___    _______|  |   |  |   |  |   |    _______________|    |     {  Team  }     |    *" << endl;
                cout << "*      \\  \\  /    \\  /  /   |   ____   |   |  |   |  |   |   |                    |      ~~~~~~~~      |    *" << endl;
                cout << "*       \\  \\/  /\\  \\/  /    |  |    |  |   |  |   |  |   |   |____________________|      ~~~~~~~~      |    *" << endl;
                cout << "*        \\    /  \\    /     |  |____|  |   |  |   |  |   |                           {==>  Exit  <==}  |    *" << endl;
                cout << "*         \\__/    \\__/      |_______   |   |  |   |  |   |                               ~~~~~~~~      |    *" << endl;
                cout << "*                                   |__|   |__|   |__|   |_____________________________________________|    *" << endl;
                cout << "*                                                                                                           *" << endl;
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;

                break;
            }
        }

        else    // The user pressed enter to perform some sort of action
        {
            goToChoice(option_counter);
            break;
        }
    }
}

int goToChoice(int option)  // Sends the user to the right place depending on their input
{
    switch (option)
    {
    case 1:     // Before starting the game the program asks the user for difficulty
        askForDifficulty();
        break;

    case 2:
        // rules();
        break;

    case 3:
        // team();
        break;

    case 4:     // The user wishes to exit the program
        system("CLS");
        cout << "Thank you for playing our game! :)" << endl;
        exit(0);
    }
}

void askForDifficulty()
{
    int option_counter = 1;
    bool user_choice = false;

    cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
    cout << "*     ___________                                                                     __                    *" << endl;
    cout << "*    |   _____   |                  ___    ___                 __                    |  |                   *" << endl;
    cout << "*    |  |     |  |      __________  \\  \\  /  /  __________    |  |_______            |  |                   *" << endl;
    cout << "*    |  |_____|  |     |   ____   |  \\  \\/  /  |   ____   |   |   ____   |    _______|  |                   *" << endl;
    cout << "*    |   ______   |    |  |____|  |   \\    /   |  |    |  |   |  |    |  |   |   ____   |                   *" << endl;
    cout << "*    |  |      |  |    |   _______|    |  |    |  |    |  |   |  |    |  |   |  |    |  |                   *" << endl;
    cout << "*    |  |______|  |    |  |_______     |  |    |  |____|  |   |  |    |  |   |  |____|  |                   *" << endl;
    cout << "*    |____________|    |__________|    |__|    |__________|   |__|    |__|   |__________|                   *" << endl;
    cout << "*       __       __                                                                                         *" << endl;
    cout << "*      |  |     |  |                          ___________________                  ____________________     *" << endl;
    cout << "*     _|  |_    |  |          __________     |                   |___________     |                    |    *" << endl;
    cout << "*    |_    _|   |  |_____    |   ____   |    |   ~~~~~~~~~~~~                |    |     ~~~~~~~~~~     |    *" << endl;
    cout << "*      |  |     |   __   |   |  |____|  |    |       Menu         _______    |    |   Pick difficulty  |    *" << endl;
    cout << "*      |  |     |  |  |  |   |   _______|    |   ~~~~~~~~~~~~    |       |   |    |     ~~~~~~~~~~     |    *" << endl;
    cout << "*      |  |_    |  |  |  |   |  |_______     |___________________|       |   |    |      ~~~~~~~~      |    *" << endl;
    cout << "*      |____|   |__|  |__|   |__________|                                |   |    |   {==> Easy <==}   |    *" << endl;
    cout << "*                                           __     __     _______________|   |    |      ~~~~~~~~      |    *" << endl;
    cout << "*                                    __    |  |   |  |   |                   |    |     ~~~~~~~~~~     |    *" << endl;
    cout << "*      ___    ____    ___    _______|  |   |  |   |  |   |    _______________|    |    {  Medium  }    |    *" << endl;
    cout << "*      \\  \\  /    \\  /  /   |   ____   |   |  |   |  |   |   |                    |     ~~~~~~~~~~     |    *" << endl;
    cout << "*       \\  \\/  /\\  \\/  /    |  |    |  |   |  |   |  |   |   |____________________|      ~~~~~~~~      |    *" << endl;
    cout << "*        \\    /  \\    /     |  |____|  |   |  |   |  |   |                              {  Hard  }     |    *" << endl;
    cout << "*         \\__/    \\__/      |_______   |   |  |   |  |   |                               ~~~~~~~~      |    *" << endl;
    cout << "*                                   |__|   |__|   |__|   |_____________________________________________|    *" << endl;
    cout << "*                                                                                                           *" << endl;
    cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
    cout << "currently the only working option is \"easy\" and it's only used for testing (not final)" << endl;

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
            if (option_counter < 3)
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
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
                cout << "*     ___________                                                                     __                    *" << endl;
                cout << "*    |   _____   |                  ___    ___                 __                    |  |                   *" << endl;
                cout << "*    |  |     |  |      __________  \\  \\  /  /  __________    |  |_______            |  |                   *" << endl;
                cout << "*    |  |_____|  |     |   ____   |  \\  \\/  /  |   ____   |   |   ____   |    _______|  |                   *" << endl;
                cout << "*    |   ______   |    |  |____|  |   \\    /   |  |    |  |   |  |    |  |   |   ____   |                   *" << endl;
                cout << "*    |  |      |  |    |   _______|    |  |    |  |    |  |   |  |    |  |   |  |    |  |                   *" << endl;
                cout << "*    |  |______|  |    |  |_______     |  |    |  |____|  |   |  |    |  |   |  |____|  |                   *" << endl;
                cout << "*    |____________|    |__________|    |__|    |__________|   |__|    |__|   |__________|                   *" << endl;
                cout << "*       __       __                                                                                         *" << endl;
                cout << "*      |  |     |  |                          ___________________                  ____________________     *" << endl;
                cout << "*     _|  |_    |  |          __________     |                   |___________     |                    |    *" << endl;
                cout << "*    |_    _|   |  |_____    |   ____   |    |   ~~~~~~~~~~~~                |    |     ~~~~~~~~~~     |    *" << endl;
                cout << "*      |  |     |   __   |   |  |____|  |    |       Menu         _______    |    |   Pick difficulty  |    *" << endl;
                cout << "*      |  |     |  |  |  |   |   _______|    |   ~~~~~~~~~~~~    |       |   |    |     ~~~~~~~~~~     |    *" << endl;
                cout << "*      |  |_    |  |  |  |   |  |_______     |___________________|       |   |    |      ~~~~~~~~      |    *" << endl;
                cout << "*      |____|   |__|  |__|   |__________|                                |   |    |   {==> Easy <==}   |    *" << endl;
                cout << "*                                           __     __     _______________|   |    |      ~~~~~~~~      |    *" << endl;
                cout << "*                                    __    |  |   |  |   |                   |    |     ~~~~~~~~~~     |    *" << endl;
                cout << "*      ___    ____    ___    _______|  |   |  |   |  |   |    _______________|    |    {  Medium  }    |    *" << endl;
                cout << "*      \\  \\  /    \\  /  /   |   ____   |   |  |   |  |   |   |                    |     ~~~~~~~~~~     |    *" << endl;
                cout << "*       \\  \\/  /\\  \\/  /    |  |    |  |   |  |   |  |   |   |____________________|      ~~~~~~~~      |    *" << endl;
                cout << "*        \\    /  \\    /     |  |____|  |   |  |   |  |   |                              {  Hard  }     |    *" << endl;
                cout << "*         \\__/    \\__/      |_______   |   |  |   |  |   |                               ~~~~~~~~      |    *" << endl;
                cout << "*                                   |__|   |__|   |__|   |_____________________________________________|    *" << endl;
                cout << "*                                                                                                           *" << endl;
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;

                break;

            case 2:
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
                cout << "*     ___________                                                                     __                    *" << endl;
                cout << "*    |   _____   |                  ___    ___                 __                    |  |                   *" << endl;
                cout << "*    |  |     |  |      __________  \\  \\  /  /  __________    |  |_______            |  |                   *" << endl;
                cout << "*    |  |_____|  |     |   ____   |  \\  \\/  /  |   ____   |   |   ____   |    _______|  |                   *" << endl;
                cout << "*    |   ______   |    |  |____|  |   \\    /   |  |    |  |   |  |    |  |   |   ____   |                   *" << endl;
                cout << "*    |  |      |  |    |   _______|    |  |    |  |    |  |   |  |    |  |   |  |    |  |                   *" << endl;
                cout << "*    |  |______|  |    |  |_______     |  |    |  |____|  |   |  |    |  |   |  |____|  |                   *" << endl;
                cout << "*    |____________|    |__________|    |__|    |__________|   |__|    |__|   |__________|                   *" << endl;
                cout << "*       __       __                                                                                         *" << endl;
                cout << "*      |  |     |  |                          ___________________                  ____________________     *" << endl;
                cout << "*     _|  |_    |  |          __________     |                   |___________     |                    |    *" << endl;
                cout << "*    |_    _|   |  |_____    |   ____   |    |   ~~~~~~~~~~~~                |    |     ~~~~~~~~~~     |    *" << endl;
                cout << "*      |  |     |   __   |   |  |____|  |    |       Menu         _______    |    |   Pick difficulty  |    *" << endl;
                cout << "*      |  |     |  |  |  |   |   _______|    |   ~~~~~~~~~~~~    |       |   |    |     ~~~~~~~~~~     |    *" << endl;
                cout << "*      |  |_    |  |  |  |   |  |_______     |___________________|       |   |    |      ~~~~~~~~      |    *" << endl;
                cout << "*      |____|   |__|  |__|   |__________|                                |   |    |     {  Easy  }     |    *" << endl;
                cout << "*                                           __     __     _______________|   |    |      ~~~~~~~~      |    *" << endl;
                cout << "*                                    __    |  |   |  |   |                   |    |     ~~~~~~~~~~     |    *" << endl;
                cout << "*      ___    ____    ___    _______|  |   |  |   |  |   |    _______________|    | {==>  Medium  <==} |    *" << endl;
                cout << "*      \\  \\  /    \\  /  /   |   ____   |   |  |   |  |   |   |                    |     ~~~~~~~~~~     |    *" << endl;
                cout << "*       \\  \\/  /\\  \\/  /    |  |    |  |   |  |   |  |   |   |____________________|      ~~~~~~~~      |    *" << endl;
                cout << "*        \\    /  \\    /     |  |____|  |   |  |   |  |   |                              {  Hard  }     |    *" << endl;
                cout << "*         \\__/    \\__/      |_______   |   |  |   |  |   |                               ~~~~~~~~      |    *" << endl;
                cout << "*                                   |__|   |__|   |__|   |_____________________________________________|    *" << endl;
                cout << "*                                                                                                           *" << endl;
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;

                break;

            case 3:
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
                cout << "*     ___________                                                                     __                    *" << endl;
                cout << "*    |   _____   |                  ___    ___                 __                    |  |                   *" << endl;
                cout << "*    |  |     |  |      __________  \\  \\  /  /  __________    |  |_______            |  |                   *" << endl;
                cout << "*    |  |_____|  |     |   ____   |  \\  \\/  /  |   ____   |   |   ____   |    _______|  |                   *" << endl;
                cout << "*    |   ______   |    |  |____|  |   \\    /   |  |    |  |   |  |    |  |   |   ____   |                   *" << endl;
                cout << "*    |  |      |  |    |   _______|    |  |    |  |    |  |   |  |    |  |   |  |    |  |                   *" << endl;
                cout << "*    |  |______|  |    |  |_______     |  |    |  |____|  |   |  |    |  |   |  |____|  |                   *" << endl;
                cout << "*    |____________|    |__________|    |__|    |__________|   |__|    |__|   |__________|                   *" << endl;
                cout << "*       __       __                                                                                         *" << endl;
                cout << "*      |  |     |  |                          ___________________                  ____________________     *" << endl;
                cout << "*     _|  |_    |  |          __________     |                   |___________     |                    |    *" << endl;
                cout << "*    |_    _|   |  |_____    |   ____   |    |   ~~~~~~~~~~~~                |    |     ~~~~~~~~~~     |    *" << endl;
                cout << "*      |  |     |   __   |   |  |____|  |    |       Menu         _______    |    |   Pick difficulty  |    *" << endl;
                cout << "*      |  |     |  |  |  |   |   _______|    |   ~~~~~~~~~~~~    |       |   |    |     ~~~~~~~~~~     |    *" << endl;
                cout << "*      |  |_    |  |  |  |   |  |_______     |___________________|       |   |    |      ~~~~~~~~      |    *" << endl;
                cout << "*      |____|   |__|  |__|   |__________|                                |   |    |     {  Easy  }     |    *" << endl;
                cout << "*                                           __     __     _______________|   |    |      ~~~~~~~~      |    *" << endl;
                cout << "*                                    __    |  |   |  |   |                   |    |     ~~~~~~~~~~     |    *" << endl;
                cout << "*      ___    ____    ___    _______|  |   |  |   |  |   |    _______________|    |    {  Medium  }    |    *" << endl;
                cout << "*      \\  \\  /    \\  /  /   |   ____   |   |  |   |  |   |   |                    |     ~~~~~~~~~~     |    *" << endl;
                cout << "*       \\  \\/  /\\  \\/  /    |  |    |  |   |  |   |  |   |   |____________________|      ~~~~~~~~      |    *" << endl;
                cout << "*        \\    /  \\    /     |  |____|  |   |  |   |  |   |                           {==>  Hard  <==}  |    *" << endl;
                cout << "*         \\__/    \\__/      |_______   |   |  |   |  |   |                               ~~~~~~~~      |    *" << endl;
                cout << "*                                   |__|   |__|   |__|   |_____________________________________________|    *" << endl;
                cout << "*                                                                                                           *" << endl;
                cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;

                break;
            }
        }

        else
        {
            game(createMaze(option_counter), getMazeRows(option_counter), getMazeCols(option_counter));
            break;
        }
    }
}

void rules()
{
    // about information
}

void team()
{
    // team information
}