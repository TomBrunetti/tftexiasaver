#include "statique.h"
//[]

void main()
{
	system ("clear");	

	int i = 88;
	int j, posx, posy;
	int lap = 0;
	int nbligne = 0;
	char ligne[255];
	char touche; // UTILE ?
	FILE *file = fopen ("voiture.pbm","r");
	int sizeImg[2];
	
	while (fgets (ligne, 255, file)!= NULL)
	{
		
		if (nbligne == 3)
		{
			sizeImg[lap] = taille(ligne, lap);
			posx = (178 - sizeImg[0]) / 2;
			lap ++;
			sizeImg[lap] = taille(ligne, lap);
			posy = (54 - sizeImg[1]) / 2;
			lap = 0;
		}		
			
		if (nbligne >3)
		{
		goTo(posx, posy, lap);	
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
	
	system ("/bin/stty cooked");
	system ("clear");
	fclose (file);
}
