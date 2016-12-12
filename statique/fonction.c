#include "statique.h"
void afficher(FILE *file, int x, int y)
{

char ligne[255];
int nbLigne = 0;
int i;

x = (238 - x) / 2;
y = (66 - y) / 2;

	for(i = 0; i < y; i++){printf("\n");}

	while (fgets (ligne, 255, file) != NULL)
        {
                	nbLigne ++;
			if (nbLigne > 3)
			{
				for(i = 0; i < x; i++){printf(" ");}
				for(i = 0; i < 255; i++)

                        	{

                                	if (ligne[i] == '1')
					{
                                		printf(" ");
					}

                                	if (ligne[i] == '0')
					{
                                		printf("X");
					}

                        	}

  			      	printf("\n");
			}
        }
}




//----------------------------------------------------------------------------------------------------------------------------------//





void taille(FILE *file, int* x, int* y)
{
int i, b, j;
int nbLigne = 0;
char ligne[255], tailleX[5], tailleY[5];

while (fgets (ligne, 255, file) != NULL)
	{
		
		nbLigne ++;

		if (nbLigne == 3)
		{
		
			for (i = 0; i < 40; i++)
			{			
				if (ligne[i] == ' ')
				{
					b = i;
					i = 812;
				}
				
				else
				{
					tailleX[i] = ligne[i];
				}
			
			}
			
			i = 0;
			
			for (j = b + 1; j < 40; j++)
			{
				if (ligne[j] == ' ' || ligne[j] == '\n' || ligne[j] == '\0')
				{
					j = 812;
				}
				
				else
				{
					tailleY[i] = ligne[j];
				}
				
				i++;
			
			}
		
		}
	
	}
	
	*x = atoi(tailleX);
	*y = atoi(tailleY);
}

