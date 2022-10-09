#include <bits/stdc++.h>

void tictac();
void drawBox();
int checkWin();
int guessNum();

char sqr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main()
{
    int game;
    printf("--------------- MAIN MENU ---------------\n\n");
    printf("Enter 1 to play Tic-tac-toe\nEnter 0 to exit the programm \nEnter: ");
    scanf("%d", &game);

    switch (game)
    {
    case 0:
        exit(0);
    case 1:
        tictac();
        break;
    default:
        system("cls");
        printf("!!!!! Enter a Valid Choice !!!!!!\n\n");
        main();
        break;
    }
    return 0;
}
void tictac()
{

    int cmd;
    int player = 1, i, choice;
    char mark; // X or O
    sqr[1] = '1';
    sqr[2] = '2';
    sqr[3] = '3';
    sqr[4] = '4';
    sqr[5] = '5';
    sqr[6] = '6';
    sqr[7] = '7';
    sqr[8] = '8';
    sqr[9] = '9';
    printf("\n\t******** Tic Tac Toe **********\n\n");
    drawBox();

    do
    {
        player = (player % 2) ? 1 : 2;
        printf("Player %d, Enter your choice: ", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : 'O';
        if (choice == 1 && sqr[1] == '1')
        {
            sqr[1] = mark;
        }
        else if (choice == 2 && sqr[2] == '2')
        {
            sqr[2] = mark;
        }
        else if (choice == 3 && sqr[3] == '3')
        {
            sqr[3] = mark;
        }
        else if (choice == 4 && sqr[4] == '4')
        {
            sqr[4] = mark;
        }
        else if (choice == 5 && sqr[5] == '5')
        {
            sqr[5] = mark;
        }
        else if (choice == 6 && sqr[6] == '6')
        {
            sqr[6] = mark;
        }
        else if (choice == 7 && sqr[7] == '7')
        {
            sqr[7] = mark;
        }
        else if (choice == 8 && sqr[8] == '8')
        {
            sqr[8] = mark;
        }
        else if (choice == 9 && sqr[9] == '9')
        {
            sqr[9] = mark;
        }
        else
        {
            printf("\n!!!!! Enter a valid choice !!!!!\n");
            --player;
        }
        i = checkWin();
        drawBox();
        player++;
    } while (i == -1);
    if (i == 1)
    {
        printf("Player %d Won\n", --player);
    }
    else
    {
        printf("Game Draw\n");
    }

    do
    {
        printf("\nPress 1 to Play again or Press 0 to exit: ");
        scanf("%d", &cmd);

        if (cmd == 1)
        {
            system("cls");
            tictac();
        }
        else if (cmd == 0)
        {
            exit(0);
        }
        else
        {
            printf("\nPlease enter a valid Option.");
        }
    } while (cmd != 1 || cmd != 2);
}

int checkWin()
{
    if (sqr[1] == sqr[2] && sqr[2] == sqr[3])
    {
        return 1;
    }
    else if (sqr[4] == sqr[5] && sqr[5] == sqr[6])
    {
        return 1;
    }
    else if (sqr[7] == sqr[8] && sqr[8] == sqr[9])
    {
        return 1;
    }

    else if (sqr[1] == sqr[4] && sqr[4] == sqr[7])
    {
        return 1;
    }
    else if (sqr[2] == sqr[5] && sqr[5] == sqr[8])
    {
        return 1;
    }
    else if (sqr[3] == sqr[6] && sqr[6] == sqr[9])
    {
        return 1;
    }

    else if (sqr[1] == sqr[5] && sqr[5] == sqr[9])
    {
        return 1;
    }
    else if (sqr[3] == sqr[5] && sqr[5] == sqr[7])
    {
        return 1;
    }

    else if (sqr[1] != '1' && sqr[2] != '2' && sqr[3] != '3' && sqr[4] != '4' && sqr[5] != '5' && sqr[6] != '6' && sqr[7] != '7' && sqr[8] != '8' && sqr[9] != '9')
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

void drawBox()
{

    printf("\t\t    |   |   \n");
    printf("\t\t %c  | %c | %c  \n", sqr[1], sqr[2], sqr[3]);
    printf("\t\t____|___|____\n");

    printf("\t\t    |   |   \n");
    printf("\t\t %c  | %c | %c  \n", sqr[4], sqr[5], sqr[6]);
    printf("\t\t____|___|____\n");

    printf("\t\t    |   |   \n");
    printf("\t\t %c  | %c | %c  \n", sqr[7], sqr[8], sqr[9]);
    printf("\t\t    |   |    \n\n");
}
