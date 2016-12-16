#include "dynamique.h"
//[]

void main()
{
	system("clear");
	
	int continuer = 1;
	int i, j;
	time_t sec;
	struct tm temps;
	char strHeure[2];
	char strMin[2];
	char strSec[2];
	char name[20];
	char ligne[255] = "\0";
	char dessin[255] = "\0";
	char space[255] = "\0";
	char ligne1[255] = "\0";
	char ligne2[255] = "\0";
	char ligne3[255] = "\0";
	char ligne4[255] = "\0";
	char ligne5[255] = "\0";
	char save;
	FILE * dizh;
	FILE * unith;	
	FILE * dizm;
	FILE * unitm;
	FILE * dizs;
	FILE * units;
	FILE * dot;
	
	for(i = 0; i < 70; i++){sprintf (space, "%s ", space);}
	for(i = 0; i<20; i++){printf("\n");}

	while(continuer)
{
	dot = fopen("rsrc/deuxPoints.pbm","r");
	time (&sec);
	temps = *localtime(&sec);
	sprintf (strHeure, "%d", temps.tm_hour);
	if (strlen(strHeure) == 1)
	{
		save = strHeure[0];
		sprintf(strHeure, "0%c", save);
	}
	sprintf (strMin, "%d", temps.tm_min);
	if (strlen(strMin) == 1)
	{
		save = strMin[0];
		sprintf(strMin, "0%c", save);
	}
	sprintf (strSec, "%d", temps.tm_sec);
	if (strlen(strSec) == 1)
	{
		save = strSec[0];
		sprintf(strSec, "0%c", save);
	}

	for(i=0; i<2; i++)
	{
		save = strHeure[i];
		sprintf (name, "rsrc/%c.pbm", save);
		if (i == 0){dizh = fopen(name, "r");}
		if (i == 1){unith = fopen(name, "r");}
	}

	for(i=0; i<2; i++)
	{
		save = strMin[i];
		sprintf (name, "rsrc/%c.pbm", save);
		if (i == 0){dizm = fopen(name, "r");}
		if (i == 1){unitm = fopen(name, "r");}
	}
	
	for(i=0; i<2; i++)
	{
		save = strSec[i];
		sprintf (name, "rsrc/%c.pbm", save);
		if (i == 0){dizs = fopen(name, "r");}
		if (i == 1){units = fopen(name, "r");}
	}


	i = 0;
	while (fgets (ligne, 255, dizh) != NULL)
	{
		i++;
		if (i == 5)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne1, "%s%s",space, dessin); 
		}
		sprintf(dessin, "\0");	

		if (i == 6)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne2, "%s%s",space, dessin); 
		}	
		sprintf(dessin, "\0");	

		if (i == 7)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne3, "%s%s",space, dessin); 
		}	
		sprintf(dessin, "\0");	

		if (i == 8)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne4, "%s%s",space, dessin); 
		}	
		sprintf(dessin, "\0");
	
		if (i == 9)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne5, "%s%s",space, dessin); 
		}	
		sprintf(dessin, "\0");	
	}

	i = 0;
	while (fgets (ligne, 255, unith) != NULL)
	{
		i++;
		if (i == 5)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne1, "%s  %s",ligne1, dessin); 
		}
		sprintf(dessin, "\0");	

		if (i == 6)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne2, "%s  %s",ligne2, dessin); 
		}	
		sprintf(dessin, "\0");	

		if (i == 7)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne3, "%s  %s",ligne3, dessin); 
		}	
		sprintf(dessin, "\0");	

		if (i == 8)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne4, "%s  %s",ligne4, dessin); 
		}	
		sprintf(dessin, "\0");
	
		if (i == 9)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne5, "%s  %s",ligne5, dessin); 
		}	
		sprintf(dessin, "\0");	
	}


	i = 0;
	while (fgets (ligne, 255, dot) != NULL)
	{
		i++;
		if (i == 5)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne1, "%s  %s",ligne1, dessin); 
		}
		sprintf(dessin, "\0");	

		if (i == 6)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne2, "%s  %s",ligne2, dessin); 
		}	
		sprintf(dessin, "\0");	

		if (i == 7)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne3, "%s  %s",ligne3, dessin); 
		}	
		sprintf(dessin, "\0");	

		if (i == 8)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne4, "%s  %s",ligne4, dessin); 
		}	
		sprintf(dessin, "\0");
	
		if (i == 9)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne5, "%s  %s",ligne5, dessin); 
		}	
		sprintf(dessin, "\0");	
	}

	i = 0;
	while (fgets (ligne, 255, dizm) != NULL)
	{
		i++;
		if (i == 5)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne1, "%s  %s",ligne1, dessin); 
		}
		sprintf(dessin, "\0");	

		if (i == 6)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne2, "%s  %s",ligne2, dessin); 
		}	
		sprintf(dessin, "\0");	

		if (i == 7)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne3, "%s  %s",ligne3, dessin); 
		}	
		sprintf(dessin, "\0");	

		if (i == 8)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne4, "%s  %s",ligne4, dessin); 
		}	
		sprintf(dessin, "\0");
	
		if (i == 9)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne5, "%s  %s",ligne5, dessin); 
		}	
		sprintf(dessin, "\0");	
	}

	i = 0;
	while (fgets (ligne, 255, unitm) != NULL)
	{
		i++;
		if (i == 5)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne1, "%s  %s",ligne1, dessin); 
		}
		sprintf(dessin, "\0");	

		if (i == 6)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne2, "%s  %s",ligne2, dessin); 
		}	
		sprintf(dessin, "\0");	

		if (i == 7)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne3, "%s  %s",ligne3, dessin); 
		}	
		sprintf(dessin, "\0");	

		if (i == 8)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne4, "%s  %s",ligne4, dessin); 
		}	
		sprintf(dessin, "\0");
	
		if (i == 9)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne5, "%s  %s",ligne5, dessin); 
		}	
		sprintf(dessin, "\0");	
	}

	fclose(dot);
	dot = fopen("rsrc/deuxPoints.pbm", "r");

	i = 0;
	while (fgets (ligne, 255, dot) != NULL)
	{
		i++;
		if (i == 5)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne1, "%s  %s",ligne1, dessin); 
		}
		sprintf(dessin, "\0");	

		if (i == 6)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne2, "%s  %s",ligne2, dessin); 
		}	
		sprintf(dessin, "\0");	

		if (i == 7)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne3, "%s  %s",ligne3, dessin); 
		}	
		sprintf(dessin, "\0");	

		if (i == 8)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne4, "%s  %s",ligne4, dessin); 
		}	
		sprintf(dessin, "\0");
	
		if (i == 9)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne5, "%s  %s",ligne5, dessin); 
		}	
		sprintf(dessin, "\0");	
	}

	i = 0;
	while (fgets (ligne, 255, dizs) != NULL)
	{
		i++;
		if (i == 5)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne1, "%s  %s",ligne1, dessin); 
		}
		sprintf(dessin, "\0");	

		if (i == 6)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne2, "%s  %s",ligne2, dessin); 
		}	
		sprintf(dessin, "\0");	

		if (i == 7)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne3, "%s  %s",ligne3, dessin); 
		}	
		sprintf(dessin, "\0");	

		if (i == 8)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne4, "%s  %s",ligne4, dessin); 
		}	
		sprintf(dessin, "\0");
	
		if (i == 9)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne5, "%s  %s",ligne5, dessin); 
		}	
		sprintf(dessin, "\0");	
	}

	i = 0;
	while (fgets (ligne, 255, units) != NULL)
	{
		i++;
		if (i == 5)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne1, "%s  %s",ligne1, dessin); 
		}
		sprintf(dessin, "\0");	

		if (i == 6)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne2, "%s  %s",ligne2, dessin); 
		}	
		sprintf(dessin, "\0");	

		if (i == 7)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne3, "%s  %s",ligne3, dessin); 
		}	
		sprintf(dessin, "\0");	

		if (i == 8)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne4, "%s  %s",ligne4, dessin); 
		}	
		sprintf(dessin, "\0");
	
		if (i == 9)
		{
			for(j = 0; j<255; j++)
			{
				if (ligne[j] == '1'){sprintf(dessin, "%s#", dessin);}
				if (ligne[j] == '0'){sprintf(dessin, "%s ", dessin);}
			}
			sprintf (ligne5, "%s  %s",ligne5, dessin); 
		}	
		sprintf(dessin, "\0");	
	}
	
	fclose(dizh);
	fclose(unith);
	fclose(dizm);
	fclose(unitm);
	fclose(dizs);
	fclose(units);
	
	printf("%s\n%s\n%s\n%s\n%s\n", ligne1, ligne2, ligne3, ligne4, ligne5);
	for (i=0; i<15; i++){printf("\n");}
	for (i=0; i<69; i++){printf(" ");}
	for (i=0; i<90; i++){sprintf(dessin, "%s ", dessin);}
	puts("Cette image sera actualisée dans 10 secondes");
	for (i=0; i<10; i++)
	{	
		printf("%s", dessin);
		puts(" .");
		sleep (1);
	}
	system("clear");
	for(i = 0; i<20; i++){printf("\n");}	
}}
