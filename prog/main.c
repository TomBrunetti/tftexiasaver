#include "main.h"
//[]

int main(int argc, char *argv[])
// on initie le main
{
	system("clear");
// On nettoie la console

	FILE *log = fopen("log","r+");
// On charge le fichier log
	time_t sec;
// On cree la structure qui relevera l'heure en secondes
	struct tm temps;
// On cree la structure qui comportera l'heure sous forme "conventionnelle"
	char infolog[255];
// On cree la string qui contiendra les infos pour le log
	char stat[6] = "-stat"; 
// On cree la string qui verifiera l'argument "-stat"
	int random = alea(1,2);
// On prend un nombre aleatoire entre un et deux

	if (argv[1] != NULL)
// Si il y a un arguments
	{
		if(strcmp(argv[1], stat) == 0)
// Si l'argument est "-stat"	
		{
			int menuChoice = menu();
// On lance le menu
			if(menuChoice == 1){system("cat log");}
// Si c'est la premiere option, on affiche le fichier log
			if(menuChoice == 2){statistique(log);}
// Si c'est le deuxieme, on affiche les pourcentages
		}
	}	

	else
// Si il n'y a pas d'arguments
	{
		time(&sec);
// On releve l'heure en secondes
		temps = *localtime(&sec);
// On construit l'heure sous forme "conventionnelle"

		switch (random)
// Fonction qui lance le programme correspondant au nombre choisi (1 pour statique, 2 pour dynamique et 3 pour interactif
		{

			case 1:
				execl("/home/fplastina/git/projet/tftexiasaver/prog/statique.out", NULL);
// si choixEcran vaut 1 alors le programme choisis l'écran statique
			break;
// Le programme fait un break

			case 2:
				execl("/home/fplastina/git/projet/tftexiasaver/prog/dynamique.out", NULL);
// si choixEcran vaut 2 alors le programme choisis l'ecran dynamique
				sprintf(infolog, "%d/%d/%d %d:%d:%d;%d;\n",temps.tm_mday + 1, temps.tm_mon + 1, temps.tm_year, temps.tm_hour, temps.tm_min, temps.tm_sec, random);
// On rempli la chaine de caractere infolog avec les info de l'historique
				fputs(infolog, log);
// On construit l'historique
			break;

			case 3:
				execl("/home/fplastina/git/projet/tftexiasaver/prog/interactif.out", NULL);
// si choixEcran vaut 3 alors le programme choisis l'ecran interactif
				sprintf(infolog, "%d/%d/%d %d:%d:%d;%d;\n",temps.tm_mday + 1, temps.tm_mon + 1, temps.tm_year, temps.tm_hour, temps.tm_min, temps.tm_sec, random);
// On rempli la chaine de caractere infolog avec les info de l'historique
				fputs(infolog, log);
// On construit l'historique
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
