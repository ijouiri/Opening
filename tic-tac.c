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

        printf("Joueur %d, entrer un nombre :  ", Joueur);
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
            printf("Vous pouvez pas remplir une case qui est prit deja essayer une autre case ");

            Joueur--;
            getch();
        }
        i = checkwin();

        Joueur++;
    }while (i ==  - 1);
    
    board();
    
    if (i == 1)
        printf("==>\a************Joueur  %d gagne bravo************** ", --Joueur);
    else
        printf("==>\a************Aucun de vous a gagner************** ");

    getch();

    return 0;
}

/*********************************************

Pour comprendre a quoi sert les retours 
1 Pour la fin du jeu avec resultat
-1 le jeu est encore en progres
O C'est la fin du jeu sans resultat
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
Procedure pour afficher le tableau qu'on va remplir pour jouer
 ********************************************************************/


void board()
{
    system("cls");
   puts("-----------------------------------------");
   printf("Programme realise par : Monssif khalil -- Zakaria hassari\n",130);
   puts("Filière : Technique de developpement informatique *** Groupe : TDI 101");
   printf("PROMOTION  : 2019-2020\n", 130);
   puts("Nom de l'enseignant : MAdame meriam mahdaoui");
   puts("Projet : Jeu Tic-tac-toe");
   puts("-----------------------------------------\n\n");

    printf("Joueur 1 (X)  -  Joueur 2 (O)\n\n\n");


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
