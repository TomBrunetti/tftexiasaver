#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int choix // déclaration de la fonction choix
{
system("clear"); // on vide la console
int choixEcran = 0; // La variable qui dépend du choix de l'écran
const int MAX = 3, int MIN = 1; // Valeur constante qui ne peut être que entre 1 et 3


srand(time(NULL)); // Stop le temps
choixEcran = (rand() % (MAX - MIN + 1)) + MIN;// Choix de la valeur aléatoire de choixEcran

return choixEcran;// La fonction renvoie la variable choixEcran
}

int main(int argc, char *argv[]) // on initie le main

{

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

    

