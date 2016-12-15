#include "main.h"
//[]

int main(int argc, char *argv[])
// on initie le main
{
	system("clear");
// On nettoie la console

	FILE *log = fopen("log","a+");
	time_t sec;
	struct tm temps;
	char infolog[255];
	char stat[6] = "-stat"; 
	int random = alea(1,3);

	if (argv[1] != NULL)
	{
		if(strcmp(argv[1], stat) == 0)
		{
			menu();
			system("vim log");
		}
	}	

	else
	{
		time(&sec);
		temps = *localtime(&sec);

		sprintf(infolog, "%d/%d/%d %d:%d:%d;%d;\n",temps.tm_mday + 1, temps.tm_mon + 1, temps.tm_year, temps.tm_hour, temps.tm_min, temps.tm_sec, random);
		fputs(infolog, log);	

		switch (random)
// Fonction qui lance le programme correspondant au nombre choisi (1 pour statique, 2 pour dynamique et 3 pour interactif
		{

			case 1:
				execl("/home/fplastina/git/projet/tftexiasaver/prog/statique.out", NULL);//system("./statique.out");//exec("./statique.out");;
				printf("statique.out\n");
// si choixEcran vaut 1 alors le programme choisis l'écran statique
			break;
// Le programme fait un break

			case 2:
				printf("dynamique.out\n");//system("./dynamique.out");
// si choixEcran vaut 2 alors le programme choisis l'ecran dynamique
			break;

			case 3:
				printf("interactif.out\n");//system("./interactif.out");
// si choixEcran vaut 3 alors le programme choisis l'ecran interactif
			break;

			defaut:
				printf("Erreur dans le choix du programme\n");
// si aucun des 3 nombre n'est choisis alors le programme affiche une erreur
			break;

		}
	}

	return 0;
// le main renvoie la valeur 0 pour dire que tout c'est bien passé
}
