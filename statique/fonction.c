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

int *taille (char *ligne)
{
	char taillex[5];
	char tailley[5];
	int *sizeImg[2];
	int i;
	int j;

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
		
	while (j<50)
	{	
		if (ligne[j] == ' ' || ligne[j] == '\0' || ligne[j] == '\n')
		{
			j = 43;
		}
		
		else
		{
			taillex[i] = ligne[j];
		}
		
	i ++;
	j ++;
	}
	
	sizeImg[0] = atoi(taillew);
	sizeImg[1] = atoi(tailley);
}
