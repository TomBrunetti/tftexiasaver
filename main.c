#include "header.h"
//[]

void main()
{
	system ("clear");	

	int i = 88;
	int j;
	int lap = 0;
	int x = 80;
	int y = 20;
	char ligne[255];
	FILE *file = fopen ("ex1.pbm","r");
	
	while (fgets (ligne, 255, file)!= NULL)
	{
	goTo(x, y, lap);
		for (j=0; j<80; j++)
		{
			if (ligne[j] == '1')
			{
				printf("%c", i);
				lap = 1;
			}
		
			if (ligne[j] == '0')
			{
				printf (" ");
			}
		}
	
	}


	fclose(file);	
}
