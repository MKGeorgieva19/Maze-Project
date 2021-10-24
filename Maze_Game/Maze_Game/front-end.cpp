#include <iostream>
#include <conio.h>
#include "front-end.h"
#include "back-end.h"

void printMenu()
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

void about()
{
    // about information
}

void team()
{
    // team information
}