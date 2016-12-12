#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int choix
{

int choixEcran = 0; // La variable qui dépend du choix de l'écran
const int MAX = 3, int MIN = 1; // Valeur constante qui ne peut être que entre 1 et 3

// Choix de la valeur aléatoire de choixEcran
srand(time(NULL));
choixEcran = (rand() % (MAX - MIN + 1)) + MIN;

return choixEcran;
}

int main(int argc, char *argv[])

{

switch (choix()) // Fonction qui lance le programme correspondant au nombre choisi (1 pour statique, 2 pour dynamique et 3 pour interactif
{

	case 1:
		system(statique.out);
		break;

	case 2:
		system(dynamique.out);
		break;

	case 3:
		system(interactif.out);
		break;

	defaut:
		printf("Erreur dans le choix du programme\n");
		break;

}

	return 0;
}

    

