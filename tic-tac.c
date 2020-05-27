#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

char button[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkwin();
void board();

int main()
{
    int Joueur = 1, i, choix;

    char mark;
    do
    {
        board();
        Joueur = (Joueur % 2) ? 1 : 2;

        printf("Player %d, enter a number :  ", Joueur);
        scanf("%d", &choix);

        mark = (Joueur == 1) ? 'X' : 'O';

        if (choix == 1 && button[1] == '1')
            button[1] = mark;
            
        else if (choix == 2 && button[2] == '2')
            button[2] = mark;
            
        else if (choix == 3 && button[3] == '3')
            button[3] = mark;
            
        else if (choix == 4 && button[4] == '4')
            button[4] = mark;
            
        else if (choix == 5 && button[5] == '5')
            button[5] = mark;
            
        else if (choix == 6 && button[6] == '6')
            button[6] = mark;
            
        else if (choix == 7 && button[7] == '7')
            button[7] = mark;
            
        else if (choix == 8 && button[8] == '8')
            button[8] = mark;
            
        else if (choix == 9 && button[9] == '9')
            button[9] = mark;
            
        else
        {
            printf("You cannot fill a box which is already taken try another box ");

            Joueur--;
            getch();
        }
        i = checkwin();

        Joueur++;
    }while (i ==  - 1);
    
    board();
    
    if (i == 1)
        printf("==>\a************Player  %d well done************** ", --Joueur);
    else
        printf("==>\a************None of you win************** ");

    getch();

    return 0;
}

/*********************************************

To understand what returns are for
1 For the end of the game with result
-1 the game is still in progress
O It's the end of the game without result
 **********************************************/

int checkwin()
{
    if (button[1] == button[2] && button[2] == button[3])
        return 1;
        
    else if (button[4] == button[5] && button[5] == button[6])
        return 1;
        
    else if (button[7] == button[8] && button[8] == button[9])
        return 1;
        
    else if (button[1] == button[4] && button[4] == button[7])
        return 1;
        
    else if (button[2] == button[5] && button[5] == button[8])
        return 1;
        
    else if (button[3] == button[6] && button[6] == button[9])
        return 1;
        
    else if (button[1] == button[5] && button[5] == button[9])
        return 1;
        
    else if (button[3] == button[5] && button[5] == button[7])
        return 1;
        
    else if (button[1] != '1' && button[2] != '2' && button[3] != '3' &&
        button[4] != '4' && button[5] != '5' && button[6] != '6' && button[7] 
        != '7' && button[8] != '8' && button[9] != '9')

        return 0;
    else
        return  - 1;
}


/*******************************************************************
Procedure to display the table that we will fill to play
 ********************************************************************/


void board()
{
    system("cls");
   puts("-----------------------------------------");
   printf("Program produced by : @riyadelmahfoudi \n",130);
   puts("-----------------------------------------\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", button[1], button[2], button[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", button[4], button[5], button[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", button[7], button[8], button[9]);

    printf("     |     |     \n\n");
}
