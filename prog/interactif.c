#include "interactif.h"
//[]

void main()
{
	system("clear");

	char quit = 'p';
	char move;
	int i;	
	int x = alea(0, 172);
	int initx = x;
	int y = alea(0, 47);
	int inity = y;
	int z = alea(1,4);
	FILE *plane = fopen("rsrc/avionhaut.pbm", "r");
	afficher(plane, x, y);
	
	while(quit != 'q')
	{
		scanf("%c", &quit);
		
		if(move =='h' || z == 1)
		{
			fclose(plane);
			x = x - 1;
			plane = fopen("rsrc/avionhaut.pbm", "r");
			
		}

		else if(move =='b' || z == 2)
		{
			fclose(plane);
			x = x + 1;
			plane = fopen("rsrc/avionbas.pbm", "r");
		}

		else if(move =='g' || z == 3)
		{
			fclose(plane);
			y = y - 1;
			plane = fopen("rsrc/aviongauche.pbm", "r");
		}

		else if(move =='d' || z == 4)
		{
			fclose(plane);
			y = y + 1;
			fopen("rsrc/aviondroite.pbm", "r");
		}
		afficher(plane, x, y);		

		scanf("%c", &move);
		for(i=0; i<y+10;i++){printf(" \n");}	
	}
}
