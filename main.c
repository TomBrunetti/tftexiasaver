#include <stdio.h>
#include <stdlib.h>
//[]

int main()
{
	system ("clear");	

	int i = 88;
	int j;
	int x = 20;
	int y = 20;
	char ligne[255];
	FILE *file = fopen ("ex1.pbm","r");

	void goto_x_y(unsigned x, unsigned y)
	{
	
		while (fgets (ligne, 255, file)!= NUL)
		{
			for (j=0; j<80; j++)
			{
				if (ligne[j] == '1')
				{
					printf("%c\033[%u;%uH", i, y, x);
				}
			
				if (ligne[j] == '0')
				{
					printf (" \033[%u;%uH", y, x);
				}
			}
		printf("\n");
		}
	}

	fclose(file);	
}
