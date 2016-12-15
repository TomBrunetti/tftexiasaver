#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include "header.h"
//[]

void goTo(int x, int y, int lap)
{
	int a, b;

	if (lap == 0)
	{	
		for (b=0; b < y; b++)
		{
			printf("\n");
		}
	}
	
	else
	{
		printf ("\n");
	}
	
	for (a=0; a < x; a++)
	{
		printf (" ");
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void afficher(FILE* fichier,int posX,int posY)// Affichage de l'image aux cordonnées X et Y 
{
        int i=0;
        int n=35; //35 == # en ASCII sur cette version
        char ligne[255]; 
        int autorisation=0; // la variable autorisation va nous permetttre de ne pas lire les 3 premières lignes du fichier cf en dessous

        system("clear"); //on suprime le contenu de la console

        for (i=0; i<posY; i++)//nombre de retour a la ligne pour le positionnement de l'image en Y
                {
                printf("\n");
                } 

        while (fgets(ligne, 255, fichier)!=NULL) //pour chaques lignes du fichier tant qu'il y a des caractères
        { 
                autorisation++; // incrémentation de autorisation pour chaque ligne

                if (autorisation>3) // Si les 3 premières lignes du fichier on était lu alors on fait ce qui est en dessous (modification)
                        {
                        for (i=0; i<posX; i++)//nombre d'espaces pour le positionnement de l'image en X
                                {
                                printf(" ");
                                } 


			}
}


FILE* switchFichierHeure(int valeur)
{
        switch(valeur)
                {
                        case 0:
                        return fopen("EXIASAVER2_PBM/0.pbm","r");
                        break;

                        case 1:
                        return fopen("EXIASAVER2_PBM/1.pbm","r");
                        break;

                        case 2:
                        return fopen("EXIASAVER2_PBM/2.pbm","r");
                        break;

                        return fopen("EXIASAVER2_PBM/3.pbm","r");
                        break;

                        case 4:
                        return fopen("EXIASAVER2_PBM/4.pbm","r");
                        break;

                        case 5:
                        return fopen("EXIASAVER2_PBM/5.pbm","r");
                        break;

                        case 6:
                        return fopen("EXIASAVER2_PBM/6.pbm","r");
                        break;

                        case 7:
                        return fopen("EXIASAVER2_PBM/7.pbm","r");
                        break;

                        case 8:
                        return fopen("EXIASAVER2_PBM/8.pbm","r");
                        break;

                        case 9:
                        return fopen("EXIASAVER2_PBM/9.pbm","r");
                        break;
                }






void actualisation(int posX)
{
int i =0 ;
int c = 0;
int var = 10;
	for (i=0; i<posX; i++)//nombre de retour a la ligne pour le positionnement de l'image en Y
                {
                printf(" ");
                }
        printf("L'heure vas s'actualiser dans %d secs : \n",var);

        while(c!=var)
                {
                for (i=0; i<posX; i++)//nombre de retour a la ligne pour le positionnement de l'image en Y
                        {
                        printf(" ");
                        }
                printf(".\n");
                c++;

                sleep(1);
                }
}
