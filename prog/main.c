#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) // on initie le main

{
	system("clear");
// On nettoie la console

	switch (choix()) // Fonction qui lance le programme correspondant au nombre choisi (1 pour statique, 2 pour dynamique et 3 pour interactif
	{

		case 1:
			system(statique.out); // si choixEcran vaut 1 alors le programme choisis l'écran statique
		break; // Le programme fait un break

		case 2:
			system(dynamique.out);// si choixEcran vaut 2 alors le programme choisis l'ecran dynamique
		break;

		case 3:
			system(interactif.out);// si choixEcran vaut 3 alors le programme choisis l'ecran interactif
		break;

		defaut:
			printf("Erreur dans le choix du programme\n");// si aucun des 3 nombre n'est choisis alors le programme affiche une erreur
		break;

	}

	return 0; // le main renvoie la valeur 0 pour dire que tout c'est bien passé
}
