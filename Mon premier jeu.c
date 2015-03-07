#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int x;
    int mode;
    int niveau;
    int nombreMystere;
    int i=0;
    int c=0;
    int MAX=100, MIN=1;
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    printf("******BIENVENUE SUR LE JEU NOMBRE MYSTERE******\n");
    printf("*CONSIGNES DE JEU*\n (!--chaque fois vous entrerez le nombre qui precede l'option choisie pour la selectionner--!)\n");
    do
    {
        printf("Selectionnez le mode:\n 1-Mode 1 joueur\n 2-Mode 2 joueurs\n");
        scanf("%d",&mode);
        if(mode==1)
        {
            i=0;
            printf("Veuillez choisir le niveau de difficulte:\n 1-Debutant \n 2-Intermediaire \n 3-Expert\n");
            scanf("%d",&niveau);
            if(niveau==1)
            {
                MAX=100;
                nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
                do
                {
                    printf("veuillez tapez un nombre:\n");
                    scanf("%d",&x);
                    i=i+1;
                    if(x==nombreMystere)
                    {
                        printf("Genial tu as trouver le nombreMystere apres %d essai(s).BRAVO!\n",i);
                    }
                    else
                    {
                        if(x<nombreMystere)
                        {
                            printf("Desole le nombre entre est plus petit, reessayez\n");
                        }
                        else
                        {
                            printf("Desole le nombre entre est plus grand, reessayez\n");
                        }
                    }
                }while(x!=nombreMystere);
            }
            else if(niveau==2)
            {
                MAX=1000;
                nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
                 do
                {
                    printf("veuillez tapez un nombre:\n");
                    scanf("%d",&x);
                    i=i+1;
                    if(x==nombreMystere)
                    {
                        printf("Genial tu as trouver le nombreMystere apres %d essai(s).BRAVO!\n",i);
                    }
                    else
                    {
                        if(x<nombreMystere)
                        {
                            printf("Desole le nombre entre est plus petit, reessayez\n");
                        }
                        else
                        {
                            printf("Desole le nombre entre est plus grand, reessayez\n");
                        }
                    }
                }while(x!=nombreMystere);
            }
            else if(niveau==3)
            {
                MAX=10000;
                nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
                 do
                {
                    printf("veuillez tapez un nombre:\n");
                    scanf("%d",&x);
                    i=i+1;
                    if(x==nombreMystere)
                    {
                        printf("Genial tu as trouver le nombreMystere apres %d essai(s).BRAVO!\n",i);
                    }
                    else
                    {
                        if(x<nombreMystere)
                        {
                            printf("Desole le nombre entre est plus petit, reessayez\n");
                        }
                        else
                        {
                            printf("Desole le nombre entre est plus grand, reessayez\n");
                        }
                    }
                }while(x!=nombreMystere);
            }
        }
        else if(mode==2)
        {
            i=0;
            printf("Joueur 1, entrez le nombre a deviner:\n");
            scanf("%d",&nombreMystere);
            do
            {
                printf("Joueur 2 veuillez tapez un nombre:\n");
                scanf("%d",&x);
                i=i+1;
                if(x==nombreMystere)
                {
                    printf("Genial tu as trouver le nombreMystere apres %d essai(s).BRAVO!\n",i);
                }
                else
                {
                    if(x<nombreMystere)
                    {
                        printf("Desole le nombre entre est plus petit, reessayez\n");
                    }
                    else
                    {
                        printf("Desole le nombre entre est plus grand, reessayez\n");
                    }
                }
            }while(x!=nombreMystere);
        }
        printf("Souhaitez-vous reprendre la partie?:\n 1-OUI \n 0-QUITTER\n");
        scanf("%d",&c);
    }while(c!=0);
}
