#include "statique.h"
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

int taille (char *ligne, int loop)
{
	char taillex[5];
	char tailley[5];
	int sizeImg[2];
	int i, j, x, y;

	for (i=0; i<50; i++)
	{	
		if (ligne[i] == ' ')
		{
			j = i;
			i = 43;
		}
		
		else
		{
			taillex[i] = ligne[i];
		}
	}

	i = 0;
		
	for (j = 0; j<50; j++)
	{	
		if (ligne[j] == ' ' || ligne[j] == '\0' || ligne[j] == '\n')
		{
			j = 43;
		}
		
		else
		{
			tailley[i] = ligne[j];
		}
		
	i ++;
	}
	
	x = atoi(taillex);
	y = atoi(tailley);

	sizeImg[0] = x;
	sizeImg[1] = y;

	return sizeImg[loop];
}
