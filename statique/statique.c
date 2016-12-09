#include "statique.h"
//[]

void main()
{
	system ("clear");	

	int i = 88;
	int j;
	int lap = 0;
	int posx = 60;
	int posy = 1;
	int nbligne = 4;
	char ligne[255];
	char touche;
	FILE *file = fopen ("voiture.pbm","r");
	int *sizeImg[2];
	
	while (fgets (ligne, 255, file)!= NULL)
	{
		
		if (nbligne == 3)
		{
			sizeImg = taille(ligne);
		}		
			
		if (nbligne >3)
		{	
			for (j=0; j<255; j++)
			{
				if (ligne[j] == '0')
				{
					printf("%c", i);
					lap = 1;
				}
			
				if (ligne[j] == '1')
				{
					printf (" ");
				}
			}
		}
	nbligne ++;
	}
	
	printf("\n");

	system ("/bin/stty raw");
	while (!touche)
	{
		touche = getchar();
	}

	fclose(file);	
	system ("/bin/stty cooked");
	system ("clear");
}
